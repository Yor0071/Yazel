#pragma once

#ifdef YZ_PLATFORM_WINDOWS

extern Yazel::Application* Yazel::CreateApplication();

int main(int ergc, char** argv)
{
	auto app = Yazel::CreateApplication();
	app->Run();
	delete app;
}

#endif