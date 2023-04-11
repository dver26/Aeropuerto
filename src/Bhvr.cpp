#include <iostream>
#include "Bhvr.h"

void bhvr::PrintAirports(std::vector<Aeropuerto>& aeropuertos)
{
	for (auto& a : aeropuertos)
	{
		std::cout << a << std::endl;
	}
}

std::ostream& bhvr::operator<< (std::ostream& out, Aeropuerto& a)
{
	std::cout << "Aeropuerto: " << a.nombre << ", de " << a.ciudad << " en " << a.pais;
	return out;
}