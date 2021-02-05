#pragma once
#include <SFML/Network.hpp>

class Net {
public:
	Net() = default;

protected:
	virtual void receivePackets() = 0;
	virtual void sendPacket(sf::Packet& packet) = 0;

protected:
	sf::UdpSocket socket;
	sf::IpAddress address;
	uint16_t port;
};