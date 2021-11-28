#include "gastos.h"

gastos::gastos(){
	
}

gastos::gastos(std::string _descripcion, std::string _area){
	descripcion=_descripcion;
	area=_area;	
}


gastos::~gastos(){
}

void gastos::info(){
	std::cout << "Descripcion: " << descripcion << std::endl;
	std::cout << "Area: " << area << std::endl;
	
}

int gastos::set_gastoID(int _gastoID){
	gastoID=_gastoID;
}
