#include "pch.h"
#include "../DivideProject/MyDivide.cpp"




TEST(MyDivideTest, divideByZero) {

	MyDivide m;

	try {
		m.Divide(10, 0);
		FAIL() << "Expected std::out_of_range";
	}
	catch (std::out_of_range const & err) {
		EXPECT_EQ(err.what(), std::string("Can't divide by zero"));
	}
	catch (...) {
		FAIL() << "Expected std::out_of_range";
	}

}

TEST(MyDivideTest, divideByValidNumber) {

	MyDivide m;
	float expected = 2.0;
	float a = 10.0, b = 5.0;
	float res = m.Divide(a, b);
	EXPECT_EQ(expected, res);


}
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

