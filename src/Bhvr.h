#pragma once
#include <vector>
#include "Clases.h"

namespace print
{
	void PrintAirports(std::vector<Aeropuerto*>& aeropuertos);
	void PrintAeropuetosPrivados(std::vector<Aeropuerto*>& aeropuertos);
}

namespace sbc
{
	std::ostream& operator<< (std::ostream& out, AeropuertoPublico& a);
	std::ostream& operator<< (std::ostream& out, AeropuertoPrivado& a);
}

namespace anadir
{
	void Anadir(std::vector<Aeropuerto*>& aeropuertos, std::vector<Compania>& companias, std::vector<Vuelo>& vuelos, std::vector<Pasajero>& pasajero);
	void AnadirAeropuerto(std::vector<Aeropuerto*>& aeropuertos);
	void AnadirPatrocinador(std::vector<Aeropuerto*>& aeropuertos);
	
	void AnadirCompania(std::vector<Aeropuerto*> aeropuertos, std::vector<Compania> companias);
}

namespace utils
{
	std::string aMinuscula(std::string cadena);
}