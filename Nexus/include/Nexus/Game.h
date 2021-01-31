#pragma once

#include <Nexus/Configuration.h>
#include <Nexus/State.h>

namespace Nexus {

	class Game {
	public:
		static void Run(Configuration& config);
		
		static void PushState(State* state);

		static void ChangeState(State* newState);

	private:
		Game();
		~Game();
		
		static State* currentState;
	};

}
