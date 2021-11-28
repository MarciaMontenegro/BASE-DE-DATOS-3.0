#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
class persona{
	public:
		std::string nombre;
		int DNI;
		int telefono;
		persona();
		persona(std::string nombre, int DNI, int telefono);
		~persona();
		void info();
	protected:
};



#endif
