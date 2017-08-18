#include <iostream>
#include <vector>

#include "version.h"
#include "INumberStation.h"
#include "LincolnshirePoacher.h"

using namespace std;

int main()
{
	cout << NumberStations::Version::getVersion() << endl;

	std::vector<NumberStations::INumberStation*> stations;
	stations.push_back(new NumberStations::LincolnshirePoacher());

	while(1)
	{
		std::time_t curTime = std::time(nullptr);
		for(size_t i = 0; i < stations.size(); i++)
		{
			NumberStations::INumberStation* station = stations[i];
			if(station && station->isTimeToTransmit(curTime))
			{
				std::cout << station->getTransmissison(curTime);
			}
		}
	}

	return 0;
}

