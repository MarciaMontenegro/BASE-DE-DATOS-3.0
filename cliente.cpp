#include "cliente.h"

Cliente::Cliente() {
	nombre = "";
	DNI = 0;
	telefono = 0;
	rango = "";
	check_in = 0;
	check_out = 0;
	num_reserva = 0;
	pago = 0;
}

Cliente::Cliente(std::string _nombre, int _DNI, int _telefono, std::string _rango,
int _check_in, int _check_out, int _num_reserva, float _pago): Persona(_nombre, _DNI, _telefono){
	nombre=_nombre;
	DNI=_DNI;
	telefono=_telefono;
	rango=_rango;
	check_in=_check_in;
	num_reserva=_num_reserva;
	pago=_pago;
}

void Cliente::info(){
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "DNI: " << DNI << std::endl;
	std::cout << "Telefono: " << telefono << std::endl;
}
