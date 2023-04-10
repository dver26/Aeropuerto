#include <iostream>
#include "Clases.h"

Pasajero::Pasajero()
	: name("unknown"), nacionalidad("unknown"), nPasaporte(0) {}

Pasajero::Pasajero(std::string name, std::string nacionalidad, int nPasaporte)
	: name(name), nacionalidad(nacionalidad), nPasaporte(nPasaporte) {}