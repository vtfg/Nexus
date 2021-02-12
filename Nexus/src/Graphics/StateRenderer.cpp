#include <Nexus/Graphics/StateRenderer.h>
#include <Nexus/Graphics/Renderer.h>

namespace Nexus {

	void StateRenderer::Rect(Nexus::Rect* rect, Color rectColor) {
		DrawColor(rectColor);

		if (rect->fill) {
			SDL_RenderFillRect(Renderer::Get(), rect);
		} else {
			SDL_RenderDrawRect(Renderer::Get(), rect);
		}
	}

	void StateRenderer::Rect(FloatRect* rect, Color rectColor) {
		DrawColor(rectColor);

		if (rect->fill) {
			SDL_RenderFillRectF(Renderer::Get(), rect);
		} else {
			SDL_RenderDrawRectF(Renderer::Get(), rect);
		}
	}

	void StateRenderer::DrawColor(Color color) {
		Renderer::SetDrawColor(color);
	}

}
