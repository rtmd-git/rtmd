#ifndef __version_h__
#define __version_h__

#include <string>

namespace NumberStations
{

class Version
{
public:
	static const std::string getVersion();

private:
static const int _versionMnr = 0;
static const int _versionMjr = 1;
};

}

#endif // __version_h__
