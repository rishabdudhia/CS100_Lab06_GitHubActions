#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST (TestArea, Normal) {
	Rectangle* rect = new Rectangle();
	rect->set_width(2);
	rect->set_height(3);

	int expected = 6;

	EXPECT_EQ(rect->area(), expected);
	delete rect;
}

TEST (TestArea, NegVals) {
	Rectangle* rect = new Rectangle(-3, -4);

	int expected = 12;

	EXPECT_EQ(rect->area(), expected);
	delete rect;
}

TEST (TestArea, OneZero) {
	Rectangle* rect = new Rectangle();
        rect->set_width(2);
        rect->set_height(0);

        int expected = 0;

        EXPECT_EQ(rect->area(), expected);
        delete rect;
}

TEST (TestArea, TwoZeros) {
        Rectangle* rect = new Rectangle(0, 0);

        int expected = 0;

        EXPECT_EQ(rect->area(), expected);
        delete rect;
}

TEST (TestArea, Square) {
        Rectangle* rect = new Rectangle();
        rect->set_width(7);
        rect->set_height(7);

        int expected = 49;

        EXPECT_EQ(rect->area(), expected);
        delete rect;
}

TEST (TestArea, BigNums) {
        Rectangle* rect = new Rectangle(100, 50);

        int expected = 5000;

        EXPECT_EQ(rect->area(), expected);
        delete rect;
}

