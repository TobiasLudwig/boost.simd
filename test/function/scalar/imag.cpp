//==================================================================================================
/*!

  Copyright 2016 NumScale SAS

  Distributed under the Boost Software License, Version 1.0.
  (See accompanying file LICENSE.md or copy at http://boost.org/LICENSE_1_0.txt)
*/
//==================================================================================================
#include <boost/simd/function/scalar/imag.hpp>
#include <scalar_test.hpp>
#include <boost/simd/detail/dispatch/meta/as_integer.hpp>
#include <boost/simd/constant/inf.hpp>
#include <boost/simd/constant/minf.hpp>
#include <boost/simd/constant/mone.hpp>
#include <boost/simd/constant/nan.hpp>
#include <boost/simd/constant/one.hpp>
#include <boost/simd/constant/zero.hpp>
#include <boost/simd/constant/two.hpp>

STF_CASE_TPL (" imag real",  STF_IEEE_TYPES)
{
  namespace bs = boost::simd;
  namespace bd = boost::dispatch;
  using bs::imag;

  using r_t = decltype(imag(T()));

  // return type conformity test
  STF_TYPE_IS(r_t, T);

  // specific values tests
  STF_EQUAL(imag(bs::Inf<T>()),  r_t(0));
  STF_EQUAL(imag(bs::Minf<T>()), r_t(0));
  STF_IEEE_EQUAL(imag(bs::Nan<T>()), r_t(0));
  STF_EQUAL(imag(bs::One<T>()),  r_t(0));
  STF_EQUAL(imag(bs::Zero<T>()), r_t(0));
} // end of test for floating_

