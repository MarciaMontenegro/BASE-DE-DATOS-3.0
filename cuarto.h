#ifndef CUARTO_H
#define CUARTO_H
#include<iostream>
#include "voucher.h"
class cuarto
{
	public:
		int cuartoID, precio, camas;
		std::string tipo,estado;
		cuarto();
		cuarto(int cuartoID, std::string tipo, int camas, int precio,std::string estado);
		~cuarto();
		void info();
	protected:
};

#endif
