
// ����ڵ�(main)����������


#pragma once

#if LA_PLATFORM_WINDOWS

extern LittleAlice::Application* LittleAlice::CreateApplication();

int main(int argc, char** argv)
{
	auto app = LittleAlice::CreateApplication();
	app->Run();
	delete app;
}

#endif // LA_PLATFORM_WINDOWS
