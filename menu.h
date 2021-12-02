
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
		menu( bool bucle_main, int l_clientes, int l_empleados, int l_cuartos, int l_gastos);
		~menu();
				
		//menu por clases
		void menu_clientes();
		void menu_empleados();
		void menu_cuartos();
		void menu_gastos();		
		//funciones ficheros	
		void guardar_datos();
		void cargar_datos();
				
				
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
};

#endif
