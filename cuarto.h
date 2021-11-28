#ifndef CUARTO_H
#define CUARTO_H
#include<iostream>
#include "voucher.h"
class cuarto
{
	public:
		int cuartoID, precio, estado, camas;
		std::string tipo;
		cuarto();
		cuarto(int precio, int estado, int camas, std::string tipo);
		~cuarto();
		void info();
		void set_cuartoID(int cuartoID);
	protected:
};

#endif
