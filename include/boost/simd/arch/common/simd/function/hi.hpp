//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_ARCH_COMMON_SIMD_FUNCTION_HI_HPP_INCLUDED
#define BOOST_SIMD_ARCH_COMMON_SIMD_FUNCTION_HI_HPP_INCLUDED

#include <boost/simd/function/simd/interleave_odd.hpp>
#include <boost/simd/function/simd/lo.hpp>
#include <boost/simd/function/simd/shr.hpp>
#include <boost/simd/detail/dispatch/function/overload.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/detail/dispatch/meta/scalar_of.hpp>
#include <boost/simd/detail/dispatch/meta/downgrade.hpp>
#include <boost/simd/detail/traits.hpp>
#include <boost/predef/other/endian.h>
#include <boost/config.hpp>

namespace boost { namespace simd { namespace ext
{
  namespace bd = boost::dispatch;
  BOOST_DISPATCH_OVERLOAD_IF ( hi_
                             , (typename A0, typename X)
                             , (detail::is_native<X>)
                             , bd::cpu_
                             , bs::pack_< bd::type8_<A0>, X>
                             )
  {
    using result_t = bd::as_integer_t<A0,unsigned>;
    using s_t = bd::scalar_of_t<result_t>;

    BOOST_FORCEINLINE result_t operator() ( A0 const& a0) const BOOST_NOEXCEPT
    {
      const s_t half_bits = sizeof(s_t)*(CHAR_BIT/2);
      return lo( shr(a0, half_bits) );
    }
  };

  BOOST_DISPATCH_OVERLOAD_IF ( hi_
                             , (typename A0, typename X)
                             , (detail::is_native<X>)
                             , bd::cpu_
                             , bs::pack_< bd::arithmetic_<A0>, X>
                             )
  {
    using result_t = bd::as_integer_t<A0,unsigned>;
    using down_t = bd::downgrade_t<result_t>;

    BOOST_FORCEINLINE result_t operator() ( A0 const& a0) const BOOST_NOEXCEPT
    {
      #if BOOST_ENDIAN_BIG_BYTE
#warning BIG_ENDIAN
      return bitwise_cast<result_t>(interleave_even(Zero<down_t>(), bitwise_cast<down_t>(a0)));
      #else
#warning LITTLE_ENDIAN
      return bitwise_cast<result_t>(interleave_odd(bitwise_cast<down_t>(a0), Zero<down_t>()));
      #endif
    }
  };
} } }


#endif
