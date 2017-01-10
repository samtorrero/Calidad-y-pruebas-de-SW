#include "first.h"
#include "gtest/gtest.h"

TEST(Factorial, positivos){
	ASSERT_EQ(1,factorial(1));
	ASSERT_EQ(120,factorial(5));
}
