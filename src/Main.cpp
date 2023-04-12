#include <iostream>
#include "Clases.h"
#include "Bhvr.h"

static std::vector<Aeropuerto*> aeropuertos;
static std::vector<Compania> companias;
static std::vector<Vuelo> vuelos;
static std::vector<Pasajero> pasajeros;

void Opciones()
{
	std::cout << "\n\n1. Anadir\n"
		<< "2. Ver aeropuertos"
		<< "> ";
}

int main()
{
	int op = 0;
	do {
		Opciones();
		std::cin >> op;

		switch (op)
		{
		case 1:
			anadir::Anadir(aeropuertos, companias, vuelos, pasajeros);
			break;
		case 2:
			bhvr::PrintAirports(aeropuertos);
			break;
		default:
			std::cout << "Lo siento, número incorrecto" << std::endl;
		}

	} while (op != 0);

	std::cin.get();
}