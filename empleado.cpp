#include "empleado.h"

empleado::empleado(){
	empleadoID = 0;
	nombre = "";
	apellido = "";
	DNI = 0;
	telefono = 0;
	sueldo = 0;
	area = "";
	hora_e = 0;
	hora_s = 0;
}

empleado::empleado(int _empleadoID, std::string _nombre,std::string _apellido, int _DNI, int _telefono, float _sueldo, std::string _area, int _hora_e, int _hora_s) :persona(_nombre, _DNI, _telefono) {
	empleadoID=_empleadoID;
	nombre = _nombre;
	apellido = _apellido;
	DNI = _DNI;
	telefono = _telefono;
	sueldo = _sueldo;
	area = _area;
	hora_e = _hora_e;
	hora_s = _hora_s;
}

empleado::~empleado(){
}



void empleado::info() {
	std::cout << "ID : " << empleadoID << std::endl;
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "Apellido: " << apellido << std::endl;
	std::cout << "Documento de identificación: " << DNI << std::endl;
	std::cout << "Telefono: " << telefono << std::endl;
	std::cout << "Sueldo: " << sueldo << std::endl;
	std::cout << "Area en la que trabaja: " << area << std::endl;
	std::cout << "Horario de " << hora_e << " a " << hora_s << std::endl;
}
