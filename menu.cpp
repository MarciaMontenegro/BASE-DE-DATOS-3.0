#include "menu.h"
#include <conio.h>
#include <Windows.h>
#include <fstream>
#include <stdlib.h>

menu::menu(){
}

menu::menu(bool _bucle_main, int var1, int var2, int var3, int var4){
	bucle_main=_bucle_main;
	l_clientes=var1;
	l_empleados=var2;
	l_cuartos=var3;
	l_gastos=var4;
	//LISTAS DINAMICAS DENTRO DEL CONSTRUCTOR
	ptr_clientes = new cliente[l_clientes]; 
	ptr_empleados = new empleado[l_empleados];
	ptr_cuartos = new cuarto[l_cuartos];
	ptr_gastos = new gastos[l_gastos];
}

menu::~menu(){
	delete[] ptr_clientes;
	delete[] ptr_cuartos;
	delete[] ptr_empleados;
	delete[] ptr_gastos;
}

//MOSTRAR MENU DE...


void menu::mostrar_menu_principal() {
	//std::cout << "\033[H\033[2J\033[3J";
	std::cout << "\n_____________________________________________________________________________________________________________\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                        |    MENU PRINCIPAL    |                                             |\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             |\n";
	std::cout << "|               1. MENU CLIENTES                                   2. MENU EMPLEADOS                          | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|               3. MENU CUARTOS                                     4. MENU GASTOS                            | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                         0.SALIR DEL PROGRAMA                                                | \n";
	std::cout << "______________________________________________________________________________________________________________\n";
	std::cout << " INGRESE LA OPCION: ";
	switch (_getch()) {
	case '0':
		std::cout << "\n----------> GUARDANDO DATOS...\n";
		guardar_datos();
		bucle_main = false;
		break;
	case '1':
		menu_clientes();
		break;
	case '2':
		menu_empleados();
		break;
	case '3':
		menu_cuartos();
		break;
	case '4':
		menu_gastos();
		break;
	default:
		break;
	}

}

void menu::menu_clientes() {
//	std::cout << "\033[H\033[2J\033[3J";
	std::cout << "\n_____________________________________________________________________________________________________________\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                        |    MENU CLIENTES     |                                             |\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             |\n";
	std::cout << "|              1. CREAR NUEVO CLIENTE                              2. BUSCAR CLIENTE                          | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|              3. ELIMINAR CLIENTE                                 4. MOSTRAR LISTA DE CLIENTES               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                           5.MENU PRINCIPAL                                                  | \n";
	std::cout << "______________________________________________________________________________________________________________\n";
	std::cout << " INGRESE LA OPCION: ";
	switch (_getch()) {
	case '1':
		nuevo_cliente();
		break;
	case '2':
		//s	buscar_clientes();
		break;
	case '3':
		eliminar_cliente();
		break;
	case '4':
		mostrar_clientes();
	case '5':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}

void menu::nuevo_cliente(){
	std::string nombre, apellido, nivel;
  	int dni, cel, ingreso, salida, reserva;
	float pago;
	std::cout << "\n*******************************************NUEVO CLIENTE***************************************************\n";
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
			ptr_clientes[i]= cliente(i,nombre, apellido, dni,cel,nivel,ingreso,salida,reserva, pago);
			break;
		}
	}
}

void menu::mostrar_clientes(){
	std::cout << "\n*******************************************MOSTRAR CLIENTES***************************************************\n";
	for (int i = 0; i < l_clientes; i++) {
		if (ptr_clientes[i].nombre != "") {
			std::cout << "Cliente" << i << std::endl;
			ptr_clientes[i].info();
		}
		std::cout << std::endl;
	}
}
void menu::eliminar_cliente(){
	std::cout << "\n*******************************************ELIMINAR CLIENTE***************************************************\n";
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


void menu::menu_empleados() {
	std::cout << "\n_____________________________________________________________________________________________________________\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                        |    MENU EMPLEADOS    |                                             |\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             |\n";
	std::cout << "|              1. CREAR NUEVO EMPLEADO                            2. BUSCAR EMPLEADO                          | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|              3. ELIMINAR EMPLEADO                               4. MOSTRAR LISTA DE EMPELADOS               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                           5.MENU PRINCIPAL                                                  | \n";
	std::cout << "______________________________________________________________________________________________________________\n";
	std::cout << " INGRESE LA OPCION: ";
	switch (_getch()) {
	case '1':
		nuevo_empleado();
		break;
	case '2':
		//	buscar_empleados();
		break;
	case '3':
		eliminar_empleado();
		break;
	case '4':
		mostrar_empleados();
	case '5':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}

}


void menu::menu_cuartos() {
	std::cout << "\n_____________________________________________________________________________________________________________\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                        |     MENU CUARTOS     |                                             |\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             |\n";
	std::cout << "|              1. CREAR NUEVO CUARTO                             2. BUSCAR CUARTO                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|              3. ELIMINAR CUARTO                                4. MOSTRAR LISTA DE CUARTOS                  | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                           5.MENU PRINCIPAL                                                  | \n";
	std::cout << "______________________________________________________________________________________________________________\n";
	std::cout << " INGRESE LA OPCION: ";
	switch (_getch()) {
	case '1':
		nuevo_cuarto();
		break;
	case '2':
		//	buscar_cuarto();
		break;
	case '3':
		eliminar_cuarto();
		break;
	case '4':
		mostrar_cuartos();
	case '5':
		
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
}


void menu::menu_gastos() {
	std::cout << "\n_____________________________________________________________________________________________________________\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                        |      MENU GASTOS     |                                             |\n";
	std::cout << "|                                          ____________________                                               | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             |\n";
	std::cout << "|              1. CREAR NUEVO GASTO                              2. BUSCAR GASTO                              | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|              3. ELIMINAR GASTO                                 4. MOSTRAR LISTA DE GASTOS                   | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                                                                                             | \n";
	std::cout << "|                                           5.MENU PRINCIPAL                                                  | \n";
	std::cout << "______________________________________________________________________________________________________________\n";
	std::cout << " INGRESE LA OPCION: ";
	switch (_getch()) {
	case '1':
		nuevo_gasto();
		break;
	case '2':
		//	buscar_gasto();
		break;
	case '3':
		eliminar_gastos();
		break;
	case '4':
		mostrar_gastos();
	case '5':
		std::cout << "\nVolviendo...\n";
		mostrar_menu_principal();
		break;
	default:
		break;
	}
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

//FUNCION ELIMINAR
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
	int buscador;
	std::cout<<"ID de gasto a eliminar: ";
	std::cin>>buscador;
	for(int i=0; i<10; i++){
		if(ptr_gastos[i].gastoID==buscador){
			ptr_gastos[i].~gastos();
			break;
		}
	}
}

//FUNCIONES MENU CREADORES

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
	std::cout << " a "; std::cin >> hsalida; std::cout<< std::endl;

	for (int i = 0; i < l_empleados; i++) {
		if (ptr_empleados[i].nombre == "") {
			ptr_empleados[i] = empleado (i,nombre,apellido,dni,cel,s,area,hentrada,hsalida);
			break;
		}
	}
}

void menu::nuevo_cuarto(){
	std::string tipo,estado;
	int precio,camas;
	
	std::cout << "Tipo de habitación: ";std::cin>>tipo; std::cout<< std::endl;
	std::cout << "Camas: ";std::cin>>camas; std::cout<< std::endl;
	std::cout << "Precio de la habitacion: "; std::cin>>precio; std::cout<< std::endl;
	std::cout << "Estado: " ; std::cin>>estado; std::cout<< std::endl;
	
	for (int i = 0; i < l_cuartos; i++) {
		if (ptr_cuartos[i].estado== "") {
			ptr_cuartos[i]= cuarto (i, tipo, camas,precio,estado);
			break;
		}
	}
}


void menu::nuevo_gasto(){
	std::string descripcion;
	std::string area;
	std::cout << "Descripcion del gasto: "; std::cin>>descripcion; std::cout<< std::endl;
	std::cout << "Area en la que se requiere el gasto: "; std::cin>>area; std::cout<< std::endl;
	for (int i=0; i<l_gastos; i++){
		if (ptr_gastos[i].descripcion == ""){
			ptr_gastos[i]= gastos(i,descripcion, area);
			break;
		}
	}
}

//FUNCIONES MENU MOSTRAR DATOS

void menu::mostrar_empleados(){
	for (int i = 0; i < l_empleados; i++) {
		if (ptr_empleados[i].nombre != "") {
			ptr_empleados[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::mostrar_cuartos(){
	for (int i = 0; i < l_cuartos; i++) {
		if (ptr_cuartos[i].precio != 0) {
			std::cout << "Cuartos" << i << std::endl;
			ptr_cuartos[i].info();
		}
		std::cout << std::endl;
	}
}

void menu::mostrar_gastos(){
	for (int i = 0; i < l_gastos; i++) {
		if (ptr_gastos[i].descripcion != "") {
			std::cout << "Gastos" << i << std::endl;
			ptr_gastos[i].info();
			
		}
		std::cout << std::endl;
	}
}

//FUNCIONES GUARDAR DATOS EN EL ARCHIVO TXT 
void menu::guardar_datos(){
	guardar_datos_clientes();
	guardar_datos_empleados();
	guardar_datos_cuartos();
	guardar_datos_gastos();
}

void menu::guardar_datos_clientes(){
	std::ofstream datos_clientes;
	datos_clientes.open("datos_clientes.txt",std::ios::out);
	if (datos_clientes.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	//PRIMERA LINEA ESCRIBIR NUMERO DE CLIENTES L_CLINETES
	//CARGAR DATOS DE LOS CLIENTES CREADOS
	for (int i = 0; i < l_clientes; i++) {
		if (ptr_clientes[i].nombre != "") {
			if (ptr_clientes[i].clienteID>=1){
				datos_clientes<<"\n";
			}
			datos_clientes<<ptr_clientes[i].clienteID;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].nombre;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].apellido;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].DNI;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].telefono;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].rango;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].check_in;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].check_out;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].num_reserva;
			datos_clientes<<" ";
			datos_clientes<<ptr_clientes[i].pago;
		}
	}
	datos_clientes.close();	
}

void menu::guardar_datos_empleados(){
	std::ofstream datos_empleados;
	datos_empleados.open("datos_empleados.txt",std::ios::out);
	if (datos_empleados.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}

	for (int i = 0; i < l_empleados; i++) {
		if (ptr_empleados[i].nombre != "") {
			if (ptr_empleados[i].empleadoID>=1){
				datos_empleados<<"\n";
			}
			datos_empleados<<ptr_empleados[i].empleadoID;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].nombre;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].apellido;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].DNI;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].telefono;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].sueldo;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].area;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].hora_e;
			datos_empleados<<" ";
			datos_empleados<<ptr_empleados[i].hora_s;
		}
	}
	datos_empleados.close();	
	
}

void menu::guardar_datos_cuartos(){
	std::ofstream datos_cuartos;
	datos_cuartos.open("datos_cuartos.txt",std::ios::out);
	if (datos_cuartos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}


	for (int i = 0; i < l_cuartos; i++) {
		if (ptr_cuartos[i].precio != 0) {
			if (ptr_cuartos[i].cuartoID>=1){
				datos_cuartos<<"\n";
			}
			datos_cuartos<<ptr_cuartos[i].cuartoID;
			datos_cuartos<<" ";
			datos_cuartos<<ptr_cuartos[i].tipo;
			datos_cuartos<<" ";
			datos_cuartos<<ptr_cuartos[i].camas;
			datos_cuartos<<" ";
			datos_cuartos<<ptr_cuartos[i].precio;
			datos_cuartos<<" ";
			datos_cuartos<<ptr_cuartos[i].estado;
		}
	}
	datos_cuartos.close();	
}

void menu::guardar_datos_gastos(){
	std::ofstream datos_gastos;
	datos_gastos.open("datos_gastos.txt",std::ios::out);
	if (datos_gastos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}

	for (int i = 0; i < l_gastos; i++) {
		if (ptr_gastos[i].descripcion != "") {
			if (ptr_gastos[i].gastoID>=1){
				datos_gastos<<"\n";
			}
			datos_gastos<<ptr_gastos[i].gastoID;
			datos_gastos<<" ";
			datos_gastos<<ptr_gastos[i].descripcion;
			datos_gastos<<" ";
			datos_gastos<<ptr_gastos[i].area;
		}
	}
	datos_gastos.close();	

}	



void menu::cargar_datos(){
	copiar_archivo_clientes();
	copiar_archivo_empleados();
	copiar_archivo_cuartos();
	copiar_archivo_gastos();

}



//FUNCIONES COPIAR ARCHIVOS DEL TXT A LA RAM

void menu::copiar_archivo_clientes(){
	std::ifstream datos_clientes;
	datos_clientes.open("datos_clientes.txt",std::ios::in);
	if (datos_clientes.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	std::string nombre, apellido, nivel;
  	int dni, cel, ingreso, salida, reserva,clienteID;
	float pago;
	
	
	while(!datos_clientes.eof()){
		datos_clientes >> clienteID;	
		datos_clientes >> nombre;
		datos_clientes >> apellido;
		datos_clientes >> dni;
		datos_clientes >> cel;
		datos_clientes >> nivel;
		datos_clientes >> ingreso;
		datos_clientes >> salida;
		datos_clientes >> reserva;
		datos_clientes >> pago;	
	for (int i = 0; i < l_clientes; i++){
		if (ptr_clientes[i].nombre == ""){
			ptr_clientes[i]= cliente(clienteID,nombre, apellido, dni,cel,nivel,ingreso,salida,reserva, pago);
			break;
		}
	}	
	}
	datos_clientes.close();	
}

void menu::copiar_archivo_empleados(){
	std::ifstream datos_empleados;
	datos_empleados.open("datos_empleados.txt",std::ios::in);
	if (datos_empleados.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	std::string nombre, apellido,area;
	int dni,cel,hentrada,hsalida,empleadoID;	
	float s;
	
	while(!datos_empleados.eof()){
		datos_empleados >> empleadoID;
		datos_empleados>>nombre;
		datos_empleados>>apellido;
		datos_empleados>>dni;
		datos_empleados>>cel;
		datos_empleados>>s;
		datos_empleados>>area;
		datos_empleados>>hentrada;
		datos_empleados>>hsalida;
	for (int i = 0; i < l_empleados; i++){
		if (ptr_empleados[i].nombre == ""){
			ptr_empleados[i]= empleado(empleadoID,nombre,apellido,dni,cel,s,area,hentrada,hsalida);
			break;
		}
	}
	}	
	datos_empleados.close();	
}

void menu::copiar_archivo_cuartos(){
	std::ifstream datos_cuartos;
	datos_cuartos.open("datos_cuartos.txt",std::ios::in);
	if (datos_cuartos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	std::string tipo,estado;
	int precio,camas,cuartoID;
	
	while(!datos_cuartos.eof()){
		datos_cuartos >> cuartoID;
		datos_cuartos>>tipo;
		datos_cuartos>>camas;
		datos_cuartos>>precio;
		datos_cuartos>>estado;
		
	for (int i = 0; i < l_cuartos; i++){
		if (ptr_cuartos[i].estado == ""){
			ptr_cuartos[i]= cuarto(cuartoID,tipo,camas,precio,estado);
			break;
		}
	}
	}	
	datos_cuartos.close();	
	
}

void menu::copiar_archivo_gastos(){
	std::ifstream datos_gastos;
	datos_gastos.open("datos_gastos.txt",std::ios::in);
	if (datos_gastos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	std::string descripcion;
	std::string area;
	int gastoID;
	
	while(!datos_gastos.eof()){
		datos_gastos>>gastoID;
		datos_gastos>>descripcion;
		datos_gastos>>area;
		
	for (int i = 0; i < l_gastos; i++){
		if (ptr_gastos[i].descripcion == ""){
			ptr_gastos[i]= gastos(gastoID,descripcion,area);
			break;
		}
	}
	}	
	datos_gastos.close();	
}




	
	
	
	
	
	
	
