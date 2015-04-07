#include <iostream>
#include <SFML/Network.hpp>

int main()
{
	sf::TcpListener listener;
	listener.setBlocking(false);
	if(listener.listen(53000) != sf::Socket::Done)
	{
		std::cout << "Failed to listen to this port" << std::endl;
	}
	else
    {
        std::cout << "Welcome to the server!" << std::endl;
    }

	while(1)
	{
		sf::TcpSocket client;
		if(listener.accept(client) == sf::Socket::Done)
		{
			std::cout << "New connection from " << client.getRemoteAddress() << std::endl;
		}
	}
	return 0;
}

