#pragma once
#include "imgui.h"


namespace MyDemo
{
    struct FDemoConfig
    {
        bool bShowExamples = true;
        bool bShowDemo = true;
        bool bShowExtraDemo = false;

        ImVec4 MyColor = ImVec4(0.45f, 0.55f, 0.60f, 1.00f);
    };

    static FDemoConfig Cfg;

    

    /**/
    void RenderUI();

    /* 1. Show the big demo window(Most of the sample code is in ImGui::ShowDemoWindow()!
     * You can browse its code to learn more about Dear ImGui!).
     */
    void RenderExampleUI();

    /* 2. Show a simple window that we create ourselves.
     * We use a Begin/End pair to created a named window.
     */
    void RenderDemoUI();
}
