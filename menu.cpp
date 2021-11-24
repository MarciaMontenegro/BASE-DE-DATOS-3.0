#include "menu.h"
#include <conio.h>
#include <Windows.h>
menu::menu(std::string _fecha, bool _principall) {
	fecha = _fecha;
	principall = _principall;
}

menu::~menu() {
}

void menu::mostrar_menu_voucher() {
	std::cout << "Menu de datos: " << std::endl;
	std::cout << "1.- Imprimir voucher" << std::endl;
	std::cout << "4.- Volver al menu principal" << std::endl;
	switch (_getch()) {
	case '1':
		std::cout << "\n Imprimiendo voucher\n";
		break;

	case '4':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}

void menu::mostrar_menu_eliminar() {
	std::cout << "Menu de eliminación: " << std::endl;
	std::cout << "1.- Eliminar cliente" << std::endl;
	std::cout << "2.- Eliminar empleado" << std::endl;
	std::cout << "3.- Eliminar cuartos" << std::endl;
	std::cout << "4.- Volver al menu principal" << std::endl;
	switch (_getch()) {
	case '1':
		std::cout << "\n Implementar el destructor de cliente\n";
		break;
	case '2':
		std::cout << "\n Implementar el destructor de empleado\n";
		break;
	case '3':
		std::cout << "\n Implementar el destructor de cuartos\n";
		break;
	case '4':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}

void menu::mostrar_menu_datos() {
	std::cout << "Menu de datos: " << std::endl;
	std::cout << "1.- Ver clientes" << std::endl;
	std::cout << "2.- Ver empleados" << std::endl;
	std::cout << "3.- Ver cuartos" << std::endl;
	std::cout << "4.- Ver gastos" << std::endl;
	std::cout << "5.- Volver al menu principal" << std::endl;
	switch (_getch()) {
	case '1':
		MostrarClientes();
		break;
	case '2':
		MostrarEmpleados();
		break;
	case '3':
		MostrarCuartos();
		break;
	case '4':
		MostrarGastos();
	case '5':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}

void menu::mostrar_menu_creadores() {
	std::cout << "Menu de creadores: " << std::endl;
	std::cout << "1.- Nuevo cliente" << std::endl;
	std::cout << "2.- Nuevo empleado" << std::endl;
	std::cout << "3.- Nuevo cuarto" << std::endl;
	std::cout << "4.- Nuevo gasto" << std::endl;
	std::cout << "5.- Volver al menu principal" << std::endl;
	switch (_getch()) {
	case '1':
		CrearCliente();
		break;
	case '2':
		CrearEmpleado();
		break;
	case '3':
		CrearCuarto();
		break;
	case '4':
		CrearGasto();
	case '5':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}

void menu::mostrar_menu_modificaciones() {
	std::cout << "Menu para modificar datos: " << std::endl;
	std::cout << "1.- Modificar datos de clientes" << std::endl;
	std::cout << "2.- Modificar datos de empleados" << std::endl;
	std::cout << "3.- Modificar datos de cuartos" << std::endl;
	std::cout << "4.- Modificar datos de gastos" << std::endl;
	std::cout << "5.- Volver al menu principal" << std::endl;
	switch (_getch()) {
	case '1':
		std::cout << "\n Implementar modificador de cliente\n";
		break;
	case '2':
		std::cout << "\n Implementar modificador de empleados\n";
		break;
	case '3':
		std::cout << "\n Implementar modificador de cuartos\n";
		break;
	case '4':
		std::cout << "\n Implementar modificador de gastos\n";
	case '5':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}

void menu::mostrar_menu_principal() {
	std::cout << "Fecha de hoy: " << fecha << std::endl;
	std::cout << "Bienvenido a la interfaz";
	std::cout << "\n1.- Creadores";
	std::cout << "\n2.- Ver personas o cuartos";
	std::cout << "\n3.- Eliminar clientes, empleados o cuartos";
	std::cout << "\n4.- Modificar datos";
	std::cout << "\n5.- Voucher";
	std::cout << "\n6.- Gastos";
	switch (_getch()) {
	case '1':
		std::cout << "\nCreadores\n";
		mostrar_menu_creadores();
		break;
	case '2':
		std::cout << "\nVer datos\n";
		mostrar_menu_datos();
		break;
	case '3':
		std::cout << "\nEliminar clientes, empleados o cuartos\n";
		mostrar_menu_eliminar();
		break;
	case '4':
		std::cout << "\nModificar datos";
		mostrar_menu_modificaciones();

	case '5':
		std::cout << "\nVoucher\n";
		mostrar_menu_voucher();
		break;
	case '6':
		std::cout << "\nGastos\n";
		std::cout << "\nAun por implementar\n";
		break;

	case '0':
		std::cout << "\nTerminando proceso\n";
		principall = false;
		break;
	default:
		break;
	};


}

Cliente Clientes[10];
//FUNCIONES MENU CREADORES

void menu::CrearCliente() {
	std::string a, b;
	int x, y, z, w, o;
	float p;
	std::cout << "Nombre del cliente: "; 
	getline(std::cin, a);
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
			Clientes[i] = Cliente(a, x, y, b, z, w, o, p);
			break;
		}
	}
}


Empleado Empleados[10];
void menu::CrearEmpleado() {
	std::string a, b; 
	int x, y, z, w, o; 
	float s;
	std::cout << "Nombre del empleado: "; getline(std::cin, a); 
	std::cout << "DNI: "; std::cin >> x;
	std::cout << "Telefono: "; std::cin >> y;
	std::cout << "Sueldo:"; std::cin >> s;
	std::cout << "Area de trabajo:"; getline(std::cin, b);
	std::cout << "Horario: Desde: "; std::cin >> w;
	std::cout << " a "; std::cin >> o;

	for (int i = 0; i < 10; i++) {
		if (Empleados[i].nombre == "") {
			Empleados[i] = Empleado(a, x, y, s, b, w, o);
			break;
		}
	}
}

Cuarto Cuartos[10];
void menu::CrearCuarto() {
	std::string tipo;
	int numero;
	int precio;
	int estado;
	int camas;
	std::cout << "Tipo de habitacion: "; getline(std::cin, tipo); std::cout << std::endl;
	std::cout << "Numero de habitacion: "; std::cin >> numero; std::cout << std::endl;
	std::cout << "Precio: "; std::cin >> precio; std::cout << std::endl;
	std::cout << "Numero de camas: "; std::cin >> camas; std::cout << std::endl;
	std::cout << "Estado de habitacion: "; std::cin >> estado; std::cout << std::endl;
	for (int i = 0; i < 10; i++) {
		if (Cuartos[i].estado == 0) {
			Cuartos[i] = Cuarto(numero, precio, estado, camas, tipo);
			break;
		}
	}
}

Gasto Gastos[10];
void menu::CrearGasto() {
	std::string descripcion;
	int codigo;
	std::string area;
	std::cout << "Descripcion del gasto: "; getline(std::cin, descripcion);
	std::cout << "Area en la que se requiere el gasto: "; getline(std::cin, area);std::cout << std::endl;
	std::cout << "Codigo del gasto: "; std::cin >> codigo; std::cout << std::endl;

}

//FUNCIONES MENU MOSTRAR DATOS

void menu::MostrarClientes() {
	for (int i = 0; i < 10; i++) {
		if (Clientes[i].nombre != "") {
			std::cout << "Cliente" << i << std::endl;
			Clientes[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::MostrarEmpleados() {
	for (int i = 0; i < 10; i++) {
		if (Empleados[i].nombre != "") {
			std::cout << "Empleados	" << i << std::endl;
			Empleados[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::MostrarCuartos() {
	for (int i = 0; i < 10; i++) {
		if (Cuartos[i].tipo != "") {
			std::cout << "Cuartos" << i << std::endl;
			Cuartos[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::MostrarGastos() {
	for (int i = 0; i < 10; i++) {
		if (Gastos[i].descripcion != "") {
			std::cout << "Gastos" << i << std::endl;
			Gastos[i].info();
			break;
		}
		std::cout << std::endl;
	}

}


	



