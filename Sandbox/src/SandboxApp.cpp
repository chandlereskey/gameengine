#include "Cerealbox.h"

class Sandbox : public Cerealbox::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};

Cerealbox::Application* Cerealbox::CreateApplication()
{
	return new Sandbox();
}