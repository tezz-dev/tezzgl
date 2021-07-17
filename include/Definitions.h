#ifndef TEZZGL_DEFINITIONS_H
#define TEZZGL_DEFINITIONS_H

#ifndef String
    #define String const char*
#endif

#ifndef Monitor
    #define Monitor GLFWmonitor*
#endif

#ifndef ShareWindow
    #define ShareWindow GLFWwindow*
#endif

#ifndef Point2f
    #define Point2f Point2<float>
#endif

#ifndef Point2d
    #define Point2d Point2<int>
#endif

#ifndef Offset
    #define Offset Point2<float>
#endif

#ifndef Size
    #define Size Point2<int>
#endif

#ifndef Position
    #define Position Point2<int>
#endif

#ifndef PPoint2f
    #define PPoint2f Property< Point2<float> >
#endif

#ifndef PPoint2d
    #define PPoint2d Property< Point2<int> >
#endif

#ifndef POffset
    #define POffset Property< Point2<float> >
#endif

#ifndef PSize
    #define PSize Property< Point2<int> >
#endif

#ifndef PPosition
    #define PPosition Property< Point2<int> >
#endif

#ifndef width
    #define width x
#endif

#ifndef height
    #define height y
#endif

#endif
