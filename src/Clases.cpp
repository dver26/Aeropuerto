#include <iostream>
#include "Clases.h"

// PASAJERO

Pasajero::Pasajero()
	: name("unknown"), nacionalidad("unknown"), nPasaporte(0) {}

Pasajero::Pasajero(std::string name, std::string nacionalidad, int nPasaporte)
	: name(name), nacionalidad(nacionalidad), nPasaporte(nPasaporte) {}

// VUELO

Vuelo::Vuelo(int id, int precio, int maxPasajeros, std::string ciudadOrigen, std::string ciudadDestino)
	: id(id), precio(precio), maxPasajeros(maxPasajeros), ciudadOrigen(ciudadOrigen), ciudadDestino(ciudadDestino) {}

// COMPANIA

Compania::Compania(std::string nombre)
	: nombre(nombre) {}

// AEROPUERTO

Aeropuerto::Aeropuerto(std::string nombre, std::string ciudad, std::string pais)
	: nombre(nombre), ciudad(ciudad), pais(pais)
{
	companias.reserve(2);
}

Aeropuerto::~Aeropuerto() {}

// AEROPUERTO PUBLICO

AeropuertoPublico::AeropuertoPublico(std::string nombre, std::string ciudad, std::string pais, int subvencion)
	: Aeropuerto(nombre, ciudad, pais), subvencion(subvencion) {}

void AeropuertoPublico::funcionPublica()
{
	
}

// AEROPUERTO PRIVADO

AeropuertoPrivado::AeropuertoPrivado(std::string nombre, std::string ciudad, std::string pais)
	: Aeropuerto(nombre, ciudad, pais) {}

void AeropuertoPrivado::funcionPrivada()
{

}