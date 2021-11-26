#include "menu.h"
#include <conio.h>
#include <Windows.h>
#include <fstream>

menu::menu(std::string _fecha, bool _bucle_main){
	fecha=_fecha;
	bucle_main=_bucle_main;
	
}

menu::~menu(){
	
}

void menu::eliminar_cliente(){
	int buscador;
	std::cout<<"ID de cliente a eliminar: ";
	std::cin>>buscador;
	for(int i=0; i<10; i++){
		if(ptr_clientes[i].clienteID==buscador){
			ptr_clientes[i].~cliente();
			break;
		}
	}
}

void menu::eliminar_empleado(){
	int buscador;
	std::cout<<"ID de empleado a eliminar: ";
	std::cin>>buscador;
	for(int i=0; i<10; i++){
		if(ptr_empleados[i].empleadoID==buscador){
			ptr_empleados[i].~empleado();
			break;
		}
	}
}

void menu::eliminar_cuarto(){
	int buscador;
	std::cout<<"ID de empleado a eliminar: ";
	std::cin>>buscador;
	for(int i=0; i<10; i++){
		if(ptr_cuartos[i].cuartoID==buscador){
			ptr_cuartos[i].~cuarto();
			break;
		}
	}
}

void menu::eliminar_gastos(){
}

void menu::mostrar_menu_gastos(){
}	

void menu::mostrar_menu_voucher(){
	std::cout<<"Menu de datos: "<<std::endl;
	std::cout<<"1.- Imprimir voucher"<<std::endl;
	std::cout<<"4.- Volver al menu principal"<<std::endl;
	switch(_getch()){
		case '1':
			std::cout<<"\n Imprimiendo voucher\n";
			break;

		case '4':
			std::cout<<"\nVolviendo...\n";
			mostrar_menu_principal();
			break;
		default:
			break;
	}
}

void menu::mostrar_menu_eliminar(){
	std::cout<<"Menu de eliminación: "<<std::endl;
	std::cout<<"1.- Eliminar cliente"<<std::endl;
	std::cout<<"2.- Eliminar empleado"<<std::endl;
	std::cout<<"3.- Eliminar cuartos"<<std::endl;
	std::cout<<"4.- Volver al menu principal"<<std::endl;
	switch(_getch()){
		case '1':
			eliminar_cliente();
			break;
		case '2':
			eliminar_empleado();
			break;
		case '3':
			eliminar_cuarto();
			break;
		case '4':
			std::cout<<"\nVolviendo...\n";
			mostrar_menu_principal();
			break;
		default:
			break;
	}
}


void menu::mostrar_menu_datos(){
	std::cout<<"Menu de datos: "<<std::endl;
	std::cout<<"1.- Ver clientes"<<std::endl;
	std::cout<<"2.- Ver empleados"<<std::endl;
	std::cout<<"3.- Ver cuartos"<<std::endl;
	std::cout<<"4.- Volver al menu principal"<<std::endl;
	switch(_getch()){
		case '1':
			mostrar_clientes();
			break;
		case '2':
			mostrar_empleados();
			break;
		case '3':
			mostrar_cuartos();
			break;
		case '4':
			std::cout<<"\nVolviendo...\n";
			mostrar_menu_principal();
			break;
		default:
			break;
	}
}

void menu::mostrar_menu_creadores(){
	std::cout<<"Menu de creadores: "<<std::endl;
	std::cout<<"1.- Nuevo cliente"<<std::endl;
	std::cout<<"2.- Nuevo empleado"<<std::endl;
	std::cout<<"3.- Nuevo cuarto"<<std::endl;
	std::cout<<"4.- Nuevo gasto"<<std::endl;
	std::cout<<"4.- Volver al menu principal"<<std::endl;
	switch(_getch()){
		case '1':
			nuevo_cliente();
			break;
		case '2':
			nuevo_empleado();
			break;
		case '3':
			nuevo_cuarto();
			break;
		case '4':
			mostrar_menu_principal();
			break;
		default:
			break;
	}
}

void menu::mostrar_menu_principal(){
	std::cout<<"Fecha de hoy: "<<fecha<<std::endl;
	std::cout<<"Bienvenido a la interfaz";
	std::cout<<"\n1.- Creadores";
	std::cout<<"\n2.- Ver personas o cuartos";
	std::cout<<"\n3.- Eliminar clientes, empleados o cuartos";
	std::cout<<"\n4.- Voucher";
	std::cout<<"\n5.- Gastos"<<std::endl;
	switch(_getch()){
		case '1':
			mostrar_menu_creadores();
			break;
		case '2':
			mostrar_menu_datos();
			break;
		case '3':
			mostrar_menu_eliminar();
			break;
		case '4':
			mostrar_menu_voucher();
			break;
		case '5':
			mostrar_menu_gastos();
			break;
			
		case '0':
			std::cout<<"\nTerminando proceso\n";
			bucle_main=false;
			break;
		default:
			break;
	};
}

//FUNCIONES MENU CREADORES

void menu::nuevo_cliente(){
	//sumamos 1 al ptr_clientes
 std::string nombre, apellido, nivel;
  
  	int dni, cel, ingreso, salida, reserva;
	float pago;
	
	std::cout << "Nombre del cliente: "; std::cin >> nombre;
	std::cout << "Apellido del cliente: "; std::cin >> apellido;
	std::cout << "DNI: "; std::cin >> dni;
	std::cout << "Telefono: "; std::cin >> cel;
	std::cout << "Nivel: "; std::cin >> nivel;
	std::cout << "Fecha de ingreso: (DDMMAAAA)"; std::cin >> ingreso;
	std::cout << "Fecha de salida: (DDMMAAAA)"; std::cin >> salida;
	std::cout << "Numero de habitacion de la reserva "; std::cin >> reserva;
	std::cout << "Pago por adelantado "; std::cin >> pago;
	

	for (int i = 0; i < l_clientes; i++)
	{
		if (ptr_clientes[i].nombre == "")
		{
			ptr_clientes[i]= cliente(nombre, apellido, dni,cel,nivel,ingreso,salida,reserva, pago);
			ptr_clientes[i].set_clienteID(i);
			break;
		}
	}
}

void menu::nuevo_empleado(){
	std::string nombre, apellido,area;
	int dni,cel,hentrada,hsalida;
	float s;
	std::cout << "Nombre del empleado: "; std::cin>>nombre;
	std::cout << "Apellido del empleado: "; std::cin>>apellido;
	std::cout << "DNI: "; std::cin >> dni;
	std::cout << "Telefono: "; std::cin >> cel;
	std::cout << "Sueldo:"; std::cin >> s;
	std::cout << "Area de trabajo:"; std::cin>>area;
	std::cout << "Horario: Desde: "; std::cin >> hentrada;
	std::cout << " a "; std::cin >> hsalida;

	for (int i = 0; i < l_empleados; i++) {
		if (ptr_empleados[i].nombre == "") {
			ptr_empleados[i] = empleado (nombre,apellido,dni,cel,s,area,hentrada,hsalida);
			ptr_empleados[i].set_empleadoID(i);
			break;
		}
	}
}

void menu::nuevo_cuarto(){
	std::string tipo;
	int precio;
	int estado;
	int camas;
	std::cout << "Tipo de habitacion: "; std::cin>>tipo; std::cout << std::endl;
	std::cout << "Precio: "; std::cin >> precio; std::cout << std::endl;
	std::cout << "Numero de camas: "; std::cin >> camas; std::cout << std::endl;
	std::cout << "Estado de habitacion: "; std::cin >> estado; std::cout << std::endl;
	for (int i = 0; i < l_cuartos; i++) {
		if (ptr_cuartos[i].estado == 0) {
			ptr_cuartos[i]= cuarto (precio, estado, camas, tipo);
			break;
		}
	}
}

void menu::nuevo_gasto(){
	std::string descripcion;
	std::string area;
	std::cout << "Descripcion del gasto: "; getline(std::cin, descripcion);
	std::cout << "Area en la que se requiere el gasto: "; getline(std::cin, area);std::cout << std::endl;
	for (int i=0; i<l_gastos; i++){
		if (ptr_gastos[i].area==""){
			ptr_gastos[i].set_gastoID(i);
			ptr_gastos[i]= gastos(descripcion, area);
			break;
		}
	}
}

//FUNCIONES MENU MOSTRAR DATOS

void menu::mostrar_clientes(){
	for (int i = 0; i < l_clientes; i++) {
		if (ptr_clientes[i].nombre != "") {
			std::cout << "Cliente" << i << std::endl;
			ptr_clientes[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::mostrar_empleados(){
	for (int i = 0; i < 10; i++) {
		if (ptr_empleados[i].nombre != "") {
			std::cout << "Empleados	" << i << std::endl;
			ptr_empleados[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::mostrar_cuartos(){
	for (int i = 0; i < 10; i++) {
		if (ptr_cuartos[i].precio != 0) {
			std::cout << "Cuartos" << i << std::endl;
			ptr_cuartos[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::mostrar_gastos(){
	for (int i = 0; i < 10; i++) {
		if (ptr_gastos[i].descripcion != "") {
			std::cout << "Gastos" << i << std::endl;
			ptr_gastos[i].info();
			break;
		}
		std::cout << std::endl;
	}
}






void menu::guardar_datos(){

}


