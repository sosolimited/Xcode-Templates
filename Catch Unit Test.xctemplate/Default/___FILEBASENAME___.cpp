//
// ___FILENAME___
//
// Created by ___FULLUSERNAME___ on ___DATE___.
// ___COPYRIGHT___
//

#include "catch.hpp"

TEST_CASE("___FILEBASENAME___")
{
	auto a = 0;
	auto b = 1;

	SECTION("Write a failing test first to confirm your new test is run.")
	{
		INFO("We expect this to fail");
		REQUIRE(a == b);
	}
}
