#include <iostream>
#include <string>
#include "Bhvr.h"

std::string bhvr::aMinuscula(std::string cadena) 
{
	for (int i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
	return cadena;
}


void bhvr::PrintAirports(std::vector<Aeropuerto*>& aeropuertos)
{
	for (Aeropuerto* aeropuerto : aeropuertos)
	{
		std::cout << *aeropuerto << std::endl;
	}
}

std::ostream& bhvr::operator<< (std::ostream& out, Aeropuerto& a)
{
	std::cout << "Aeropuerto: " << a.nombre << ", de " << a.ciudad << " en " << a.pais;
	return out;
}

void bhvr::Anadir(std::vector<Aeropuerto*>& aeropuertos, std::vector<Compania>& companias, std::vector<Vuelo>& vuelos, std::vector<Pasajero>& pasajero)
{
	int op;
	std::cout << "Que quieres anadir?\n"
		<< "1. Aeropuerto\n"
		<< "2. Compania\n"
		<< "3. Vuelo\n"
		<< "4. Pasajero\n"
		<< "> ";

	std::cin >> op;
	std::cin.ignore();

	switch (op)
	{
	case 1:
		bhvr::AnadirAeropuerto(aeropuertos);
	}
}

void bhvr::AnadirAeropuerto(std::vector<Aeropuerto*>& aeropuertos)
{
	std::string nombre, ciudad, pais, publicopriv;

	std::cout << "Nombre del aeropuerto: ";
	std::getline(std::cin, nombre);

	std::cout << "Ciudad del aeropuerto: ";
	std::getline(std::cin, ciudad);

	std::cout << "País del aeropuerto: ";
	std::getline(std::cin, pais);

	std::cout << "Va a ser publico o privado?: ";
	std::getline(std::cin, publicopriv);

	std::string pp = aMinuscula(publicopriv);
}