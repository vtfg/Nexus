#pragma once

#include <Nexus/Configuration.h>

namespace Nexus {

	class Game {
	private:
		virtual void OnStart() {}
		virtual void OnClose() {}

		virtual void OnEvent(SDL_Event& event) {}
		virtual void OnUpdate() {}
		virtual void OnRender() {}

	public:
		Game() {};
		virtual ~Game() = default;

		void Run(Configuration& config);
	};

}
