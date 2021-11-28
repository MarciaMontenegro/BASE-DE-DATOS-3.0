//MyLib.cpp
#include "MyLib.h"
#include <fstream>
#include <iostream>

int cargar_datos_clientes(){
	std::ifstream datos_clientes;
	int longitud;
	datos_clientes.open("datos_clientes.txt");
	if (datos_clientes.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	datos_clientes >> longitud;
	datos_clientes.close();
	return longitud;
}

int cargar_datos_empleados(){
	std::ifstream datos_empleados;
	int longitud;
	datos_empleados.open("datos_empleados.txt");
	if (datos_empleados.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	datos_empleados >> longitud;
	datos_empleados.close();
	return longitud;
}

int cargar_datos_cuartos(){
	std::ifstream datos_cuartos;
	int longitud;
	datos_cuartos.open("datos_cuartos.txt");
	if (datos_cuartos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	datos_cuartos >> longitud;
	datos_cuartos.close();
	return longitud;
}

int cargar_datos_gastos(){
	std::ifstream datos_gastos;
	int longitud;
	datos_gastos.open("datos_gastos.txt");
	if (datos_gastos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	datos_gastos >> longitud;
	datos_gastos.close();
	return longitud;
}


