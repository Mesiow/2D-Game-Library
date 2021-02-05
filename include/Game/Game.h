#pragma once
#include <SFML/Graphics.hpp>
#include "State/State.h"
#include <memory>
#include <string>
#include <stack>
#include <iostream>

class Game
{
public:
	Game();
	~Game();
	void run();
	void create(const std::string& appName, int window_width, int window_height);

	void setWindowIcon(const std::string &imagePath);
	void setClearColor(sf::Color color);

	sf::RenderWindow& getWindowHandle() { return *_window; }
	static float getElapsedTime();

	void pushState(State* state);
	void popState();
	void quit();

private:
	void pollEvents();
	void handleInput(float dt);
	void update(float dt);
	void render();
	void clear();
	void display();

private:
	sf::RenderWindow* _window;
	bool _running;
	bool _inFocus;

	std::stack<State*> _states;
	sf::Color _clearColor;
};