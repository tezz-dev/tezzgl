#include "sstream"
#include "iostream"
#include "tezzgl/tezzgl.hpp"
#include "gtest/gtest.h"

TEST(TestLogger, IsLoggingDone) {
    std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());

    Logger::log("hello world");

    std::cout.rdbuf(p_cout_streambuf); // restore
    ASSERT_EQ(oss.str(), "hello world\n");
}
