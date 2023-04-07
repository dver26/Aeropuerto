#pragma once
#include <iostream>
#include <string>
#include <vector>


class Aeropuerto
{
public:
	std::vector<Compania> companias;
	std::string nombre;
	std::string ciudad;
	std::string pais;

	Aeropuerto(std::string nombre, std::string ciudad, std::string pais);
};

class AeropuertoPublico : public Aeropuerto
{
public:
	std::vector<std::string> patrocinadores;
	AeropuertoPublico(std::string nombre, std::string ciudad, std::string pais);
};

class Compania
{
public:
	std::string nombre;
	std::vector<Vuelo> vuelos;
	Compania(std::string nombre);
};

class Vuelo
{
public:
	std::string origen, destino;
	int precio, maxPas, nPas, id;
	std::vector<Pasajero> pasajeros;
	Vuelo(int id, std::string origen, std::string destino, int precio, int maxPas);
};

class Pasajero
{
public:
	std::string nombre, nacionalidad;
	int nPasaporte;
	Pasajero(std::string nombre, std::string nacionalidad, int nPasaporte);
};