#include "empleado.h"

Empleado::Empleado() {
	nombre = "";
	DNI = 0;
	telefono = 0;
	sueldo = 0;
	area = "";
	hora_e = 0;
	hora_s = 0;
}

Empleado::Empleado(std::string _nombre, int _DNI, int _telefono,float _sueldo, std::string _area, int _hora_e, int _hora_s) :Persona(_nombre, _DNI, _telefono){
	nombre=_nombre;
	DNI=_DNI;
	telefono=_telefono;
	sueldo=_sueldo;
	area=_area;
	hora_e=_hora_e;
}

void Empleado::info(){
	std::cout<<"Nombre: "<<nombre<<std::endl;
	std::cout<<"Documento de identificación: "<<DNI<<std::endl;
	std::cout<<"Telefono: "<<telefono<<std::endl;
	std::cout<<"Sueldo: "<<sueldo<<std::endl;
	std::cout<<"Area en la que trabaja: "<<area<<std::endl;
	std::cout<<"Horario de "<<hora_e<<" a "<<hora_s<<std::endl;
}
