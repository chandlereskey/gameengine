#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Cerealbox::Application* Cerealbox::CreateApplication();

int main(int argc, char** argv)
{
	Cerealbox::Log::Init();
	CB_CORE_WARN("Initialized Log!");
	int a = 1;
	CB_INFO("boom baby!{0}", a);

	auto app = Cerealbox::CreateApplication();
	app->Run();
	delete app;
};
#endif