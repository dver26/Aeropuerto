#pragma once
#include <vector>
#include "Clases.h"

namespace bhvr
{
	void PrintAirports(std::vector<Aeropuerto>& aeropuertos);
	std::ostream& operator<< (std::ostream& out, Aeropuerto& a);
}