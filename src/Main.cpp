#include <iostream>
#include "Clases.h"
#include "Bhvr.h"

static std::vector<Aeropuerto> aeropuertos;

void Opciones()
{
	std::cout << "1. Ver aeropuertos" << std::endl;
}

int main()
{
	int op = 0;
	do {
		Opciones();
		std::cin >> op;
		std::cout << op;
	} while (op != 0);
	std::cin.get();
}