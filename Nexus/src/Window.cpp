#include <Nexus/Window.h>

namespace Nexus {

	WindowProps Window::props;
	SDL_Window* Window::window = nullptr;
	bool Window::isOpen = false;

	SDL_Window& Window::Get() {
		return *window;
	}

	WindowProps& Window::GetProps() {
		return props;
	}

	void Window::Create(WindowProps& windowProps) {
		props = windowProps;

		if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
			NEXUS_CORE_ERROR("Can not init SDL: {}", SDL_GetError());
		}

		window = SDL_CreateWindow(props.Title.c_str(), SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			props.Width, props.Height, SDL_WINDOW_RESIZABLE);

		if (window == NULL) {
			NEXUS_CORE_ERROR("Can not create window: {}", SDL_GetError());
		}

		Renderer::Create(props);

		isOpen = true;
	}

	bool Window::ShouldClose() {
		return !isOpen;
	}

}
