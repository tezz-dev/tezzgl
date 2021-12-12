#ifndef TEZZGL_ARTIST_H
#define TEZZGL_ARTIST_H

#include <GLFW/glfw3.h>

#include "Point2.h"
#include "Grid.h"
#include "Definitions.h"

class Artist {
public:
    static void useColor( float, float, float );
    static void drawGrid( Offset, Grid, Size );
    static void drawRect(
        Point2f,
        Point2f,
        Offset = {0.0, 0.0},
        Size = {1, 1}
    );
};

#endif
