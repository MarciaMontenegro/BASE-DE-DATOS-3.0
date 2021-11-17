#include "cuarto.h"

Cuarto::Cuarto() {
	numero = 0;
	precio = 0;
	estado = 0;
	camas = 0;
	tipo = "";
}
Cuarto::Cuarto(int _numero, int _precio, int _estado, int _camas, std::string _tipo){
	numero=_numero;
	precio=_precio;
	estado=_estado;
	camas=_camas;
	tipo=_tipo;
}

void Cuarto::info(){
	std::cout<<"Numero de habitacion: "<<numero<<std::endl;
	std::cout<<"Precio de la habitacion: "<<precio<<std::endl;
	std::cout<<"Camas: "<<camas<<std::endl;
	std::cout<<"Tipo de habitación: "<<tipo<<std::endl;
}
