#include <stdio.h>
int main (void){
	float cal1,cal2,cal3,promedio;
	printf("programa que permite obtener el promedio de tres calificaciones");
	printf("\n");
	printf("\nescribe la primera calificacion\n");
	scanf("%f",&cal1);
	printf("\nescribe la segunda calificacion\n");
	scanf("%f",&cal2);
	printf("\nescribe la tercera calificacion\n");
	scanf("%f",&cal3);
	promedio=(cal1+cal2+cal3)/3;
	if (promedio>=6)
	{
		printf("tu promedio es %.1f",promedio);
		printf("\nalumno aprobado");
	}
	else
		{
			printf("tu promedio es %.1f",promedio);
			printf("alumno reprobado");
		}
	
	
}
