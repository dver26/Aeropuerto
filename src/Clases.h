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

};