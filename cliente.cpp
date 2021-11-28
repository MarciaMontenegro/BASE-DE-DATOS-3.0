#include "cliente.h"

cliente::cliente() {
	nombre = "";
	apellido = "";
	DNI = 0;
	telefono = 0;
	rango = "";
	check_in = 0;
	check_out = 0;
	num_reserva = 0;
	pago = 0;
}

cliente::cliente(std::string _nombre,std::string _apellido, int _DNI, int _telefono, std::string _rango,
	int _check_in, int _check_out, int _num_reserva, float _pago) : persona(_nombre, _DNI, _telefono) {
	nombre = _nombre;
	apellido= _apellido;
	DNI = _DNI;
	telefono = _telefono;
	rango = _rango;
	check_in = _check_in;
	check_out = _check_out;
	num_reserva = _num_reserva;
	pago = _pago;
}

cliente::~cliente(){
}

void cliente::info() {
	std::cout << "ID: " << clienteID << std::endl;
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Apellido: " << apellido << std::endl;
	std::cout << "DNI: " << DNI << std::endl;
	std::cout << "Telefono: " << telefono << std::endl;
	std::cout << "Rango: " << rango << std::endl;
	std::cout << "Check in: " << check_in << std::endl;
	std::cout << "Check out: " << check_out << std::endl;
	std::cout << "Numero de reserva: " << num_reserva << std::endl;
	std::cout << "Pago: " << pago << std::endl;
	
	
}



int cliente::set_clienteID(int _clienteID){
	clienteID=_clienteID;
}
