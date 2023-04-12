#include <iostream>
#include <string>
#include "Bhvr.h"

void bhvr::PrintAirports(std::vector<Aeropuerto*>& aeropuertos)
{
	for (Aeropuerto* aeropuerto : aeropuertos)
	{
		if (AeropuertoPublico* ap = dynamic_cast<AeropuertoPublico*>(aeropuerto))
		{
			std::cout << *ap << std::endl;
		}
		else if (AeropuertoPrivado* apv = dynamic_cast<AeropuertoPrivado*>(aeropuerto))
		{
			std::cout << *apv << std::endl;
		}
	}
}

void bhvr::PrintAeropuetosPrivados(std::vector<Aeropuerto*>& aeropuertos)
{
	for (Aeropuerto* aeropuerto : aeropuertos)
	{
		if (AeropuertoPrivado* apv = dynamic_cast<AeropuertoPrivado*>(aeropuerto))
		{
			std::cout << *apv << std::endl;
		}
	}
}

std::ostream& bhvr::operator<< (std::ostream& out, AeropuertoPrivado& a)
{
	out << "\n\tAeropuerto: " << a.nombre << ", de " << a.ciudad << " en " << a.pais;
	out << "\n\tEste aeropuerto es privado y tiene los siguientes patrocinadores: ";
	for (std::string patrocinador : a.patrocinadores)
	{
		out << patrocinador << "\n";
	}
	return out;
}

std::ostream& bhvr::operator<< (std::ostream& out, AeropuertoPublico& a)
{
	out << "\nAeropuerto: " << a.nombre << ", de " << a.ciudad << " en " << a.pais;
	out << "\nEste aeropuerto es publico y tiene una subvencion de: " << a.subvencion;
	return out;
}

void anadir::Anadir(std::vector<Aeropuerto*>& aeropuertos, std::vector<Compania>& companias, std::vector<Vuelo>& vuelos, std::vector<Pasajero>& pasajero)
{
	int op;
	std::cout << "Que quieres anadir?\n"
		<< "1. Aeropuerto\n"
		<< "2. Compania\n"
		<< "3. Vuelo\n"
		<< "4. Pasajero\n"
		<< "5. Patrocinador a Aeropuerto Privado\n"
		<< "> ";

	std::cin >> op;
	std::cin.ignore();

	switch (op)
	{
	case 1:
		anadir::AnadirAeropuerto(aeropuertos);
		break;
	case 5:
		anadir::AnadirPatrocinador(aeropuertos);
		break;
	}
}

void anadir::AnadirAeropuerto(std::vector<Aeropuerto*>& aeropuertos)
{
	std::string nombre, ciudad, pais, publicopriv;
	int subvencion;

	std::cout << "Nombre del aeropuerto: ";
	std::getline(std::cin, nombre);

	std::cout << "Ciudad del aeropuerto: ";
	std::getline(std::cin, ciudad);

	std::cout << "País del aeropuerto: ";
	std::getline(std::cin, pais);

	std::cout << "Va a ser publico o privado?: ";
	std::getline(std::cin, publicopriv);

	std::string pp = utils::aMinuscula(publicopriv);

	if (pp == "publico")
	{
		std::cout << "Ingresa la subvencion de este aeropuerto: ";
		std::cin >> subvencion;
		std::cin.ignore();
		aeropuertos.emplace_back(new AeropuertoPublico(nombre, ciudad, pais, subvencion));
	}
	else if (pp == "privado")
	{
		std::cout << "Se va a crear un aeropuerto privado, después podras añadir patrocinadores" << std::endl;
		aeropuertos.emplace_back(new AeropuertoPrivado(nombre, ciudad, pais));
	}
	else 
	{
		std::cout << "El tipo de aeropuerto que has introducido no es correcto" << std::endl;
	}
}

void anadir::AnadirPatrocinador(std::vector<Aeropuerto*>& aeropuertos)
{
	std::string nombreA, nombreP;
	bhvr::PrintAeropuetosPrivados(aeropuertos);

	std::cout << "A que aeropuerto quieres anadirlo?: ";
	std::getline(std::cin, nombreA);

	std::cout << "Nombre del patrocinador: " << std::endl;
	std::getline(std::cin, nombreP);

	for (Aeropuerto* aeropuerto : aeropuertos)
	{
		if (AeropuertoPrivado* apv = dynamic_cast<AeropuertoPrivado*>(aeropuerto))
		{
			if (apv->nombre == nombreA)
			{
				apv->patrocinadores.push_back(nombreP);
			}
		}
	}

	std::cout << "Hola" << std::endl;
}

std::string utils::aMinuscula(std::string cadena)
{
	for (int i = 0; i < cadena.length(); i++) cadena[i] = tolower(cadena[i]);
	return cadena;
}