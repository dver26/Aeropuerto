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
		<< "2. Ver aeropuertos\n"
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
			
			break;
		case 2:
			
			break;
		default:
			std::cout << "Lo siento, n�mero incorrecto" << std::endl;
		}

	} while (op != 0);

	std::cin.get();
}