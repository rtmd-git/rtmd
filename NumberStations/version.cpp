#include "version.h"

#include <sstream>

namespace NumberStations
{
const std::string Version::getVersion()
{
	std::ostringstream versionStrm;
	versionStrm << "Number Stations Version: " << _versionMjr << "." << _versionMnr;
	return versionStrm.str();
}

}
