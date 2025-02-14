#include "PreCompHeaders.hpp"
#include "Game.hpp"
#include "Events/AppEvent.hpp"
#include "GLFW/glfw3.h"

namespace Cyan {

	Game::Game() {
		m_window = std::unique_ptr<GWindow>(GWindow::createWindow());
		m_isRunning = true;
	}

	Game::~Game() {

	}

	void Game::run() {

		while (m_isRunning) {

			glClearColor(0.f, 1.f, 1.f, 1.f);
			glClear(GL_COLOR_BUFFER_BIT);
			m_window->onUpdate();
		}
	}
}