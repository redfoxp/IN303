#include <stdlib.h>
#include <stdio.h>

struct element 
{int val;
	struct element* suiv;
	};
typedef struct element* Liste;


Liste creerElement(int n)
{
	Liste l;
	l = malloc(sizeof(struct element));
	if (l== NULL)
	{
		printf("ALLOCATION DE MEMOIRE ECHOUE");
		exit(EXIT_FAILURE);
	}
	l -> val = n;
	l -> suiv = NULL;
	return l;
	
	}
	
Liste creerliste ()
{return NULL;}
int estvide(Liste l )
{return l == NULL;
	}

void affiche (Liste l)
{
	while(!estvide(l))
	{
		printf("%d\n",(*l).val);
		printf("%d\n",l -> val);
		l = (*l).suiv;
		l ->suiv;
		}
		
	
	}

void afficheR(Liste l)
{
	if (!estvide(l))
	{
		printf("%d\n", l-> val);
		afficheR(l -> suiv);
	}
	
	
	}
	
Liste insereDeb (Liste l,int n) 
{
	Liste lres = creerElement(n);
	lres  -> suiv = l;
	return lres;
	}
	
Liste insereFin(Liste l,int n)
{
	Liste ltemp, l2;
	ltemp = creerElement(n);
	if (estvide(l))
	{
		return ltemp;
		}
	l2 = l;
	while (!estvide(l -> suiv ))
	{
			l = l -> suiv; 
	}
	l -> suiv  = ltemp;
	return l2;
	}
	
	Liste insereFinR(Liste l, int n)
	{
		Liste tmp;
		if (estvide(l))
		{
			tmp = creerliste();
			return tmp;
			
		}
		l -> suiv = insereFinR(l -> suiv, n);
		return l;
		
		} 
		
Liste inserTric(Liqte l, int n)
{
	Liste ltmp = creerElement(n);
	if (estvide(l)) 
	{
			return ltmp;
		}
	while (!estvide(l-> suiv )&& l -> val -> val < n)
	{
		l = l-> suiv;
	}
	
	}
	
int main () {
 
	Liste l = creerliste();
	l = insereDeb(l,3);
	l = insereDeb(l,5);
	l = insereDeb(l,2);
	l = insereDeb(l,6);
	affiche(l);
	printf("ààààà");
	printf(" ");
	l = insereFin(l,4);
	affiche(l);
 
 
    exit(0);
}

