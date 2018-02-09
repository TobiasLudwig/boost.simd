// -------------------------------------------------------------------------------------------------
//                              Copyright 2016 - NumScale SAS
//
//                   Distributed under the Boost Software License, Version 1.0.
//                        See accompanying file LICENSE.txt or copy at
//                            http://www.boost.org/LICENSE_1_0.txt
// -------------------------------------------------------------------------------------------------

/// bench for functor ldexp in scalar mode for double type with no decorator (regular call).
#include <simd_bench.hpp>
#include <boost/simd/function/ldexp.hpp>
namespace bd =  boost::dispatch;
namespace nsb = ns::bench;
namespace bs =  boost::simd;
namespace bd =  boost::dispatch;
struct lde
{
  template<class T> T operator()(const T & a, const T & N) const
  {
    return bs::ldexp(a, bd::as_integer_t<T>(N));
  }
};

DEFINE_BENCH_MAIN()
{
  using T = double;
  run<T>(lde(), nsbg::rand<T>(-10, 10), nsbg::rand<T>(-10, 10));
}
