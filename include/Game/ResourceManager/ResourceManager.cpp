#include "ResourceManager.h"
#include <iostream>

thor::ResourceHolder<sf::Texture, std::string> ResourceManager::textures;
thor::ResourceHolder<sf::SoundBuffer, std::string> ResourceManager::sounds;
thor::ResourceHolder<sf::Font, std::string> ResourceManager::fonts;

void ResourceManager::loadTexture(const std::string& id, const std::string &fileName) {
	textures.acquire(id, thor::Resources::fromFile<sf::Texture>(fileName), thor::Resources::Reuse);
}

void ResourceManager::freeTexture(const std::string& id)
{
	textures.release(id);
}

sf::Texture& ResourceManager::getTexture(const std::string& id) {
	sf::Texture& texture = textures[id];
	return texture;
}

void ResourceManager::loadSound(const std::string& id, const std::string& fileName)
{
	sounds.acquire(id, thor::Resources::fromFile<sf::SoundBuffer>(fileName), thor::Resources::Reuse);
}

void ResourceManager::freeSound(const std::string& id)
{
	sounds.release(id);
}

sf::SoundBuffer& ResourceManager::getSoundBuffer(const std::string& id)
{
	sf::SoundBuffer& buffer = sounds[id];
	return buffer;
}

void ResourceManager::loadFont(const std::string& id, const std::string& fileName)
{
	fonts.acquire(id, thor::Resources::fromFile<sf::Font>(fileName), thor::Resources::Reuse);
}

void ResourceManager::freeFont(const std::string& id)
{
	fonts.release(id);
}

sf::Font& ResourceManager::getFont(const std::string& id)
{
	sf::Font& font = fonts[id];
	return font;
}
