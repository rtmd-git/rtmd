#ifndef __swedishrhapsody_h__
#define __swedishrhapsody_h__

#include "INumberStation.h"

namespace NumberStations
{

class SwedishRhapsody : public INumberStation
{
public:
	SwedishRhapsody();
	virtual ~SwedishRhapsody();

	// Check if its time for that station to transmit
	bool isTimeToTransmit(const std::time_t& time) const;

protected:

	// Get the transmission header
	const std::string getHeader(const std::time_t& time) const;

	// Get the transmission content
	const std::string getContent(const std::time_t& time) const;

private:

	static const std::string _header;
};

}

#endif // __swedishrhapsody_h__
