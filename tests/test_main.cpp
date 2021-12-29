#include "tezzgl/tezzgl.hpp"

int main() {
    App::init();
    Window window;
    window.createWindow("Hello", {600,600}, {nullptr}, {nullptr});
    Context::makeCurrent(window);
    while(!window.shouldClose()) {
        App::startRendering();
        App::endRendering();
    }
    window.destroy();
    App::terminate();
}
