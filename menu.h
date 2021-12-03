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

		bool bucle_main;
		int l_clientes, l_empleados, l_cuartos, l_gastos; //EL NUMERO 10 SERA REEMPLAZADO POR EL VALOR POR LEER EN EL ARCHVO .TXT
		
		//PUNTERO DE MEMORIA DINAMICA
		cliente* ptr_clientes;
		empleado* ptr_empleados; 
		cuarto* ptr_cuartos;
		gastos* ptr_gastos;

		menu();
		menu(bool bucle_main, int l_clientes, int l_empleados, int l_cuartos, int l_gastos);
		~menu();
				
				
		void menu_clientes();
		void menu_empleados();
		void menu_cuartos();
		void menu_gastos();		
				
		void guardar_datos();
				
				
				
		void mostrar_menu_voucher();
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
		
		
		//NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO NUEVO
		//FUNCIONES DE BUSQUEDA
		void busquedas_cli();
		void buscar_cliente_ID();
		void buscar_cliente_nombre();
		void buscar_cliente_DNI();
		void buscar_cliente_apellido();
		
		void busquedas_em();
		void buscar_empleado_ID();
		void buscar_empleado_nombre();
		void buscar_empleado_sector();
		void buscar_empleado_DNI();
		
		void busquedas_cu();
		void buscar_cuarto_ID();
		void buscar_cuarto_precio();
		
		void busquedas_gas();
		void buscar_gasto_ID();
		void buscar_gastos_area();
		
		void cuartos_libres();
		void asignar_cuarto();
		
		void error();
};

#endif
