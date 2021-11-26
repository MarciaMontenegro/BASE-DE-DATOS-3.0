#ifndef CUARTO_H
#define CUARTO_H
#include<iostream>
class cuarto
{
	public:
		int cuartoID, precio, estado, camas;
		std::string tipo;
		cuarto();
		cuarto(int precio, int estado, int camas, std::string tipo);
		~cuarto();
		void info();
	protected:
};

#endif
