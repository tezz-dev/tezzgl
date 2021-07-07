#ifndef TEZZGL_ARTIST_H
#define TEZZGL_ARTIST_H

#include <GLFW/glfw3.h>

#include "Point2.h"
#include "Grid.h"
#include "Definitions.h"

class Artist {
public:
    static void UseColor( float, float, float );
    static void DrawGrid( Offset, Grid, Size );
    static void DrawRect(
        Point2f,
        Point2f,
        Offset = {0.0, 0.0},
        Size = {1, 1}
    );
};

void Artist::UseColor( float red, float green, float blue ) {
    glColor3f( red, green, blue );
}

void Artist::DrawGrid( Offset offset, Grid grid, Size size ) {
    glBegin( GL_LINES );

    for( int i=0; i<=grid.count.x; i++ ) {
        glVertex2f (
            offset.x,
            offset.y + (float)i * (float)grid.size.width
        );
        glVertex2f (
            (float)size.width - offset.x,
            offset.y + (float)i * (float)grid.size.width
        );
    }

    for( int i=0; i<=grid.count.y; i++ ) {
        glVertex2f (
            offset.x + (float)i * (float)grid.size.height,
            offset.y
        );
        glVertex2f (
            offset.x + (float)i * (float)grid.size.height,
            (float)size.height - offset.y
        );
    }

    glEnd();
}

void Artist::DrawRect( Point2f p1, Point2f p2, Offset offset, Size size ) {
    glRectd(
        offset.x + p1.x * size.width,
        offset.y + p1.x * size.height,
        offset.x + p2.x * size.width,
        offset.y + p2.y * size.height
    );
}

#endif
