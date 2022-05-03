#include "gtest/gtest.h"

GTEST_TEST( Test_Name, Sub_Test_Name ) {
	EXPECT_EQ(1,1);
	ASSERT_EQ(1,1);
	std::cout << "Just to be sure this is executed..." << std::endl;
};
