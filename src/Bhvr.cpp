#include <iostream>
#include "Bhvr.h"
#include "Clases.h"

std::ostream& sbc::operator<< (std::ostream& out, Aeropuerto* a)
{
	out << "Aeropuerto " << a->nombre << " de " << a->ciudad << " en " << a->pais;
	return out;
}

void print::printAirports(std::vector<Aeropuerto*> aeropuertos)
{
	for (Aeropuerto* aeropuerto : aeropuertos)
	{
		if (AeropuertoPublico* a = dynamic_cast<AeropuertoPublico*>(aeropuerto))
		{
			std::cout << "\n" << a << std::endl;
			std::cout << "(Publico)" << std::endl;
		}
		else if (AeropuertoPrivado* a = dynamic_cast<AeropuertoPrivado*>(aeropuerto))
		{
			std::cout << "\n" << a << std::endl;
			std::cout << "(Privado)" << std::endl;
		}
	}
}