#include <uvsqgraphics.h>


 void convertion(int s)
{
	int m;
	int h;
	
	h = s / 3600;
	s = s % 3600;
	m = s / 60;
	s = s% 60;
	
	printf("%d secondes vaut %d heures %d minutes et %d secondes \n ", s+ 60 * m + 3600 * h, h , m , s);
	
	
	
	}

int main()
{
	


	int secondes; 
	 secondes = lire_entier_clavier();
	 
	 convertion(secondes);



wait_escape();
exit(0);
}


