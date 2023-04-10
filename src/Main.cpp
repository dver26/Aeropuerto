#include <iostream>
#include "Clases.h"

int main()
{
	Pasajero p("Victor", "España", 2);
	std::cout << p.name << std::endl;
	std::cin.get();
}