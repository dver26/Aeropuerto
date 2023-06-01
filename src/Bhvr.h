#pragma once
#include <vector>
#include "Clases.h"

namespace sbc
{
	std::ostream& operator<< (std::ostream& out, Aeropuerto* a);
}

namespace print
{
	void printAirports(std::vector<Aeropuerto*> aeropuertos);
}

namespace anadir
{
	
}

namespace utils
{
	
}