#include <uvsqgraphics.h>

#include "mes_types.h"


void initialiser_affichage(SLIDER S) {
	init_graphics (TAILLE_CASE*S.L,TAILLE_CASE*S.H);
}

void afficher_grille(SLIDER S) {
	int i;	
	POINT p1;
	POINT p2;
	p1.x = 0;
	p1.y = 0;
	p2.x = S.L*TAILLE_CASE;
	p2.y = 0;
	
		for (i = 0; i < S.L; i++)
		{
			draw_line(p1,p2,blanc);
				p1.y = p1.y + TAILLE_CASE;
				p2.y = p1.y;
				
						}
		p1.x = 0;
		p1.y = S.H * TAILLE_CASE;
		p2.x = 0;
		p2.y = 0;
		for (i = 0; i < S.H; i++)
			{
				draw_line(p1,p2,blanc);
				p1.x = p1.x + TAILLE_CASE ;
				p2.x = p1.x;
			
				
			}
		
	
}

void afficher_murs(SLIDER S) {
	
	if (S.N)
	{ int i;
	  POINT p,v;
		for (i = 0; i < S.N ; i++)
		{ 	
			if(S.m[i].d == 6)
			{
				 	
					p.x = S.m[i].x * TAILLE_CASE;
					v.x = p.x + TAILLE_CASE;
					p.y = S.m[i].y * TAILLE_CASE ;
					v.y = p.y + epp;
					draw_fill_rectangle(p,v,coul_murs);
	
			}
			else if(S.m[i].d == 0)
			{
				 	
					p.x = S.m[i].x * TAILLE_CASE;
					v.x = p.x + TAILLE_CASE;
					p.y = (S.m[i].y +1 )* TAILLE_CASE ;
					v.y = p.y + epp;
					draw_fill_rectangle(p,v,coul_murs);
	
				}
			else if(S.m[i].d == 3)
			{
				 	
					p.x = (S.m[i].x +1) * TAILLE_CASE;
					v.x = p.x + epp;
					p.y = (S.m[i].y )* TAILLE_CASE ;
					v.y = (S.m[i].y + 1) * TAILLE_CASE;
					draw_fill_rectangle(p,v,coul_murs);
	
				}	
			else if(S.m[i].d == 9)
			{
				 	
					p.x = S.m[i].x  * TAILLE_CASE;
					v.x = p.x + epp;
					p.y = (S.m[i].y )* TAILLE_CASE ;
					v.y = (S.m[i].y + 1) * TAILLE_CASE;
					draw_fill_rectangle(p,v,coul_murs);
	
				}				
			
		}
		
	}
	
}

void afficher_le_slider(SLIDER S) {
	
	POINT p;
	p.x = (S.x_slider * TAILLE_CASE) + (TAILLE_CASE / 2);
	p.y = (S.y_slider * TAILLE_CASE) + (TAILLE_CASE / 2);
	draw_fill_circle(p,TAILLE_CASE/2,coul_slider);
	
}

void afficher_sortie(SLIDER S) {
	POINT p,p2;
	
	p.x = (S.x_sortie * TAILLE_CASE) ;
	p.y = (S.y_sortie * TAILLE_CASE) ;
	p2.x = ((S.x_sortie+1) * TAILLE_CASE) ;
	p2.y = ((S.y_sortie+1) * TAILLE_CASE) ;
	draw_fill_rectangle(p,p2,coul_sortie);
}


void afficher_slider (SLIDER S) {
	fill_screen(black);
	afficher_grille(S);
	afficher_murs(S);
	afficher_le_slider(S);
	afficher_sortie(S);
}


void finir_affichage(SLIDER S) {
	wait_escape();
}
