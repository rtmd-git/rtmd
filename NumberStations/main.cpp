#include <iostream>

#include "version.h"

using namespace std;

int main()
{
	cout << NumberStations::Version::getVersion() << endl;
	return 0;
}

