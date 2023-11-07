#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "problema1.h"

int problema1(char primeiraStr[51], char segundaStr[51])
{
	char primeiraSubStr[51], segundaSubStr[51];
	int rotacao, ini1, ini2, control = 0;
	control = rotacao = strlen(primeiraStr);
	if(rotacao > 1)
	{
		for(ini1 = 0; ini1 < control; ini1++)
		{
			for(ini2 = 0; ini2 < rotacao; ini2++)
			{	
				segundaSubStr[ini2] = primeiraStr[ini2 + 1];
			}
			primeiraSubStr[0] = primeiraStr[0];				
			strcat(segundaSubStr, primeiraSubStr);
			strcpy(primeiraStr,segundaSubStr);
			if(!strcmp(primeiraStr, segundaStr))
				break;
		}
		if(!strcmp(segundaSubStr, segundaStr))
			{	
				return 1; 		
			}
			else 
				return 0;
	}
	else
		return 0;
	
	return 0;
}
