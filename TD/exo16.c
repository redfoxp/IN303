#include <uvsqgraphics.h>
#define N 10

void affiche_tableau()
{
	int tab[N];
	int i;
	
		for (i = 0; i <= N-1; i++)
		{
			tab[i] = alea_int(99);
			printf("tab[%d] = %d \n",i, tab[i]);
		}
		
		
		
	
	
	}

int main()
{
	
	affiche_tableau();
	

wait_escape();
exit(0);
}




