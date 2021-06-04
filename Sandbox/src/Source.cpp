#include <Enyari.h>

class Sandbox : public Enyari::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Enyari::Application* Enyari::CreateApplication() {
	return new Sandbox();
}