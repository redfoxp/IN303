
#include <uvsqgraphics.h>

double suite(int k,int n)
{
	if (k == n)
	
	{
				return sqrt(n);
	}
	else
	{
		return sqrt(k + suite(k+1,n));
	}
	
	
	}

int main()
{
	int n;
	n = lire_entier_clavier();
	
	
	
	for (n = 0; n < 100; n++)
	{
		printf(" %f \n " ,suite(1,n));
	}
	
	
	


wait_escape();
exit(0);
}


