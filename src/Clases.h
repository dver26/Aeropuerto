#pragma once
#include <iostream>

class Pasajero
{
public:
	std::string name, nacionalidad;
	int nPasaporte;

	Pasajero();
	Pasajero(std::string name, std::string nacionalidad, int nPasaporte)
		: name(name), nacionalidad(nacionalidad), nPasaporte(nPasaporte);
};