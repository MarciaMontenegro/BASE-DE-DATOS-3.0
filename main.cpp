#include <iostream>
#include <fstream>
#include "menu.h"
#include "MyLib.h"
//VIDA LOCA muy lloca
bool bucle_main=true;

int main(){
	std::string f;	
	std::cout << "==========================================================================================================\n";
	std::cout << "                                            BIENVENIDO A LA BASE DE DATOS"; std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	std::cout << "                                           NECESITAMOS LOS SIGUIENTES DATOS:"; std::cout << "\n";
	std::cout << "==========================================================================================================\n";
	int nuevos1,nuevos2,nuevos3,nuevos4;
	std::cout <<"Cuantos clientes va a ingresar hoy"; std::cin >> nuevos1;
	std::cout <<"Cuantos empleados va a ingresar hoy"; std::cin >> nuevos2;
	std::cout <<"Cuantos cuartos va a ingresar hoy"; std::cin >> nuevos3;
	std::cout <<"Cuantos gastos va a ingresar hoy"; std::cin >> nuevos4;
	
	menu menu1( bucle_main, cargar_datos_clientes(nuevos1), cargar_datos_empleados(nuevos2), cargar_datos_cuartos(nuevos3), cargar_datos_gastos(nuevos4));

	//CARGAR ARCHIVOS A LA RAM
	menu1.cargar_datos();
				
	while (menu1.bucle_main){
		menu1.mostrar_menu_principal();
	}
	return 0;
}
