#pragma once
#include "Core.h"

namespace Enyari {
	class ENYARI_API Application
	{
	private:

	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();

}

