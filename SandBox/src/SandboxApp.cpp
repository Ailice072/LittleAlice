#include <LIttleAlice.h>

class Sandbox : public LittleAlice::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}

};

LittleAlice::Application* LittleAlice::CreateApplication()
{
	return new Sandbox();
}