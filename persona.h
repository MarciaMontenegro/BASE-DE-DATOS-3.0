#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

class Persona{
  public:
	std::string nombre;
	int DNI;
	int telefono;
	Persona ();
	Persona (std::string nombre, int DNI, int telefono);
    void info();
};

#endif
