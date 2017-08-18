#include <iostream>
#include <vector>

#include "version.h"
#include "INumberStation.h"

using namespace std;

int main()
{
	cout << NumberStations::Version::getVersion() << endl;

	std::vector<NumberStations::INumberStation*> stations;

	while(1)
	{
		std::time_t curTime = std::time(0);
		for(int i = 0; i < stations.size(); i++)
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

