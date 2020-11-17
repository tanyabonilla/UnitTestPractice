/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

#include<iostream>

using namespace std;

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

//SAD TEST CASES
TEST(PracticeTest, symbol_notpalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(";+");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("123321");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbol_palindrome) {
    Practice obj;
    bool actual = obj.isPalindrome("]");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, ascending_nums_is_descending) {
    Practice obj;
    int first = 3, second = 32, third=100;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
}

TEST(PracticeTest, second_is_greater) {
    Practice obj;
    int first = 3, second = 100, third=5;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
}

TEST(PracticeTest, third_is_greater) {
    Practice obj;
    int first = 50, second = 5, third=500;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
    ASSERT_GT(second, third);
    ASSERT_GT(first, third);
}

TEST(PracticeTest, all_is_the_same) {
    Practice obj;
    int first = 5, second = 5, third=5;
    obj.sortDescending(first, second, third);
    ASSERT_EQ(first, second);
    ASSERT_EQ(second, third);
    ASSERT_EQ(first, third);
}