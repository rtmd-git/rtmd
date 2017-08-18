#ifndef __lincolnshirepoacher_h__
#define __lincolnshirepoacher_h__

#include "INumberStation.h"

namespace NumberStations
{

class LincolnshirePoacher : public INumberStation
{
public:
	LincolnshirePoacher();
	virtual ~LincolnshirePoacher();

	// Check if its time for that station to transmit
	bool isTimeToTransmit(const std::time_t& time) const override;

protected:

	// Get the transmission header
	const std::string getHeader(const std::time_t& time) const override;

	// Get the transmission content
	const std::string getContent(const std::time_t& time) const override;

private:

	const int _transmissionInterval = 20; // Transmit every 20 seconds
	static const std::string _header;
};

}

#endif // __lincolnshirepoacher_h__
