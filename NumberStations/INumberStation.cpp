#include "INumberStation.h"

#include <sstream>

namespace NumberStations
{

INumberStation::INumberStation() : _lastTransmissionTime((std::time_t)(-1))
{

}

INumberStation::~INumberStation()
{

}

const std::string INumberStation::getTransmissison(const std::time_t& time)
{
	// Prepare the transmission
	std::ostringstream trans;
	trans << getHeader(time) << std::endl << getContent(time);

	// Update the time
	_lastTransmissionTime = time;

	return trans.str();
}

const std::time_t& INumberStation::getLastTransmissionTime() const
{
	return _lastTransmissionTime;
}

}
