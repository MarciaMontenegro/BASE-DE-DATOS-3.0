#ifndef EMPLEADO_H
#define EMPLEADO_H
#include "persona.h"

class empleado: public persona{
	public:
		int empleadoID;
		std::string nombre,apellido;
		int DNI;
		int telefono;
		float sueldo;
		std::string area;
		int hora_e, hora_s;
		empleado();
		empleado(std::string nombre,std::string apellido, int DNI, int telefono, float sueldo, std::string area, int hora_e, int hora_s);
		~empleado();
		void info();
		int set_empleadoID(int empleadoID);
	protected:
};

#endif

