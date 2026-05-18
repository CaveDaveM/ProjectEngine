#pragma once

#ifdef PE_PLATFORM_WINDOWS

extern ProjectEngine::Application* ProjectEngine::CreateApplication();

int main(int argc, char** argv)
{
    auto app = ProjectEngine::CreateApplication();
    app->run();
    delete app;
}

#endif
