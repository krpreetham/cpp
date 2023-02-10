#include "basic_sum/basic_sum.h"
#include<iostream>
#include<gtest/gtest.h>

using namespace std;

TEST(Addition_Test, Integer_Num_Test)
{
	ASSERT_TRUE(add(2,3)==5);
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
