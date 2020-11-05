#include <stdio.h>

int main (){
	
	int a,concepto;
	printf("Que edad tienes:\n");
	scanf ("%d",&a);
	printf("Cual es tu ocupacion:\n");
	printf("Menor de 18=1 \t Alumno=2 \n Adulto=3");
	scanf ("%d",&concepto);
	
	if(a<=4){
		printf("Tu entrada es GRATIS \n");
	}
	
	else if (a<=16){
		printf("Si no tienes credencial de estudiante la entrada solo cuesta= $50 \n");
		printf("Si si tienes tu credencial de estudiante tu entrada cuesta= $45 \n");	
	}
	
	else if (a>16){
		printf("Si no eres docente tu entrada es de= $100\n");
		printf("Si eres docente y cuentas con credencial tu entrada es de= $70\n");
	}
	
	else if (a>=65){
		printf("Si cuentas como miembro de INAPAM la entrada es de= $50\n");
		printf("Si no eres miembro de INAPAM la entrada es de= $100\n");
	}
	
	printf("Disfruta del museo :)");
}
