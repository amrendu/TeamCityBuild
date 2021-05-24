#include "pch.h"
#include "../AddProject/MyAdd.cpp"


TEST(Add, AddValidNumbers) {

	MyAdd a;
	double res = a.Add(10.0, 2.0);
	EXPECT_EQ(res, 12.0);

}


int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

