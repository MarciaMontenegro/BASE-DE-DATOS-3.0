#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include "persona.h"

class Cliente : public Persona{
  public: 
	std::string nombre, rango;
	int DNI, telefono, check_in, check_out, num_reserva;
	float pago;
	Cliente();	
	Cliente(std::string nombre, int DNI, int telefono, std::string rango, int check_in, int check_out,int num_reserva, float pago);
    void info();
};

#endif
