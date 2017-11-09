#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// A
/*
int main( int argc, char** argv){

int i;

	for(i=0; i<argc; i++)
		{
			printf("%s\n", argv[i]);
		}
return 0;
}
*/

// C

/*
int main( int argc, char** argv){

int i;
double somme = 0;


	for(i=0; i<argc; i++)
		{
			somme  = somme + atof(argv[i]);
		}
		
		printf("LA SOMME DE NOMBRE ENTREES EST DE  %f \n",somme );
		
return 0;
}
*/

// D

int isfloat(char*s)
{
	int i = 0;
	if (s[i] == '-' )
	{
		i++;
	}
	if (!isdigit(s[i]))
	{
		return 0;
	}
	i++;
	while (isdigit(s[i]))
	{
		i++;
	}
	if (s[i]=='0')
	{
		return 1;
	}
	
	if (s[i]!='.')
	{
		return 0;
	}
	i++;
	if (!isdigit(s[i]))
	{
		return 0;
	}
	while (isdigit(s[i]))
	{
		i++;
	}
	if (s[i]=='\0')
	{
		return 1;
	}
	
	
	
	return 0;
	
	}



int main( int argc, char** argv){

int i;
double somme = 0;

	for(i=0; i<argc; i++)
	
		{
			if (isfloat(argv[i]))
			{
				somme = somme + atof(argv[i]);
			}
			
			
		}
		printf("LA SOMME ESt DE %f \n", somme );
return 0;
}
























