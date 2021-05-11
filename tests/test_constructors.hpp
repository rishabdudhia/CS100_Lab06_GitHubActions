#include "../header/rectangle.hpp"
#include "gtest/gtest.h"

TEST (TestConstructor, Normal){
	Rectangle* rect1 = new Rectangle();
	Rectangle* rect2 = new Rectangle(5,3);

	rect1->set_width(5);
	rect1->set_height(3);

	EXPECT_EQ(rect1->perimeter(), rect2->perimeter());
	
	delete rect1;
	delete rect2;
}

TEST (TestConstructor, NegativeValues) {
	Rectangle* rect1 = new Rectangle();
	Rectangle* rect2 = new Rectangle(-2,-6);

	rect1->set_width(-2);
        rect1->set_height(-6);

        EXPECT_EQ(rect1->perimeter(), rect2->perimeter());

        delete rect1;
        delete rect2;
}

TEST (TestConstructor, Zero){
	Rectangle* rect1 = new Rectangle();
        Rectangle* rect2 = new Rectangle(0,0);

        rect1->set_width(0);
        rect1->set_height(0);

        EXPECT_EQ(rect1->area(), rect2->area());

        delete rect1;
        delete rect2;
}
