//==================================================================================================
/*!
  @file

  @copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)

**/
//==================================================================================================
#ifndef BOOST_SIMD_RANGE_DETAIL_UTIL_HPP_INCLUDED
#define BOOST_SIMD_RANGE_DETAIL_UTIL_HPP_INCLUDED

#include <boost/simd/detail/nsm.hpp>

namespace boost { namespace simd { namespace detail {
  
  namespace tt = nsm::type_traits;

  template <typename Range>
  using range_iterator = decltype(tt::begin(tt::declval<Range&>()));
} } }

#endif
