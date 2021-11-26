#ifndef CLIENTE_H
#define CLIENTE_H

#include "persona.h"

class cliente : public persona{
	public:
		int clienteID;
		std::string nombre,apellido, rango;
		int DNI, telefono, check_in, check_out, num_reserva;
		float pago;
		cliente();
		cliente(std::string nombre,std::string apellido, int DNI, int telefono, std::string rango, int check_in, int check_out, int num_reserva, float pago);
		~cliente();
		int set_clienteID(int clienteID);
		void info();
	protected:
};

#endif
