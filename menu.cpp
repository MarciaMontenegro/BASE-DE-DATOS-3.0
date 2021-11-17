#include "menu.h"

Cliente Clientes[10];
Cuarto Cuartos[10];
Empleado Empleados[10];

void CrearCliente(){
  std::string a, b;
	int x, y, z, w, o;
	float p;
	std::cout << "Nombre del cliente: "; std::cin >> a;
	std::cout << "DNI: "; std::cin >> x;
	std::cout << "Telefono: "; std::cin >> y;
	std::cout << "Nivel: "; std::cin >> b;

	std::cout << "Fecha de ingreso: (DDMMAAAA)"; std::cin >> z;
	std::cout << "Fecha de salida: (DDMMAAAA)"; std::cin >> w;
	std::cout << "Numero de habitacion de la reserva "; std::cin >> o;
	std::cout << "Pago por adelantado "; std::cin >> p;


	for (int i = 0; i < 10; i++)
   {
		if (Clientes[i].nombre == "")
     {
  		Clientes[i] = Cliente(a, x, y,	b, z, w, o, p);
			break;
			}
		}

}


void CrearEmpleado(){
  std::string a, b; //nombre y area
	int x, y, z, w, o; //dni,cel,hentrada, hsalida
	float s;
	std::cout << "Nombre del empleado: "; std::cin >> a;
	std::cout << "DNI: "; std::cin >> x;
	std::cout << "Telefono: "; std::cin >> y;
	std::cout << "Sueldo:"; std::cin >> s;
	std::cout << "Area de trabajo:"; std::cin >> b;
	std::cout << "Horario: Desde: "; std::cin >> w;
	std::cout << " a "; std::cin >> o; 

	for (int i = 0; i < 10; i++) {
		if (Empleados[i].nombre == "") {
			Empleados[i] = Empleado(a, x, y, s, b, w, o);
			break;
		}
	}

}



void CrearCuarto(){
  std::string tipo;
	int numero;
	int precio;
	int estado;
	int camas;
	std::cout << "Numero de habitacion: "; std::cin >> numero; std::cout << std::endl;
	std::cout << "Precio: "; std::cin >> precio; std::cout << std::endl;
	std::cout << "Numero de camas: "; std::cin >> camas; std::cout << std::endl;
	std::cout << "Estado de habitacion: "; std::cin >> estado; std::cout << std::endl;
	//d = 1;
	std::cout << "Tipo de habitacion: "; std::cin >> tipo; std::cout << std::endl;

	for (int i = 0; i < 10; i++) {
		if (Cuartos[i].estado == 0) {
			Cuartos[i] = Cuarto(numero, precio, estado, camas, tipo);
			break;
		}
	}

}



void MostrarCliente(){
  	for (int i = 0; i < 10; i++) {
		if (Clientes[i].nombre != "") {
			std::cout << "Cliente" << i << std::endl;
			Clientes[i].info();
		}
		std::cout << std::endl;
	}

}

void MostrarEmpleado(){
	for (int i = 0; i < 10; i++) {
		if (Empleados[i].nombre != "") {
			std::cout << "Empleados	" << i << std::endl;
			Empleados[i].info();
		}
		std::cout << std::endl;
	}

}

void MostrarCuarto(){
	for (int i = 0; i < 10; i++) {
		if (Cuartos[i].tipo != "") {
			std::cout << "Cuartos" << i << std::endl;
			Cuartos[i].info();
		}
		std::cout << std::endl;
	}

}

