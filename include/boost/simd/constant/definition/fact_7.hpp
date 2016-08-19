//==================================================================================================
/*!
  @file

  @copyright 2012-2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_CONSTANT_DEFINITION_FACT_7_HPP_INCLUDED
#define BOOST_SIMD_CONSTANT_DEFINITION_FACT_7_HPP_INCLUDED

#include <boost/simd/config.hpp>
#include <boost/simd/detail/brigand.hpp>
#include <boost/simd/detail/dispatch.hpp>
#include <boost/simd/detail/constant_traits.hpp>
#include <boost/simd/detail/dispatch/function/make_callable.hpp>
#include <boost/simd/detail/dispatch/hierarchy/functions.hpp>
#include <boost/simd/detail/dispatch/as.hpp>

namespace boost { namespace simd
{
  namespace tag
  {
    struct fact_7_ : boost::dispatch::constant_value_<fact_7_>
    {
      BOOST_DISPATCH_MAKE_CALLABLE(ext,fact_7_,boost::dispatch::constant_value_<fact_7_>);
      BOOST_SIMD_REGISTER_CONSTANT(5040, 0x459d8000U, 0x40b3b00000000000ULL);
    };
  }

  namespace ext
  {
    BOOST_DISPATCH_FUNCTION_DECLARATION(tag,fact_7_);
  }

  namespace detail
  {
    BOOST_DISPATCH_CALLABLE_DEFINITION(tag::fact_7_,fact_7);
  }

  template<typename T> BOOST_FORCEINLINE auto Fact_7()
  BOOST_NOEXCEPT_DECLTYPE(detail::fact_7( boost::dispatch::as_<T>{}))
  {
    return detail::fact_7( boost::dispatch::as_<T>{} );
  }
} }

#endif
