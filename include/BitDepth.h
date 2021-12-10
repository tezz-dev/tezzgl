#ifndef TEZZGL_BITDEPTH_H
#define TEZZGL_BITDEPTH_H

class BitDepth {
public:
    int red;
    int green;
    int blue;

    BitDepth( int _red, int _green, int _blue ) {
        red = _red;
        green = _green;
        blue = _blue;
    }
};

#endif
