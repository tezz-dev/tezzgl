#include "tezzgl/tezzgl.hpp"
#include "gtest/gtest.h"

TEST(TestPoint2, ConstructorInt) {
    Point2<int> a(1,2);
    ASSERT_EQ(a.x, 1);
    ASSERT_EQ(a.y, 2);
}

TEST(TestPoint2, ConstructorFloat) {
    Point2<float> a(2.0, 4.0);
    ASSERT_EQ(a.x, 2.0);
    ASSERT_EQ(a.y, 4.0);
}

TEST(TestPoint2, Equals) {
    ASSERT_TRUE(Point2<int>(1, 2) == Point2<int>(1, 2));
    ASSERT_TRUE(Point2<float>(5, 14) == Point2<float>(5, 14));
    ASSERT_FALSE(Point2<int>(12, 1) == Point2<int>(1, 12));
}

TEST(TestPoint2, NotEquals) {
    ASSERT_FALSE(Point2<int>(1, 2) != Point2<int>(1, 2));
    ASSERT_FALSE(Point2<float>(5, 14) != Point2<float>(5, 14));
    ASSERT_TRUE(Point2<int>(12, 1) != Point2<int>(1, 12));
}

TEST(TestPoint2, Addition) {
    Point2<int> a(1, 2), b(2, 3), c(3, 5);
    ASSERT_TRUE(a+b == c);
    ASSERT_TRUE(b+c != a);
}

TEST(TestPoint2, Subtraction) {
    Point2<float> a(2.0, 4.0), b(1.0, 3.0), c(1.0, 1.0);
    ASSERT_TRUE(a-b == c);
    ASSERT_TRUE(b-a != c);
}

TEST(TestPoint2, DotProduct) {
    Point2<int> a(1, 2), b(2, 3);
    ASSERT_EQ(a.dot(b), 8);
}
