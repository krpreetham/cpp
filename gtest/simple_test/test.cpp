#include<iostream>
#include<gtest/gtest.h>

using namespace std;

class Sum
{
	int num1, num2, sum;
	public:
		Sum (int a, int b)
		{
			num1=a;
			num2=b;
		}
		void add()
		{
			sum=num1+num2;
		}

		void sub()
		{
			sum = num1-num2;
		}

		int get_sum()
		{
			return sum;		
		}
};

struct SumTest : public testing::Test {
	Sum *sum;
	void SetUp()
	{
		sum=new Sum(4, 1);
	}
	void TearDown()
	{
		delete sum;
	}
};

TEST_F( SumTest, Adding_positive_number)
{
	sum->add();
	EXPECT_EQ(sum->get_sum(),5);
}

TEST_F( SumTest, Substraction)
{
	sum->sub();
	EXPECT_EQ(sum->get_sum(),3);
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
