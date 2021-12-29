#include "tezzgl/tezzgl.hpp"
#include "gtest/gtest.h"

TEST(TestWindow, WindowShouldClose) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    ASSERT_EQ(window.shouldClose(), false);
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}

TEST(TestWindow, WindowSize) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,700}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    ASSERT_EQ(window.size().x, 600);
    ASSERT_EQ(window.size().y, 700);
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}

TEST(TestWindow, WindowMonitor) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    ASSERT_EQ(window.monitor().monitor(), nullptr);
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}

TEST(TestWindow, WindowContext) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    ASSERT_EQ(Context::current().window(), window.window());
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}

TEST(TestWindow, WindowAttribute) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    window.setAttribute(WindowAttribute::focused, false);
    ASSERT_EQ(window.getAttribute(WindowAttribute::focused), false);
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}

TEST(TestWindow, WindowPosition) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    window.setPosition({100, 200});
    ASSERT_EQ(window.position().x, 100);
    ASSERT_EQ(window.position().y, 200);
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}

TEST(TestWindow, WindowOpacity) {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    
    window.setOpacity(0.5);
    ASSERT_EQ(window.opacity(), 0.5);
    
    window.setShouldClose(true);
    window.destroy();
    App::terminate();
}
