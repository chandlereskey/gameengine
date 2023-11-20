#pragma once

#include "Core.h"

namespace Cerealbox {

	class CEREALBOX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in a client
	Application* CreateApplication();

}