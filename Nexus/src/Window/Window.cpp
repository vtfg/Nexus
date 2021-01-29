#include <Nexus/Window/Window.h>

namespace Nexus {

	Configuration Window::config;
	SDL_Window* Window::window = nullptr;
	bool Window::isOpen = false;

	SDL_Window* Window::Get() {
		return window;
	}

	Configuration& Window::GetConfig() {
		return config;
	}

	void Window::Create(Configuration& userConfig) {
		config = userConfig;

		if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
			NEXUS_CORE_ERROR("Can not init SDL: {}", SDL_GetError());
		}

		window = SDL_CreateWindow(config.Title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			config.Width, config.Height, SDL_WINDOW_RESIZABLE);

		if (window == NULL) {
			NEXUS_CORE_ERROR("Can not create window: {}", SDL_GetError());
		}

		Renderer::Create(config);

		isOpen = true;
	}

	void Window::Update() {
		if (Event::Get().type == SDL_QUIT) {
			isOpen = false;
		}
	}

	bool Window::ShouldClose() {
		return !isOpen;
	}

}
