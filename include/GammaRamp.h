#ifndef TEZZGL_GAMMARAMP_H
#define TEZZGL_GAMMARAMP_H

#include "GLFW/glfw3.h"
#include "Definitions.h"
#include <vector>

class GammaRamp {
private:
    GLFWgammaramp* ramp;
public:
    GammaRamp( GLFWgammaramp* ramp ): ramp(ramp) {}
    std::vector<Word> red();
    std::vector<Word> green();
    std::vector<Word> blue();
    std::vector<Words> all();
};

#endif