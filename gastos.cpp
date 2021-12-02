#include "gastos.h"

gastos::gastos(){
	
}

gastos::gastos(int _gastoID, std::string _descripcion, std::string _area){
	gastoID = _gastoID;
	descripcion=_descripcion;
	area=_area;	
}

gastos::~gastos(){
}

void gastos::info(){
	std::cout << "Id: " << gastoID << std::endl;
	std::cout << "Descripcion: " << descripcion << std::endl;
	std::cout << "Area: " << area << std::endl;
	
}

