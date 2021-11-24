#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include "cliente.h"
#include "cuarto.h"
#include "empleado.h"
#include "gastos.h"

class menu {
public:
	std::string fecha;
	bool principall;
	menu(std::string fecha, bool principall);
	~menu();

	void mostrar_menu_voucher();
	void mostrar_menu_eliminar();
	void mostrar_menu_datos();
	void mostrar_menu_creadores();
	void mostrar_menu_modificaciones();
	void mostrar_menu_principal();


	//FUNCIONES MENU CREADORES
	void CrearCliente();
	void CrearEmpleado();
	void CrearCuarto();
	void CrearGasto();

	//FUNCIONES MENU MOSTRAR DATOS
	void MostrarClientes();
	void MostrarEmpleados();
	void MostrarCuartos();
	void MostrarGastos();

	//FUNCIONES MENU ELIMINAR
	void EliminarCliente();
	void EliminarEmpleado();
	void EliminarCuarto();
	void EliminarGastos();

	//FUNCIONES MENU VOUCHER
	void CrearVoucher();
	void MostrarVoucher();





protected:
};

#endif
