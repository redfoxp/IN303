#include <uvsqgraphics.h>

void multEgypt(int x, int y )
{
	int z = 0;
	prinf("%d x %d \n", x,y);
	while (x >= 1)
	
	{
		if (x % 2 == 0)
		{
			x = x / 2;
			y = 2 * y;
			 
		
		}
		else
		{
			x--;
			z += y ;
			
		}
		 prinf("=%d x %d + %d \n", x,y,z);
		
		}
		printf("=%d\n", z);
		
	
	}


int main()
{
	int ad;
	int yo;
	
	ad = lire_entier_clavier();
	yo = lire_entier_clavier();
	
	multEgypt(ad,yo);
	
	
	


wait_escape();
exit(0);
}


