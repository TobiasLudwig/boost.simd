//==================================================================================================
/*!
  @file
    @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
**/
//==================================================================================================
#ifndef BOOST_SIMD_FUNCTION_COMBINE_HPP_INCLUDED
#define BOOST_SIMD_FUNCTION_COMBINE_HPP_INCLUDED

  /*!
    @ingroup group-swar
    @defgroup real-combine combine (function object)

    This function object concatenates two values of the same type to build a boost::simd::pack
    but with a cardinal twice as large.

    @headerref{<boost/simd/function/combine.hpp>}

    @par Description

      @code
      Value combine(Value const& x, Value const& y);
      @endcode

    @par Scalar Semantic:
    For any scalar value @c x and @c y of type @c T , the following code:
    @code
    auto c = combine(x,y);
    @endcode
    is equivalent to :
    @code
    pack<T, 2> c(x,y);
    @endcode

    @par SIMD Semantic:
    For any type value @c x and @c y of type boost::simd::pack<T,N>, the following code:
    @code
    pack<T,2*N> c = combine(x,y);
    @endcode
    is equivalent to :
    @code
    pack<T,2*N> c(x[0],....,x[N-1],y[0],....,y[N-1]);
    @endcode
    where @c N is equal to the cardinal of both @c x and @c y.

  **/

#include <boost/simd/function/simd/combine.hpp>

#endif
