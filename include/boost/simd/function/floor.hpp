//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_FLOOR_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_FLOOR_HPP_INCLUDED

  /*!
    @ingroup group-arithmetic
    @defgroup real-floor floor (function object)

    This function object computes the greatest integral representable value of
    its parameter type which is less or equal to it.

    @headerref{<boost/simd/function/floor.hpp>}

    @par Description

      @code
      Value floor(Value const& x);
      @endcode

    @par Decorators

    - std_ for floating entries call std::floor

    @par Notes

     - @c floor is also used as parameter to pass to @ref div or @ref rem

    @see  ceil, round, nearbyint, trunc, ifloor

    @par Example:

      @snippet floor.cpp floor

    @par Possible output:

      @snippet floor.txt floor

  **/

#include <boost/simd/function/scalar/floor.hpp>
#include <boost/simd/function/simd/floor.hpp>

#endif
