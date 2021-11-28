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
		int l_clientes, l_empleados, l_cuartos, l_gastos; //EL NUMERO 10 SERA REEMPLAZADO POR EL VALOR POR LEER EN EL ARCHVO .TXT
		
		//PUNTERO DE MEMORIA DINAMICA
		cliente* ptr_clientes;
		empleado* ptr_empleados; 
		cuarto* ptr_cuartos;
		gastos* ptr_gastos;

		menu();
		menu(std::string fecha, bool bucle_main, int l_clientes, int l_empleados, int l_cuartos, int l_gastos);
		~menu();

		//ASIGNACION DE MEMORIA DINAMICA
	//	cliente* ptr_clientes = new cliente[l_clientes]; //ptr_clientes[i];	
	//	empleado* ptr_empleados = new empleado[l_empleados]; //ptr_empleados[i]
		//cuarto* ptr_cuartos = new cuarto[l_cuartos]; // ptr_cuartos[i]
	//	gastos* ptr_gastos = new gastos[l_gastos]; // ptr_gastos[i]
		
		
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
		
		//FUNCIONES COPIAR ARCHIVOS DEL TXT A LA RAM
		void copiar_archivo_clientes();
		void copiar_archivo_empleados();
		void copiar_archivo_cuartos();
		void copiar_archivo_gastos();
		
		//FUNCIONES GUARDAR DATOS EN EL ARCHIVO TXT 
		void guardar_datos_clientes();
		void guardar_datos_empleados();
		void guardar_datos_cuartos();
		void guardar_datos_gastos();
		
		
		
		
		
	protected:
};

#endif
