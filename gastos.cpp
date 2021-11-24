#include "gastos.h"

Gasto::Gasto() {
	descripcion = "";
	codigo = 0;
	area = "";
}

Gasto::Gasto(std::string _descripcion, int _codigo, std::string _area) {
	descripcion = _descripcion; codigo = _codigo; area = _area;
}
 
void Gasto::info() {
	std::cout << "Descripcion del gasto: " << descripcion << std::endl;
	std::cout << "Codigo: " << codigo << std::endl;
	std::cout << "Area en la que se requiere el gasto: " << area << std::endl;
}

