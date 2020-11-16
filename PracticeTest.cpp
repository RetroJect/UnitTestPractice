/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
  protected:
    PracticeTest(){} //constructor runs before each test
    virtual ~PracticeTest(){} //destructor cleans up after tests
    virtual void SetUp(){} //sets up before each test (after constructor)
    virtual void TearDown(){} //clean up after each test, (before destructor)
};

/**
 * Tests isPalindrome
**/

TEST(PracticeTest, is_not_simple_palindrome)
{
  Practice obj;
  bool actual = obj.isPalindrome("Not a palindrome");
  ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_blank_palindrome)
{
  Practice obj;
  bool actual = obj.isPalindrome("");
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
  Practice obj;
  bool actual = obj.isPalindrome("racecar");
  ASSERT_TRUE(actual);
}

/**
 * Tests sortDescending
**/

TEST(PracticeTest, sort_small)
{
  Practice obj;
  int first, second, third;
  first = 1;
  second = 2;
  third = 3;
  obj.sortDescending(first, second, third);
  bool actual = (first >= second) && (second >= third);
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_large)
{
  Practice obj;
  int first, second, third;
  first = 100;
  second = 250;
  third = 324;
  obj.sortDescending(first, second, third);
  bool actual = (first >= second) && (second >= third);
  ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_small_bad)
{
  Practice obj;
  int first, second, third;
  first = 1;
  second = 2;
  third = 3;
  obj.sortDescending(first, second, third);
  bool actual = (first < third);
  ASSERT_FALSE(actual);
}