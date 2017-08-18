#include "LincolnshirePoacher.h"

#include <sstream>

namespace NumberStations
{

const std::string LincolnshirePoacher::_header = "tada tada tadadadada tada tada tada da";

LincolnshirePoacher::LincolnshirePoacher()
{

}

LincolnshirePoacher::~LincolnshirePoacher()
{

}

bool LincolnshirePoacher::isTimeToTransmit(const std::time_t& time) const
{
	return (getLastTransmissionTime() == (std::time_t)(-1)) || ((time - getLastTransmissionTime()) > _transmissionInterval);
}

const std::string LincolnshirePoacher::getHeader(const std::time_t& time) const
{
	return _header;
}

// Get the transmission content
const std::string LincolnshirePoacher::getContent(const std::time_t& time) const
{
	 std::srand(time);

	 std::ostringstream content;
	 for(int i = 0; i < 16; i++)
	 {
		content << (std::rand() % 10) << "-" << (std::rand() % 10) << "-" << (std::rand() % 10) << "-" << (std::rand() % 10) << std::endl;
	 }

	 // Repeat
	 content << content.str() << std::endl;

	 return content.str();
}

}

