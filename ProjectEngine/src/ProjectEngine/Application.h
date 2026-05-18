#pragma once

#include "Core.h"

namespace ProjectEngine
{
    class PROJECTENGINE_API Application
    {
    public:
        Application();
        virtual ~Application();
        
        void run();
    };
    
    //ToBeDefined in Client
    Application* CreateApplication();
}
