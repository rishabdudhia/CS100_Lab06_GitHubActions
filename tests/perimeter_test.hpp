#include "../header/rectangle.hpp"
#include "gtest/gtest.h"
using namespace std;

TEST (TestPerimeter, Normal) {
	Rectangle* rect = new Rectangle();
	rect->set_width(4);
	rect->set_height(3);

	int expected = 14;

	EXPECT_EQ(rect->perimeter(), expected);
	delete rect;
}

TEST (TestPerimeter, NegVals) {
	Rectangle* rect = new Rectangle(-5, -4);

	int expected = 18;

	EXPECT_EQ(rect->perimeter(), expected);
	delete rect;
}

TEST (TestPerimeter, OneZero) {
	Rectangle* rect = new Rectangle();
        rect->set_width(2);
        rect->set_height(0);

        int expected = 4;

        EXPECT_EQ(rect->perimeter(), expected);
        delete rect;
}

TEST (TestPerimeter, TwoZeros) {
        Rectangle* rect = new Rectangle(0, 0);

        int expected = 0;

        EXPECT_EQ(rect->perimeter(), expected);
        delete rect;
}

TEST (TestPerimeter, Square) {
        Rectangle* rect = new Rectangle();
        rect->set_width(7);
        rect->set_height(7);

        int expected = 24;

        EXPECT_EQ(rect->perimeter(), expected);
        delete rect;
}

TEST (TestPerimeter, BigNums) {
        Rectangle* rect = new Rectangle(132, 34);

        int expected = 332;

        EXPECT_EQ(rect->perimeter(), expected);
        delete rect;
}
