#include <iostream>
#include "Clases.h"
#include "Bhvr.h"

int main()
{
	std::vector<Aeropuerto> aeropuertos;
	aeropuertos.emplace_back(AeropuertoPublico("Tarradellas El Prat", "Barcelona", "Espana", 200));
	aeropuertos.emplace_back(Aeropuerto("Barajas", "Madrid", "España"));
	bhvr::PrintAirports(aeropuertos);
	std::cin.get();
}