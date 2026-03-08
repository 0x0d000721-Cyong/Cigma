#include"Cigma.h"

class Sandbox : public Cigma::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Cigma::Application* Cigma:: CreateApplication() {
	return new Sandbox();
}