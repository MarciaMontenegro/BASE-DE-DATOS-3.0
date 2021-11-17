#ifndef EMPLEADO_H
#define EMPLEADO_H

#include "persona.h"

class Empleado : public Persona{
  public:
	std::string nombre;
	int DNI;
	int telefono;
	float sueldo;
	std::string area;
	int hora_e, hora_s;	
    Empleado();	
	Empleado(std::string nombre, int DNI, int telefono, float sueldo, std::string area, int hora_e, int hora_s);
    void info();
};

#endif
