
#include "Window_Map.h"
#include "imgui.h"



void Map::RenderUI()
{
    bool* bOpen_Map;
    const ImGuiViewport* Root = ImGui::GetMainViewport();

    ImGuiWindowFlags WFlags_Map = 0;
    WFlags_Map |= ImGuiWindowFlags_NoMove;
    WFlags_Map |= ImGuiWindowFlags_NoResize;
    WFlags_Map |= ImGuiWindowFlags_NoCollapse;
    bOpen_Map = NULL; // Don't pass our bool* to Begin

    ImGui::Begin("Elden Ring Map", bOpen_Map, WFlags_Map);

    
    ImGui::SetNextWindowPos(ImVec2(Root->WorkPos.x, Root->WorkPos.y), ImGuiCond_FirstUseEver);
    ImGui::SetNextWindowSize(Root->Size);

    ImGui::End();
}

