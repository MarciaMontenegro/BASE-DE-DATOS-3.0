#ifndef CUARTO_H
#define CUARTO_H
#include <iostream>
class Cuarto{
  public:
	int numero;
	int precio;
	int estado;
	int camas;
	std::string tipo;
	Cuarto();
	Cuarto(int numero, int precio, int estado, int camas, std::string tipo);
    void info();
};

#endif
