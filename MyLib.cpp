//MyLib.cpp
#include "MyLib.h"
#include <fstream>
#include <iostream>


int cargar_datos_clientes(int &nuevo){
	std::ifstream datos_clientes;
	std::string linea;
	int longitud=0;
	datos_clientes.open("datos_clientes.txt");
	if (datos_clientes.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	
	if (datos_clientes.is_open()){
		while(!datos_clientes.eof()){
			getline(datos_clientes, linea);
			longitud++;
		}
	}
	datos_clientes.close();
	
	longitud += nuevo;
	
	return longitud;
}

int cargar_datos_empleados(int &nuevo){
	std::ifstream datos_empleados;
	std::string linea;
	int longitud =0;
	datos_empleados.open("datos_empleados.txt");
	if (datos_empleados.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	if (datos_empleados.is_open()){
		while(!datos_empleados.eof()){
			getline(datos_empleados, linea);
			longitud++;
		}
	}
	datos_empleados.close();
	longitud += nuevo;
	return longitud;
}

int cargar_datos_cuartos(int &nuevo){
	std::ifstream datos_cuartos;
	std::string linea;
	int longitud =0;
	datos_cuartos.open("datos_cuartos.txt");
	if (datos_cuartos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	if (datos_cuartos.is_open()){
		while(!datos_cuartos.eof()){
			getline(datos_cuartos, linea);
			longitud++;
		}
	}
	datos_cuartos.close();
	longitud += nuevo;
	return longitud;
}

int cargar_datos_gastos(int &nuevo){
	std::ifstream datos_gastos;
	std::string linea;
	int longitud =0;
	datos_gastos.open("datos_gastos.txt");
	if (datos_gastos.fail()){
		std::cout<<"No se pudo abrir el archivo\n";
		exit(1);
	}
	if (datos_gastos.is_open()){
		while(!datos_gastos.eof()){
			getline(datos_gastos, linea);
			longitud++;
		}
	}
	datos_gastos.close();
	longitud += nuevo;
	return longitud;
}
