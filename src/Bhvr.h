#pragma once
#include <vector>
#include "Clases.h"

namespace bhvr
{
	std::string aMinuscula(std::string cadena);

	void PrintAirports(std::vector<Aeropuerto*>& aeropuertos);
	void PrintPrivateAirports(std::vector<Aeropuerto*>& aeropuertos);

	std::ostream& operator<< (std::ostream& out, Aeropuerto& a);

	void Anadir(std::vector<Aeropuerto*>& aeropuertos, std::vector<Compania>& companias, std::vector<Vuelo>& vuelos, std::vector<Pasajero>& pasajero);
	void AnadirAeropuerto(std::vector<Aeropuerto*>& aeropuertos);
	void AnadirPatrocinador(std::vector<Aeropuerto*>& aeropuetos);
}