#include <iostream>
#include <vector>

#include "version.h"
#include "INumberStation.h"
#include "SwedishRhapsody.h"

using namespace std;

int main()
{
	cout << NumberStations::Version::getVersion() << endl;

	std::vector<NumberStations::INumberStation*> stations;
	stations.push_back(new NumberStations::SwedishRhapsody());

	while(1)
	{
		std::time_t curTime = std::time(0);
		for(int i = 0; i < (int)stations.size(); i++)
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

