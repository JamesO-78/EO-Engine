#include <DX3D/Game/Game.h>
#include <DX3D/Window/Window.h>

dx3d::Game::Game() : Base()
{
	m_display = std::make_unique<Window>();
}

dx3d::Game::~Game()
{
	
}