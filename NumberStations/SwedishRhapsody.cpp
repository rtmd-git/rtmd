#include "SwedishRhapsody.h"

#include <sstream>

namespace NumberStations
{

const std::string SwedishRhapsody::_header = "din din din tadada tin tada tin tada";

SwedishRhapsody::SwedishRhapsody()
{

}

SwedishRhapsody::~SwedishRhapsody()
{

}

bool SwedishRhapsody::isTimeToTransmit(const std::time_t& time) const
{
	// Transmit at random times
	std::srand(time);
	return (getLastTransmissionTime() == (std::time_t)(-1)) || ((time - getLastTransmissionTime()) > std::rand() % 50);
}

const std::string SwedishRhapsody::getHeader(const std::time_t& time) const
{
	return _header;
}

// Get the transmission content
const std::string SwedishRhapsody::getContent(const std::time_t& time) const
{
	 std::srand(time);

	 std::ostringstream content;
	 content << "Achtung" << std::endl;
	 for(int i = 0; i < 16; i++)
	 {
		content << (std::rand() % 10) << "-" << (std::rand() % 10) << "-" << (std::rand() % 10) << "-" << (std::rand() % 10) << "-" << (std::rand() % 10) << std::endl;
	 }

	 // Repeat
	 content << content.str() << std::endl;

	 return content.str();
}

}
