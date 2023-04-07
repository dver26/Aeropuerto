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

	Aeropuerto(std::string nombre, std::string ciudad, std::string pais)
		:nombre(nombre), ciudad(ciudad), pais(pais) {}
};

class AeropuertoPublico : public Aeropuerto
{
public:
	int subvencion;
	AeropuertoPublico(std::string nombre, std::string ciudad, std::string pais)
		: Aeropuerto(nombre, ciudad, pais) {} 
};

class AeropuertoPrivado : public Aeropuerto
{
public:
	std::vector<std::string> patrocinadores;
	AeropuertoPrivado(std::string nombre, std::string ciudad, std::string pais)
		: Aeropuerto(nombre, ciudad, pais) {}
};

class Compania
{
public:
	std::string nombre;
	std::vector<Vuelo> vuelos;
	Compania(std::string nombre)
		: nombre(nombre) {}
};

class Vuelo
{
public:
	int id;
	std::string origen, destino;
	int precio, maxPas, nPas;
	std::vector<Pasajero> pasajeros;
	Vuelo(int id, std::string origen, std::string destino, int precio, int maxPas)
		: id(id), origen(origen), destino(destino), precio(precio), maxPas(maxPas)
};

class Pasajero
{
public:
	std::string nombre, nacionalidad;
	int nPasaporte;
	Pasajero(std::string nombre, std::string nacionalidad, int nPasaporte)
		: nombre(nombre), nacionalidad(nacionalidad), nPasaporte(nPasaporte) {}
};