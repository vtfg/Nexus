#include <Nexus/Window.h>
#include <Nexus/Log.h>

namespace Nexus {
	WindowProps Window::props;
	SDL_Window* Window::window = nullptr;
	SDL_Renderer* Window::renderer = nullptr;
	bool Window::isOpen = false;

	SDL_Window& Window::Get() {
		return *window;
	}

	SDL_Renderer& Window::GetRenderer() {
		return *renderer;
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

		int vsync = props.Vsync ? SDL_RENDERER_PRESENTVSYNC : 0;
		renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | vsync);

		if (renderer == NULL) {
			NEXUS_CORE_ERROR("Can not create renderer: {}", SDL_GetError());
		}

		isOpen = true;
	}

}
