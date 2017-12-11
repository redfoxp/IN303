#include <stdio.h>
#include <stdlib.h>
#include "mes_types.h"


SLIDER lire_fichier(char *nom) {

	printf("nom = %s\n",nom);
	SLIDER S;
	int i;
	FILE *popo = NULL;
	popo = fopen(nom,"r");
	
	if (popo)
	{
	fscanf(popo,"%d %d\n",&S.L,&S.H);
	fscanf(popo,"%d %d\n",&S.x_slider,&S.y_slider);
	fscanf(popo,"%d %d\n",&S.x_sortie,&S.y_sortie);
	fscanf(popo,"%d\n",&S.N);
	S.m = malloc(S.N*sizeof(MUR));
	for (i = 0; i < S.N; i++)
	{
		fscanf(popo,"%d %d %d\n",&S.m[i].x,&S.m[i].y,&S.m[i].d);
		printf("%d %d %d\n",S.m[i].x,S.m[i].y,S.m[i].d);
	}
	
	}
	 fclose(popo);
	
	
	
	
	return S;
}


void ecrire_fichier(SLIDER S, char*nom) {
}
