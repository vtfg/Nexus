#include <Nexus/Renderer.h>

namespace Nexus {

	SDL_Renderer* Renderer::renderer = nullptr;

	SDL_Renderer& Renderer::Get() {
		return *renderer;
	}

	void Renderer::Create(WindowProps& props) {
		int vsync = props.Vsync ? SDL_RENDERER_PRESENTVSYNC : 0;

		renderer = SDL_CreateRenderer(&Window::Get(), -1, SDL_RENDERER_ACCELERATED | vsync);

		SDL_SetRenderDrawColor(renderer, props.ClearColor.r, props.ClearColor.g, props.ClearColor.b,
			props.ClearColor.a);

		if (renderer != NULL) {
			NEXUS_CORE_ERROR("Can not create renderer: {}", SDL_GetError());
		}
	}

}
