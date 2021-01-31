#pragma once

namespace Nexus {

	class State {
	public:
		State() {};
		virtual ~State() = default;

		virtual void OnStart() {}
		virtual void OnClose() {}

		virtual void OnUpdate() {}
		virtual void OnRender() {}
	};

}
