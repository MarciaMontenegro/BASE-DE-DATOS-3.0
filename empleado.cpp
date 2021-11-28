#include "empleado.h"

empleado::empleado(){
}

empleado::empleado(std::string _nombre,std::string _apellido, int _DNI, int _telefono, float _sueldo, std::string _area, int _hora_e, int _hora_s) :persona(_nombre, _DNI, _telefono) {
	nombre = _nombre;
	apellido = _apellido;
	DNI = _DNI;
	telefono = _telefono;
	sueldo = _sueldo;
	area = _area;
	hora_e = _hora_e;
}

empleado::~empleado(){
}

int empleado::set_empleadoID(int _empleadoID){
	empleadoID=_empleadoID;
}

void empleado::info() {
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Apellido: " << apellido << std::endl;
	std::cout << "Documento de identificación: " << DNI << std::endl;
	std::cout << "Telefono: " << telefono << std::endl;
	std::cout << "Sueldo: " << sueldo << std::endl;
	std::cout << "Area en la que trabaja: " << area << std::endl;
	std::cout << "Horario de " << hora_e << " a " << hora_s << std::endl;
}

