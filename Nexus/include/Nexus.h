#pragma once

#ifdef NEXUS_MAIN
	#define SDL_MAIN_HANDLED
#endif

// Graphics
#include <Nexus/Graphics/Renderer.h>
#include <Nexus/Graphics/StateRenderer.h>

// Window
#include <Nexus/Window/Window.h>
#include <Nexus/Window/Keyboard.h>

// Math
#include <Nexus/Math/Color.h>
#include <Nexus/Math/Vec2.h>
#include <Nexus/Math/Rect.h>
#include <Nexus/Math/FloatRect.h>

// Etc
#include <Nexus/Log.h>
#include <Nexus/Game.h>
#include <Nexus/State.h>
#include <Nexus/Configuration.h>
