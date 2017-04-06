//==================================================================================================
/*!
  @file

    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_MAXNUM_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_MAXNUM_HPP_INCLUDED

  /*!
    @ingroup group-ieee
    @defgroup real-maxnum maxnum (function object)

    This function object returns  the largest of two floating point arguments, treating NaNs
    as missing data (between a NaN and a numeric value, the numeric value is chosen).

    @headerref{<boost/simd/function/maxnum.hpp>}

    @par Description

      @code
      Value maxnum(Value const& x, Value const& y);
      @endcode

    @par Decorators

     - std_ for floating entries calls the stdlibc++ function std::fmax.

    @see max, maxnummag,  maxmag

    @par Example:

      @snippet maxnum.cpp maxnum

    @par Possible output:

      @snippet maxnum.txt maxnum

  **/

#include <boost/simd/function/scalar/maxnum.hpp>
#include <boost/simd/function/simd/maxnum.hpp>

#endif
