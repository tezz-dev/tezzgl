#ifndef TEZZGL_DEFINITIONS_H
#define TEZZGL_DEFINITIONS_H

// Aliases
#define String          const char*
#define width           x
#define height          y
#define RefreshRate     int

#define ShareWindow     GLFWwindow*
#define Point2f         Point2<float>
#define Point2d         Point2<int>
#define Offset          Point2<float>
#define Size            Point2<int>
#define Position        Point2<int>

// Properties
#define PMonitor        Property<Monitor>
#define PShareWindow    Property<ShareWindow>
#define PPoint2f        Property<Point2f>
#define PPoint2d        Property<Point2d>
#define POffset         Property<Offset>
#define PSize           Property<Size>
#define PPosition       Property<Position>

#endif
