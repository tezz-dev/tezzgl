#include "GammaRamp.h"

std::vector<Word> GammaRamp::red() {
        if( ramp == NULL ) return {};
        return {ramp->red, ramp->red + ramp->size};
    }
    std::vector<Word> GammaRamp::green() {
        if( ramp == NULL ) return {};
        return {ramp->green, ramp->green + ramp->size};
    }
    std::vector<Word> GammaRamp::blue() {
        if( ramp == NULL ) return {};
        return {ramp->blue, ramp->blue + ramp->size};
    }
    std::vector<Words> GammaRamp::all() {
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