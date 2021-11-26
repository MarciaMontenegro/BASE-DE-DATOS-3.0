#include <iostream>
#include <fstream>
#include "menu.h"
#include "MyLib.h"
//VIDA LOCA
bool bucle_main=true;

int main(){
	std::string f;	
	std::cout<<"Introduzca la fecha del dia: "; std::cin>>f;
	menu menu1(f, bucle_main);
	while (menu1.bucle_main){
		menu1.mostrar_menu_principal();
	}
	return 0;
}
