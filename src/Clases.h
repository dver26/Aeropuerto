#pragma once
#include <iostream>
#include <vector>

class Pasajero
{
public:
	std::string name, nacionalidad;
	int nPasaporte;

	Pasajero();
	Pasajero(std::string name, std::string nacionalidad, int nPasaporte);
};

class Vuelo
{
public:
	int id, precio, maxPasajeros, nPasajeros;
	std::string ciudadOrigen, ciudadDestino;

	Vuelo(int id, int precio, int maxPasajeros, std::string ciudadOrigen, std::string ciudadDestino);
};

class Compania
{
public:
	std::string nombre;

	Compania(std::string nombre);
};

class Aeropuerto
{
public:
public:
	std::string nombre, ciudad, pais;
	std::vector<Compania> companias;

	Aeropuerto(std::string nombre, std::string ciudad, std::string pais);
	virtual ~Aeropuerto();
};

class AeropuertoPublico : public Aeropuerto
{
public:
	int subvencion;

	AeropuertoPublico(std::string nombre, std::string ciudad, std::string pais, int subvencion);
	void funcionPublica();
};

class AeropuertoPrivado : public Aeropuerto
{
public:
	std::vector<std::string> patrocinadores;

	AeropuertoPrivado(std::string nombre, std::string ciudad, std::string pais);
	void funcionPrivada();
};