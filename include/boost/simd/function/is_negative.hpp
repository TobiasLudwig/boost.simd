//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_NEGATIVE_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_NEGATIVE_HPP_INCLUDED

  /*!
    @ingroup group-predicates
    @defgroup real-is_negative is_negative (function object)

    This function object returns @ref True if x is negative else @ref False.

    This function differs from @ref is_ltz for floating point arguments,
    because @ref Mzero is negative but not less than zero, and @ref Mzero is
    not positive and not greater than zero, It's probably @ref is_ltz that
    you want.

    @headerref{<boost/simd/function/is_negative.hpp>}

    @par Description

      @code
      as_logical_t<Value> is_negative(Value const& x);
      @endcode

    @par Note

     Using `is_negative(x)` is similar to `bitofsign(x) == 1`

    @par Example:

      @snippet is_negative.cpp is_negative

    @par Possible output:

      @snippet is_negative.txt is_negative

  **/

#include <boost/simd/function/scalar/is_negative.hpp>
#include <boost/simd/function/simd/is_negative.hpp>

#endif
