// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor tenpower in scalar mode for double type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/tenpower.hpp>

namespace nsb = ns::bench;
namespace bs =  boost::simd;

DEFINE_BENCH_MAIN()
{
  using T = double;
  run<T>(bs::tenpower, nsbg::rand<T>(-10, 10));
}
