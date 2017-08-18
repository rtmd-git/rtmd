#ifndef __inumberstation_h__
#define __inumberstation_h__

#include <string>
#include <ctime>

namespace NumberStations
{

class INumberStation
{
public:
	INumberStation();
	virtual ~INumberStation();

	// Check if its time for that station to transmit
	virtual bool isTimeToTransmit(const std::time_t& time) const = 0;

	// Get the stations transmission for a given time
	const std::string getTransmissison(const std::time_t& time);

protected:

	// Get the transmission header
	virtual const std::string getHeader(const std::time_t& time) const = 0;

	// Get the transmission content
	virtual const std::string getContent(const std::time_t& time) const = 0;

	const std::time_t& getLastTransmissionTime() const { return _lastTransmissionTime; }

private:

	std::time_t _lastTransmissionTime;
};

}

#endif // __inumberstation_h__
