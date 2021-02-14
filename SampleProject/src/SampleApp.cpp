#include <Realiti2D.h>
#define WIDTH 1280
#define HEIGHT 720

class SampleApp : public Realiti2D::Application {
public:
	SampleApp(const float& Width, const float& Height, const std::string Title) : Application(Width, Height, Title) {}
	~SampleApp() {}

	void Start() override {
		DEBUG_INFO("Starting Sample App!");
	}
};

Realiti2D::Application* Realiti2D::CreateApplication() {
	return new SampleApp(WIDTH, HEIGHT, "Sample Project");
}