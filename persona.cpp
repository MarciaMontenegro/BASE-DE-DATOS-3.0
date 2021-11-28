#include "persona.h"

persona::persona(){
	
}

persona::persona(std::string _nombre, int _DNI, int _telefono) {
	nombre = _nombre;
	DNI = _DNI;
	telefono = _telefono;
}


persona::~persona(){
}

void persona::info() {
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "DNI: " << DNI << std::endl;
	std::cout << "Telefono: " << telefono << std::endl;
}

