#include <Nexus/Graphics/StateRenderer.h>
#include <Nexus/Graphics/Renderer.h>

namespace Nexus {

	void StateRenderer::Rect(Nexus::Rect* rect, Color rectColor) {
		DrawColor(rectColor);

		if (rect->fill) SDL_RenderFillRect(Renderer::Get(), rect);

		SDL_RenderDrawRect(Renderer::Get(), rect);
	}

	void StateRenderer::Rect(FRect* rect, Color rectColor) {
		DrawColor(rectColor);

		if (rect->fill) SDL_RenderFillRectF(Renderer::Get(), rect);

		SDL_RenderDrawRectF(Renderer::Get(), rect);
	}

	void StateRenderer::DrawColor(Color color) {
		Renderer::SetDrawColor(color);
	}

}
