#include <iostream>
#include "menu.h"
#include <string>

bool principal = true;

int main() {
	std::string f;
	std::cout << "Introduzca la fecha del d�a: ";
	getline(std::cin, f);
	menu menu1(f, principal);
	while (menu1.principall) {
		menu1.mostrar_menu_principal();
	}
	return 0;
}
