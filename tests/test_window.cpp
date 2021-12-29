#include "tezzgl/tezzgl.hpp"
#include "gtest/gtest.h"

TEST(TestMain, WindowProperties) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    ASSERT_EQ(window.shouldClose(), false);
    ASSERT_EQ(window.size().x, 600);
    ASSERT_EQ(window.size().y, 600);
    ASSERT_EQ(window.monitor().monitor(), nullptr);
    ASSERT_EQ(Context::current().window(), window.window());
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}
