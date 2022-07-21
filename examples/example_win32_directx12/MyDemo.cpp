#include "MyDemo.h"

#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx12.h"
#include "wtypes.h"


void MyDemo::RenderUI()
{
    if (Cfg.bShowExamples)
    {
        RenderExampleUI();
    }

    if (Cfg.bShowDemo)
    {
        RenderDemoUI();
    }
}

void MyDemo::RenderExampleUI()
{
    ImGui::ShowDemoWindow(&Cfg.bShowExamples);
}

void MyDemo::RenderDemoUI()
{
    static float testValue = 0.f;
    static int testCounter = 0;
    static const float FPS = ImGui::GetIO().Framerate;

    ImGui::Begin("Hello, world!");                          // Create a window called "Hello, world!" and append into it.
    ImGui::Text("This is some useful text.");               // Display some text (you can use a format strings too)
    ImGui::Checkbox("Demo Window", &Cfg.bShowDemo);      // Edit bools storing our window open/close state
    ImGui::Checkbox("Another Window", &Cfg.bShowExtraDemo);
    ImGui::SliderFloat("float", &testValue, 0.0f, 1.0f);            // Edit 1 float using a slider from 0.0f to 1.0f
    ImGui::ColorEdit3("clear color", (float*)&Cfg.MyColor); // Edit 3 floats representing a color

    // Buttons return true when clicked (most widgets return true when edited/activated)         
    if (ImGui::Button("Button")) testCounter++;
    ImGui::SameLine();
    ImGui::Text("counter = %d", testCounter);
    ImGui::Text("Application average %.3f ms/frame (%.1f FPS)", (1000.f / FPS), FPS);
    ImGui::End();

    if (Cfg.bShowExtraDemo)
    {
        // Pass a pointer to our bool variable (the window will have a closing button that will clear the bool when clicked)
        ImGui::Begin("Another Window", &Cfg.bShowExtraDemo);
        ImGui::Text("Hello from another window!");

        if (ImGui::Button("Close Me"))
            Cfg.bShowExtraDemo = false;

        ImGui::End();
    }
}

