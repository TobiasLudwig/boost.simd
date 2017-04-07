//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_IMAG_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_IMAG_HPP_INCLUDED

  /*!
    @ingroup group-predicates
    @defgroup real-is_imag is_imag (function object)

    This function object returns  [True](@ref constant-True) or  [False](@ref constant-False) according x is pure imaginary or not.
    For non complex numbers it is same as to be zero

    @headerref{<boost/simd/function/is_imag.hpp>}

    @par Description

      @code
      as_logical_t<Value> is_imag(Value const& x);
      @endcode

    @par Note

     Using `is_imag(x)` is similar to: `x == 0` for real entries.

    @par Example:

      @snippet is_imag.cpp is_imag

    @par Possible output:

      @snippet is_imag.txt is_imag

  **/

#include <boost/simd/function/scalar/is_imag.hpp>
#include <boost/simd/function/scalar/is_imag.hpp>
#include <boost/simd/function/simd/is_imag.hpp>

#endif
