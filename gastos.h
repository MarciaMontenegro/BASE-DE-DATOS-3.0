#ifndef GASTOS_H
#define GASTOS_H

#include <iostream>

class Gasto {
public:
	std::string descripcion;
	std::string area;
	int codigo;

	Gasto();
	Gasto(std::string descripcion, int codigo, std::string area);
	void info();
};

#endif
