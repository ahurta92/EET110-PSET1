//
// Created by adrian on 10/30/21.
//

#include "catch.hpp"
#include "problems.h"

TEST_CASE("the ultimate answer") { REQUIRE("42" == base13(6 * 9)); }
std::vector<int> ans{4, 3, 2, 1};
TEST_CASE("Digitize Example") { REQUIRE(digitize(1234) == ans); }
TEST_CASE("Decoder Example") { REQUIRE(duplicate_encoder("din") == "((("); }
TEST_CASE("REVERSE ") { REQUIRE(reverse("Hello World") == "DLROw OLLEh"); };
