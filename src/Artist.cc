//
// Created by tezz-io on 12/12/21.
//

#include "Artist.h"

void Artist::useColor( float red, float green, float blue ) {
    glColor3f( red, green, blue );
}

void Artist::drawGrid( Offset offset, Grid grid, Size size ) {
    glBegin( GL_LINES );

    for( int i=0; i<=grid.count.x; i++ ) {
        glVertex2f (
                offset.x,
                offset.y + (float)i * (float)grid.size.x
        );
        glVertex2f (
                (float)size.x - offset.x,
                offset.y + (float)i * (float)grid.size.x
        );
    }

    for( int i=0; i<=grid.count.y; i++ ) {
        glVertex2f (
                offset.x + (float)i * (float)grid.size.y,
                offset.y
        );
        glVertex2f (
                offset.x + (float)i * (float)grid.size.y,
                (float)size.y - offset.y
        );
    }

    glEnd();
}

void Artist::drawRect( Point2f p1, Point2f p2, Offset offset, Size size ) {
    glRectd(
            offset.x + p1.x * (float)size.x,
            offset.y + p1.x * (float)size.y,
            offset.x + p2.x * (float)size.x,
            offset.y + p2.y * (float)size.y
    );
}
