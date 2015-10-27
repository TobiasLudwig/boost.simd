//==================================================================================================
/*!
  @file

  @copyright 2012-2015 NumScale SAS
  @copyright 2015 J.T.Lapreste

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_TRUNC_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_TRUNC_HPP_INCLUDED

#if defined(DOXYGEN_ONLY)
namespace boost { namespace simd
{
  /*!

    @ingroup group-arithmetic

    Computes the truncation toward zero of its parameter.

    @par semantic:
    For any given value @c x of type @c T:

    @code
    T r = trunc(x);
    @endcode

    The code is similar to:

    @code
    T r = sign(x)*floor(abs(x));
    @endcode

    @par Note:

    For floating point number it is also one of the two ouputs of
    the modf function.
    And we have:

    @code
    trunc(x) + frac(x) == x;
    @endcode

    except for nans

    @par Alias

    fix

    @see abs, frac, floor, sign

    @return      a value of the same type as the input.


**/
  template<typename T> auto trunc(T const& x) {}

  namespace functional
  {
    /*!
      @ingroup group-arithmetic

      Function object tied to simd::trunc

      @see simd::trunc
    **/
    const boost::dispatch::functor<tag::trunc_> trunc = {};
  }
} }
#endif

#include <boost/simd/function/definition/trunc.hpp>
#include <boost/simd/arch/common/scalar/function/trunc.hpp>
//#include <boost/simd/arch/common/function/simd/trunc.hpp>

#endif