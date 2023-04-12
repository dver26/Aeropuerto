#pragma once
#include <vector>
#include "Clases.h"

namespace bhvr
{

	void PrintAirports(std::vector<Aeropuerto*>& aeropuertos);
	void PrintAeropuetosPrivados(std::vector<Aeropuerto*>& aeropuertos);

	std::ostream& operator<< (std::ostream& out, AeropuertoPrivado& a);
	std::ostream& operator<< (std::ostream& out, AeropuertoPublico& a);
}

namespace anadir
{
	void Anadir(std::vector<Aeropuerto*>& aeropuertos, std::vector<Compania>& companias, std::vector<Vuelo>& vuelos, std::vector<Pasajero>& pasajero);
	void AnadirAeropuerto(std::vector<Aeropuerto*>& aeropuertos);
	void AnadirPatrocinador(std::vector<Aeropuerto*>& aeropuertos);
}

namespace utils
{
	std::string aMinuscula(std::string cadena);
}