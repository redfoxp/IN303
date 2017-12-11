
#define TAILLE_CASE 50
#define coul_slider rouge
#define coul_sortie blanc
#define epp 5
#define coul_murs bleu
int fin;



struct mur
{
	int x,y,d;
};
typedef struct mur MUR;


struct slider {
	int L,H; // Largeur et hauteur de la grille
	int x_slider;
	int y_slider;
	int x_sortie;
	int y_sortie;
	int N;
	MUR* m;
};

typedef struct slider SLIDER;
