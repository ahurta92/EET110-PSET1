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


// Array Plus Array Problem
using V = std::vector<int>; 
TEST_CASE("ARRAY PLUS ARRAY", "[arrayPlusarray]") {
    SECTION("BASIC TESTS") {
        REQUIRE(arrayPlusArray(V{ 1, 2, 3 }, V{ 4, 5, 6 }) == 21);
        REQUIRE(arrayPlusArray(V{ 1, -2, -3 }, V{ 4, -5, 6 }) == 1);
        REQUIRE(arrayPlusArray(V{ -1, -2, -3 }, V{ -4, -5, -6 }) == -21);
        REQUIRE(arrayPlusArray(V{ 0, 0, 0 }, V{ 4, 5, 6 }) == 15);
        REQUIRE(arrayPlusArray(V{ -1 }, V{ -1 }) == -2);
    }
    SECTION("Unequal Size") {

        REQUIRE(arrayPlusArray(V{ 1  }, V{ 4, 5, 6 }) == 16);
        REQUIRE(arrayPlusArray(V{ 1,2,3  }, V{  5, 6 }) == 17);


    }
}
// Returing Strings Problem
TEST_CASE("Returning string") {
        std::string first = "Hello, ";
        std::string third = " how are you doing today?";
        auto str = GENERATE(as < std::string>{}, "a", "bb", "ccc");
        REQUIRE(first + str + third == greet(str));
}
