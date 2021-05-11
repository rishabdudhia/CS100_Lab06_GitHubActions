#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST (TestConstructor, NoInitialization){
	Rectangle* rect1 = new Rectangle();
	rect1->set_width(4);
	rect1->set_height(3);
	int expected = 14;
 
	EXPECT_EQ(rect1->perimeter(), expected);
	
	delete rect1;
}

TEST (TestConstructor, NegativeValues) {
	Rectangle* rect2 = new Rectangle(-2,-6);
	int expected = 12;

        EXPECT_EQ(expected, rect2->area());

        delete rect2;
}

TEST (TestConstructor, Zero){
	Rectangle* rect2 = new Rectangle(0,0);
	int expected = 0;

        EXPECT_EQ(expected, rect2->area());

        delete rect2;
}
