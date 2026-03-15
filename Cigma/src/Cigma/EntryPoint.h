#pragma once

#ifdef CGA_PLATFORM_WINDOWS

extern Cigma::Application* Cigma::CreateApplication();

int main(int argc, char** argv) {
	auto app = Cigma::CreateApplication();
	app->Run();
	delete app;

}

#endif
