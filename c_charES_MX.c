/* UVM Plantel....: Hispano
 * Carrera........: Ingeniería en Sistemas Computacionales
 * Materia........: Programación Orientada a Objetos
 * Profesor.......: Jorge Alberto Flores Quintana
 * Fecha..........: 2020/04/08
 * Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
 * Programa.......: charES_MX.cpp
 * Propósito......: Programa que muestra el uso de las librerías local para mostrar cadenas de caracteres
 *                  en español (Versión C++/C)
 *                  Basado en https://stackoverflow.com/questions/2492077/output-unicode-strings-in-windows-console-app
 *                            http://www.angelikalanger.com/Articles/Cuj/Internationalization/I18N.html
 * Versión........: 1.0     Version inicial
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define STR_LOCALE_MX	"es_MX.utf8"		/* código de caracteres UNICODE para consola */

int main(void)
{
	/* Se reemplaza el locale global de C para mostrar caracteres español */
	setlocale(LC_ALL, STR_LOCALE_MX);						/* para C y C++ que se sincronicen con stdio.h */
	const struct lconv* const currentlocale = localeconv();

	/* ejemplo de uso para mostrar el locale configurado */
	printf("El parámetro de locale actual es %s\n", setlocale(LC_ALL, NULL));

	/* se muestra información que puede ser afectada por el locale */
	char car = (char)64;				/* caracter @ */
	int entero = 1234;					/* numero entero cualquiera */
	float flotante = 3.1515926f;		/* pi */
	double doble = 3e9;					/* velocidad de la luz */
	char cad1[] = "México";
	char cad2[] = "aeiouun - áéíóúüñ - ÁÉÍÓÚÜÑ";

	printf("%c\n", car);
	printf("%i\n", entero);
	printf("%f\n", flotante);
	printf("%lg\n", doble);
	printf("%s\n", cad1);
	printf("%s\n", cad2);

	return EXIT_SUCCESS;
}
