#pragma once

#ifdef CB_PLATFORM_WINDOWS
extern Cerealbox::Application* Cerealbox::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cerealbox::CreateApplication();
	app->Run();
	delete app;
};
#endif