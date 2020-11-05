#include <stdio.h>


int main (){
	int a,b,c,d,e,i,f,g,h,y,j,w,z,l,m;
	
	printf ("Cuantos payasos va a enviar= ");
	scanf ("%d",&a);
	b=a*150;
	printf ("La sumatoria total por los  payasos en pesos es: $%d \n\n",b);
	
	printf ("Cuantos juegos de mesa va a enviar: ");
	scanf ("%d",&c);
	d=c*130;
	printf ("La sumatoria total por los juegos de mesa en pesos es: $%d\n\n",d);
	
	i=b+d;
	printf ("La sumatoria total del pedido (payasos y juegos de mesa) en pesos es: $%d\n\n",i);
	
	
	f=a*120 + c*150;
	printf ("El peso total de sus %d payasos y sus %d juegos de mesa en gr es: %d gr\n\n",a,c,f);
	
	w=2000;

	if(f<=8000)
	{
	printf ("El costo total del envio es: $%d\n\n",w);
	}

	
	if(f>8000)
	{
	y=(f-8000)/100;
	int z=y*200;
	j=2000+z;
	printf ("El costo total del envio es: $%d\n\n",j);
	}
	
	l=w+i;
	
	printf ("El costo total de mercancia y envio es de: %d",l);
	
	
	//Profe mi programa trabaja bien cuando son 30 payasos y 30 juegos de mesa, mayor a ese numero mi tranajo falla no supe como solucionar eso//
	
	
	
	
	
}
