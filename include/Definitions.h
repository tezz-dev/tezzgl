#ifndef TEZZGL_DEFINITIONS_H
#define TEZZGL_DEFINITIONS_H

#define CreateTypeAlias(alias, type) using alias = type;

CreateTypeAlias(    String,         ,   const char*                     );
CreateTypeAlias(    width,          ,   x                               );
CreateTypeAlias(    height,         ,   y                               );
CreateTypeAlias(    RefreshRate     ,   int                             );

CreateTypeAlias(    ShareWindow     ,   GLFWwindow*                     );
CreateTypeAlias(    Point2f         ,   Point2<float>                   );
CreateTypeAlias(    Point2d         ,   Point2<int>                     );
CreateTypeAlias(    Offset          ,   Point2<float>                   );
CreateTypeAlias(    Size            ,   Point2<int>                     );
CreateTypeAlias(    Position        ,   Point2<int>                     );

CreateTypeAlias(    PMonitor        ,   Property<Monitor>               );
CreateTypeAlias(    PShareWindow    ,   Property<ShareWindow>           );
CreateTypeAlias(    PPoint2f        ,   Property<Point2f>               );
CreateTypeAlias(    PPoint2d        ,   Property<Point2d>               );
CreateTypeAlias(    POffset         ,   Property<Offset>                );
CreateTypeAlias(    PSize           ,   Property<Size                   );
CreateTypeAlias(    PPosition       ,   Property<Position               );

#endif
