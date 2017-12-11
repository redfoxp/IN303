#include <stdio.h>
#include <stdlib.h>
#include <uvsqgraphics.h>

#include "mes_types.h"
#include "lire_ecrire.h"
#include "afficher.h"


void jeu(SLIDER *S)
{
	
	fin = 0;
	char a;
	int b,x,y;
	
	x = S->x_slider;
	y = S->y_slider;
	
	a = getchar();
	b = a;

	if(b == 113)
	{
	x = x - 1;
	printf("Sx = %d\n",x);
	}
	if(b == 100)
	{
	x = x + 1;
	printf("Sx = %d\n",x);
	}
	if(b == 122)
	{
	y = y + 1;
	printf("Sy = %d\n",y);
	}
	if(b == 115)
	{
	y = y - 1;
	printf("Sy = %d\n",y);
	}
	
	S->x_slider = x;
	S->y_slider = y;
	
	if (x == S->x_sortie && y == S->y_sortie)
	{
		fin = 1;
	}
	
	printf("t'as introduit : %d\n", b);
	
	
	}
	
