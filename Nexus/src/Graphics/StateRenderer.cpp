#include <Nexus/Graphics/StateRenderer.h>
#include <Nexus/Graphics/Renderer.h>

namespace Nexus {

	void StateRenderer::rect(SDL_Rect* rect, Color rectColor) {
		drawColor(rectColor);
		SDL_RenderDrawRect(Renderer::Get(), rect);
	}

	void StateRenderer::drawColor(Color color) {
		Renderer::SetDrawColor(color);
	}

}
