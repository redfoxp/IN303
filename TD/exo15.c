
#include <uvsqgraphics.h>
#define N 20

void init_tableau(int tab[N])
{
	int i;
	
	for (i = 0; i < N ; i++)
	{
		tab[i] = 1;
		
	}
	
	
	
	}
	
void affiche_tableau(int tab[N])
{
	int i;
	
	for (i = 0; i < N; i++)
	{
		printf("tab [%d] = %d \n",i,tab[i]);
	}
	
	
	}
	
int min_tableau(int tab[N])
{
	int i;
	int min;
	
	min = tab[0];
	
	
		for (i = 0; i < N; i++)
		{
			if(tab[i] <= min )
			{
				min = tab[i];
				
				}
			
			
		}
		
		return min;
		
	
	}
	
	

void alea_tableau(int tab[N])
{
	int i;
	
	for (i = 0; i < N ; i++)
	{
		tab[i] = alea_int(20);
		
	}
	
	
	
	}

void decaler(int tab[N])
{
	int i;
	int d;
	int p;
	
	
	
	
	for (i = 1; i < N ; i++)
	{
		d = tab[i];
		p = tab[i+1];
		
		tab[i] = tab[i-1];
		tab[i+1] = d;
		
		d = p;
		
		
	}
	
	tab[0] = 0;
	}
int main()
{
int tab[N];
int min;


init_tableau(tab);

affiche_tableau(tab);

alea_tableau(tab);

writeln();

affiche_tableau(tab);

min = min_tableau(tab);

decaler(tab);

affiche_tableau(tab);

printf("LA VALEUR MINIMALE DU TABLEAU EST %d \n", min);









wait_escape();
exit(0);
}




