//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_IS_LTZ_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_IS_LTZ_HPP_INCLUDED

  /*!
    @ingroup group-predicates
    @defgroup real-is_ltz is_ltz (function object)

    This function object returns @ref True or @ref False according x is less than @ref Zero or not.

    @headerref{<boost/simd/function/is_ltz.hpp>}

    @par Description

      @code
      as_logical_t<Value> is_ltz(Value const& x);
      @endcode

    @par Note

     Using `is_ltz(x)` is equivalent to: `x < 0`

    @par Example:

      @snippet is_ltz.cpp is_ltz

    @par Possible output:

      @snippet is_ltz.txt is_ltz

  **/

#include <boost/simd/function/scalar/is_ltz.hpp>
#include <boost/simd/function/simd/is_ltz.hpp>

#endif
