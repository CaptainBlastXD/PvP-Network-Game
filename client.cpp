#include <iostream>
#include <SFML/Network.hpp>

int main()
{
	sf::TcpSocket socket;
	sf::Socket::Status status = socket.connect(127.0.0.1, 53000);
	if(status != sf:Socket::Done)
	{
		std::cout << "Failed to connect" << std::endl;
	}
	else
	{
		std::cout << "Cliented connected successfully" << std::endl;
	}

}