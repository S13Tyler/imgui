#include "MaidenlessApp.h"
#include "examples/example_win32_directx12/MyDemo.h"
#include "Window_Map.h"



void Maidenless::RenderUI()
{
    MyDemo::RenderUI();

    Map::RenderUI();
}

