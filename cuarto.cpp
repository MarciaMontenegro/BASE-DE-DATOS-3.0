#include "cuarto.h"

cuarto::cuarto(){
}

cuarto::cuarto(int _id, std::string _tipo, int _camas, int _precio,std::string _estado){
	cuartoID = _id;
	precio=_precio;
	estado=_estado;
	camas=_camas;
	tipo=_tipo;
	
}

cuarto::~cuarto(){
}

void cuarto::info() {
	std::cout << "Numero de habitacion: " << cuartoID << std::endl;
	std::cout << "Tipo de habitación: " << tipo << std::endl;
	std::cout << "Camas: " << camas << std::endl;
	std::cout << "Precio de la habitacion: " << precio << std::endl;
	std::cout << "Estado: " << estado << std::endl;

}

