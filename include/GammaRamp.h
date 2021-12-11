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
    std::vector<Word> red() {
        if( ramp == NULL ) return {};
        return {ramp->red, ramp->red + ramp->size};
    }
    std::vector<Word> green() {
        if( ramp == NULL ) return {};
        return {ramp->green, ramp->green + ramp->size};
    }
    std::vector<Word> blue() {
        if( ramp == NULL ) return {};
        return {ramp->blue, ramp->blue + ramp->size};
    }
    std::vector<Words> all() {
        if( ramp == NULL ) return {};
        std::vector<Words> channels;
        for( int i=0; i<ramp->size; i++ ) {
            channels.push_back(
                {
                    ramp->red[i], 
                    ramp->green[i], 
                    ramp->blue[i]
                }
            );
        }
        return channels;
    }
};

#endif