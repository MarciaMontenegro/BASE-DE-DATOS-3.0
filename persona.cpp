#include "persona.h"

Persona::Persona(){
  nombre = "";
  DNI = 0;
  telefono = 0;
}

Persona::Persona(std::string _nombre, int _DNI, int _telefono){
	nombre=_nombre; DNI=_DNI; telefono=_telefono;
}

void Persona::info(){
	std::cout << "Nombre: " << nombre << std::endl;
	std::cout << "DNI: " << DNI << std::endl;
	std::cout << "Telefono: " << telefono << std::endl;
}
