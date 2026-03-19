#pragma once

#ifdef CGA_PLATFORM_WINDOWS

extern Cigma::Application* Cigma::CreateApplication();

int main(int argc, char** argv) {

	Cigma::Log::Init();

	Cigma::Log::GetCoreLogger()->warn("Initialized Cigma Log!");
	Cigma::Log::GetClientLogger()->info("Initialized Client Log");

	auto app = Cigma::CreateApplication();
	app->Run();
	delete app;

}

#endif
