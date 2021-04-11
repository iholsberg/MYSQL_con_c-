// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <mysql.h>

int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "localhost", "usr_empresa", "Empres@123", "Tarea_1", 3306, NULL, 0);
	if (conectar) {
		std::string puesto;
		std::cout << "Ingrese Puesto:";
		std::cin>> puesto;
		std::string insert = "insert into puestos(puesto) values('" + puesto + "')";
		const char* i = insert.c_str();
		Q_estado = mysql_query(conectar, i);
		if (!q_estado) {
			std::cout << "Ingreso Exitoso de la Informacion" << EndDialog;
		}
		else {
			std::cout << " --- Error al Ingresar ---" << EndDialog;
		}

	}
		else
		{
		std::cout << "Error en la Conexion" << EndDialog;
	}

	system("pause");
	return 0;

}







// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
