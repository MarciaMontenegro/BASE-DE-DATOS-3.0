#include <iostream>
#include "menu.h"
bool principal=true;
int main(){

	while (principal) {
		//Opciones
    std::cout<<"LO HICIMOS\n";
		std::cout << "BIENVENIDO A LA INTERFAZ DE USUARIO\nIntroduzca el numero de comando que desea ejecutar\n";
		std::cout << "1.- Crear persona\n2.- Mostrar clientes\n3.- Crear cuarto\n4.- Mostrar Cuarto\n5.- Crear empleado\n6.- Mostrar Empleados\n7.- Salir del menu\n";
		int operacion; std::cin >> operacion;
		switch (operacion) {
		case 1:
			CrearCliente();
			break;
		case 2:
			MostrarCliente();
			break;
		case 3:
			CrearCuarto();
			break;
		case 4:
			MostrarCuarto();
			break;
		case 5:
			CrearEmpleado();
			break;
		case 6:
			MostrarEmpleado();
			break;
        case 7:
            principal=false;
            break;


		default:
			break;
		}
	}
	return 0;
}
