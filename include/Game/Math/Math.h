#pragma once
#include <SFML/Graphics.hpp>
#define M_PI 3.14159265358979323846

/*
	return distance vector between 2 vectors
*/
sf::Vector2i distance(const sf::Vector2i& loc1, const sf::Vector2i& loc2);

/*
	makes a unit vector out of the parameter and returns it
*/
sf::Vector2f normalize(const sf::Vector2f& vector);

/*
	returns dot product value of 2 vectors
*/
float dot(const sf::Vector2f& vec1, const sf::Vector2f& vec2);