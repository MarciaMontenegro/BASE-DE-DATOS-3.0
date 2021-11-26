#ifndef MENU_H
#define MENU_H
#include <iostream>
#include "persona.h"
#include "cliente.h"
#include "empleado.h"
#include "gastos.h"
#include "cuarto.h"

class menu{
	public:
		std::string fecha;
		bool bucle_main;
		int l_clientes=10, l_empleados=10, l_cuartos=10, l_gastos=10; //EL NUMERO 10 SERA REEMPLAZADO POR EL VALOR POR LEER EN EL ARCHVO .TXT
		
		menu(std::string fecha, bool bucle_main);
		~menu();

		//ASIGNACION DE MEMORIA DINAMICA
		cliente* ptr_clientes = new cliente[l_clientes]; //ptr_clientes[i];	
		empleado* ptr_empleados = new empleado[l_empleados]; //ptr_empleados[i]
		cuarto* ptr_cuartos = new cuarto[l_cuartos]; // ptr_cuartos[i]
		gastos* ptr_gastos = new gastos[l_gastos]; // ptr_gastos[i]
		
		
		void mostrar_menu_voucher();
		void mostrar_menu_eliminar();
		void mostrar_menu_datos();
		void mostrar_menu_creadores();
		void mostrar_menu_principal();
		void mostrar_menu_gastos();
		
		
		//FUNCIONES MENU CREADORES
		void nuevo_cliente();
		void nuevo_empleado();
		void nuevo_cuarto();
		void nuevo_gasto();

		//FUNCIONES MENU MOSTRAR DATOS
		void mostrar_clientes();
		void mostrar_empleados();
		void mostrar_cuartos();
		void mostrar_gastos();

		//FUNCIONES MENU ELIMINAR
		void eliminar_cliente();
		void eliminar_empleado();
		void eliminar_cuarto();
		void eliminar_gastos();

		//FUNCIONES MENU VOUCHER
		void crear_voucher();
		void mostrar_voucher();
		
		void guardar_datos();
		
		
	protected:
};

#endif
