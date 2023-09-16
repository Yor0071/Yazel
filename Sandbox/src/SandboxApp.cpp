#include <Yazel.h>

class Sandbox : public Yazel::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Yazel::Application* Yazel::CreateApplication()
{
	return new Sandbox();
}