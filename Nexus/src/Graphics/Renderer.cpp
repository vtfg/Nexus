#include <Nexus/Graphics/Renderer.h>

namespace Nexus {

	SDL_Renderer* Renderer::renderer = nullptr;

	SDL_Renderer* Renderer::Get() {
		return renderer;
	}

	void Renderer::Create(Configuration& config) {
		int vsync = config.Vsync ? SDL_RENDERER_PRESENTVSYNC : 0;

		renderer = SDL_CreateRenderer(Window::Get(), -1, SDL_RENDERER_ACCELERATED | vsync);

		SDL_SetRenderDrawColor(renderer, config.ClearColor.r, config.ClearColor.g, config.ClearColor.b,
			config.ClearColor.a);

		if (renderer == NULL) {
			NEXUS_CORE_ERROR("Can not create renderer: {}", SDL_GetError());
		}
	}

	void Renderer::Clear() {
		SDL_RenderClear(renderer);
	}

	void Renderer::Present() {
		SDL_RenderPresent(renderer);
	}

	void Renderer::SetDrawColor(SDL_Color& color) {
		SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
	}

	void Renderer::DrawRect(SDL_Rect* rect) {
		SDL_RenderDrawRect(renderer, rect);
	}

}
