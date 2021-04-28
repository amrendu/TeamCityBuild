#include "pch.h"
#include "../MathProject/MyMath.cpp"


TEST(Divide, validnumbers) {

	MyMath m;
	double res = m.Divide(10, 2);
	EXPECT_EQ(res, 5);

}

TEST(Divide, dividebyzero) {

	MyMath m;

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
int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

