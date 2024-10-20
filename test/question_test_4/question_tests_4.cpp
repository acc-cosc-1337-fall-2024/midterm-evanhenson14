#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Prime number tests") 
{
    // Test is_prime function
    REQUIRE(is_prime(2) == true);
    REQUIRE(is_prime(3) == true);
    REQUIRE(is_prime(4) == false);
    REQUIRE(is_prime(5) == true);
}