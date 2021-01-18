#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <Thor/Resources.hpp>
#include <unordered_map>

class ResourceManager {
public:
	static void loadTexture(const std::string& id, const std::string& fileName);
	static void freeTexture(const std::string& id);
	static sf::Texture& getTexture(const std::string& id);
	
	static void loadSound(const std::string& id, const std::string& fileName);
	static void freeSound(const std::string& id);
	static sf::SoundBuffer& getSoundBuffer(const std::string& id);

	static void loadFont(const std::string& id, const std::string& fileName);
	static void freeFont(const std::string& id);
	static sf::Font& getFont(const std::string& id);


private:
	ResourceManager() = delete;
	//defines resource type and id type
	static thor::ResourceHolder<sf::Texture, std::string> textures;
	static thor::ResourceHolder<sf::SoundBuffer, std::string> sounds;
	static thor::ResourceHolder<sf::Font, std::string> fonts;
};