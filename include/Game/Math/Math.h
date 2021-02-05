#pragma once
#include <SFML/Graphics.hpp>
#define M_PI 3.14159265358979323846

/*
	Returns distance vector between 2 vectors
*/
sf::Vector2f distance(const sf::Vector2f& vec1, const sf::Vector2f& vec2);

/*
	Returns magnitude/length between 2 vectors as a scalar
*/
float length(const sf::Vector2f& vec1, const sf::Vector2f& vec2);

/*
	makes a unit vector out of the parameter and returns it
*/
sf::Vector2f normalize(const sf::Vector2f& vector);

/*
	Returns length of vector
*/
float magnitude(const sf::Vector2f& vector);

/*
	returns dot product value of 2 vectors
*/
float dot(const sf::Vector2f& vec1, const sf::Vector2f& vec2);

/*
	linear interpolate between 2 values
	t = value between 0 and 1.0 to determine how far to interpolate between a and b
*/
float lerp(float a, float b, float t);

/*
	returns rotation angle of the distance vector
*/
float rotation(const sf::Vector2f& distance);