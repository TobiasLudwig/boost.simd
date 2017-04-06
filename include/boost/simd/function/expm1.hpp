//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_EXPM1_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_EXPM1_HPP_INCLUDED

  /*!
    @ingroup group-exponential
    @defgroup real-expm1 expm1 (function object)

    This function object returns the exponential of its argument minus one:\f$e^{x}-1\f$

    @headerref{<boost/simd/function/expm1.hpp>}

    @par Description

      @code
      IEEEValue expm1(IEEEValue const& x);
      @endcode

    @par Decorators

     - std_ for floating entries calls @c std::expm1

    @par Notes

    - result is accurate even for @c x of small modulus

    @see exp


    @par Example:

      @snippet expm1.cpp expm1

    @par Possible output:

      @snippet expm1.txt expm1

  **/

#include <boost/simd/function/scalar/expm1.hpp>
#include <boost/simd/function/simd/expm1.hpp>

#endif
