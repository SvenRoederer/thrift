/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements. See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership. The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied. See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#include <boost/test/unit_test.hpp>
#include <iostream>
#include "gen-cpp/Thrift5272_types.h"

BOOST_AUTO_TEST_SUITE(Thrift5272Test)

using std::string;
namespace utf = boost::unit_test;

// Define this env var to enable some logging (in case you need to debug)
#undef ENABLE_STDERR_LOGGING

using namespace thrift5272;


BOOST_AUTO_TEST_CASE( printto )
{
  auto a = Meta();
  a.channel = 50;
  a.sequence = 500;
  std::cout << "test a : ";
//a.printTo(std::cout);
  std::cout << std::to_string(a.channel);
  std::cout << std::endl;
}

BOOST_AUTO_TEST_SUITE_END()
