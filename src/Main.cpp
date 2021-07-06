#include <TezzGL.h>
#include <iostream>

int main() {
    Window window( "TezzGL", 600, 600 );
    Grid grid(
        20,
        20,
        (float)window.GetSize().width / 20.0f,
        (float)window.GetSize().height / 20.0f
    );
    Offset offset(0, 0);
    
    window.Init();
    while( !window.ShouldClose() ) {
        window.StartRendering();
        window.Setup();
        window.Resize();

        Artist::DrawGrid( offset, grid, window.GetSize() );
        grid.size.width = (float)window.GetSize().width / 20.f;
        grid.size.height = (float)window.GetSize().height / 20.f;
        window.EndRendering();
    }

    window.Destroy();
}
