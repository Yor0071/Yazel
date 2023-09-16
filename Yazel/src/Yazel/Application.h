#pragma once

#include "Core.h"

namespace Yazel {

	class YAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined by client
	Application* CreateApplication();

}


