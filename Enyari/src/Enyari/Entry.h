#pragma once


#ifdef EY_PLATFORM_WINDOWS
extern Enyari::Application* Enyari::CreateApplication();

	int winmain(int argc, char** argv) {

		auto app = Enyari::CreateApplication();

		app->Run();
		delete app;

	}
#endif