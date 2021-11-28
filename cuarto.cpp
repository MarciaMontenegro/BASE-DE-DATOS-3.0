#include "cuarto.h"

cuarto::cuarto(){
}

cuarto::cuarto(int _precio, int _estado, int _camas, std::string _tipo){
	precio=_precio;
	estado=_estado;
	camas=_camas;
	tipo=_tipo;
}

cuarto::~cuarto(){
}

void cuarto::info() {
	std::cout << "Numero de habitacion: " << cuartoID << std::endl;
	std::cout << "Precio de la habitacion: " << precio << std::endl;
	std::cout << "Camas: " << camas << std::endl;
	std::cout << "Tipo de habitación: " << tipo << std::endl;
}

void cuarto::set_cuartoID(int _cuartoID){
	cuartoID=_cuartoID;
}
