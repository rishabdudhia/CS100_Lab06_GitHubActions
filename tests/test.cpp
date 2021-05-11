#include "../header/rectangle.hpp"

#include "perimeter_test.hpp"
#include "test_constructors.hpp"
#include "test_area.hpp"
#include "gtest/gtest.h" 

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
