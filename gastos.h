#ifndef GASTOS_H
#define GASTOS_H
#include<iostream>
class gastos{
	public:
		std::string descripcion;
		std::string area;
		int gastoID;
		gastos();
		gastos(std::string descripcion, std::string area);
		~gastos();
		void info();
		int set_gastoID(int gastoID);
	protected:
};

#endif
