//==================================================================================================
/**
  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_X86_SSE2_SIMD_FUNCTION_LOAD_HPP_INCLUDED
#define BOOST_SIMD_ARCH_X86_SSE2_SIMD_FUNCTION_LOAD_HPP_INCLUDED

#include <boost/simd/detail/overload.hpp>
#include <boost/simd/meta/is_pointing_to.hpp>
#include <boost/simd/detail/dispatch/adapted/common/pointer.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = ::boost::dispatch;
  namespace bs = ::boost::simd;

  //------------------------------------------------------------------------------------------------
  // load from a pointer of double
  BOOST_DISPATCH_OVERLOAD ( load_
                          , (typename Target, typename Pointer)
                          , bs::sse2_
                          , bd::pointer_<bd::scalar_<bd::double_<Pointer>>,1u>
                          , bd::target_<bs::pack_<bd::double_<Target>,bs::sse_>>
                          )
  {
    using target = typename Target::type;

    BOOST_FORCEINLINE target do_(Pointer p, nsm::size_t<2> const&) const
    {
      return _mm_loadu_pd(p);
    }

    BOOST_FORCEINLINE target do_(Pointer p, nsm::size_t<1> const&) const
    {
      return _mm_loadl_pd(target{},p);
    }

    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return do_(p, nsm::size_t<target::static_size>{});
    }
  };

  //------------------------------------------------------------------------------------------------
  // load from a pointer of integer
  BOOST_DISPATCH_OVERLOAD_IF( load_
                            , (typename Target, typename Pointer)
                            , (bs::is_pointing_to<Pointer,typename Target::type::value_type>)
                            , bs::sse2_
                            , bd::pointer_<bd::scalar_<bd::integer_<Pointer>>,1u>
                            , bd::target_<bs::pack_<bd::integer_<Target>,bs::sse_>>
                           )
  {
    using target  = typename Target::type;

    BOOST_FORCEINLINE target do_(Pointer p, nsm::size_t<16> const&) const
    {
      return _mm_loadu_si128( (__m128i*)(p) );
    }

    BOOST_FORCEINLINE target do_(Pointer p, nsm::size_t<8> const&) const
    {
      return _mm_loadl_epi64( (__m128i*)(p) );
    }

    template<typename... I>
    BOOST_FORCEINLINE target do_(Pointer p, nsm::list<I...> const&) const
    {
      return make(Target{}, p[I::value]...);
    }

    template<typename N> BOOST_FORCEINLINE target do_(Pointer p, N const&) const
    {
      return do_(p, typename target::traits::element_range{});
    }

    BOOST_FORCEINLINE target operator()(Pointer p, Target const&) const
    {
      return do_(p, nsm::size_t<target::alignment>{});
    }
  };
} } }

#endif
