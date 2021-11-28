#include <iostream>
#include <fstream>
#include "menu.h"
#include "MyLib.h"
//VIDA LOCA muy lloca
bool bucle_main=true;

int main(){
	std::string f;	
	std::cout<<"Introduzca la fecha del dia: "; std::cin>>f;
	menu menu1(f, bucle_main, cargar_datos_clientes(), cargar_datos_empleados(), cargar_datos_cuartos(), cargar_datos_gastos());
	while (menu1.bucle_main){
		menu1.mostrar_menu_principal();

	}
	return 0;
}
