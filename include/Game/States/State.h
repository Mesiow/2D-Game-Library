#pragma once
#include <TGUI/TGUI.hpp>

class Game;

class State {
public:
	State(Game *app)
		:_app(app){}
	virtual ~State(){}

	virtual void handleEvents(sf::Event& ev, sf::RenderWindow &window) = 0;
	virtual void handleInput(float dt) = 0;
	virtual void update(float dt) = 0;
	virtual void render(sf::RenderWindow& window) = 0;

protected:
	Game* _app;
};