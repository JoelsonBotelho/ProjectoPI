#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "problema3.h"
#include "base.h"

char **problema3(char entrada[51])
{
	int controlo1, controlo2, controlo3, controlo4, i, incr = 0, incr1, limite = 0;
	char **apresentacao, saida[51], desorganizado, decrescente[51], impar[6] = {'1','3','5','7','9','\0'}, par[5] = {'2','4','6','8','\0'};
	apresentacao = NULL;
  	limite = strlen(entrada);
	for (controlo1 = 0; controlo1 < limite ; controlo1++)
	{
	    if((entrada[controlo1] != par[0]) && (entrada[controlo1] != par[1]) && (entrada[controlo1] != par[2]) && (entrada[controlo1] != par[3]))
	    {
	        saida[incr] = entrada[controlo1];
	        saida[incr + 1] = '\0';
	        incr++;
	    }
	}
	apresentacao = (char **) malloc(sizeof(char) * 51);
	for(i = 0; i < 10; i++)
	{
		apresentacao[i] = (char *) malloc(sizeof(char) * strlen(saida));
	}
	incr = 0;
	limite = strlen(saida);
	for(controlo2 = 0; controlo2 < limite; controlo2++)
	{
	    if((saida[controlo2] == impar[0]) || (saida[controlo2] == impar[1]) || (saida[controlo2] == impar[2]) || (saida[controlo2] == impar[3]) || (saida[controlo2] == impar[4]))
	    {
	        decrescente[incr] = saida[controlo2];
	        decrescente[incr + 1] = '\0';
	        incr++;
	    }
	}

	incr = 0;
	limite = strlen(decrescente);
	for (controlo4 = 0; controlo4 < limite; controlo4++) {
	    for (controlo3 = incr; controlo3 < controlo4; controlo3++) {
	        if (decrescente[controlo4] > decrescente[controlo3]) {
	            desorganizado = decrescente[controlo4];
	            decrescente[controlo4] = decrescente[controlo3];
	            decrescente[controlo3] = desorganizado;
	        }
	    }
	}

	incr1 = 0;
	incr = 0;
	DENOVO: limite = strlen(saida);
	for(controlo1 = 0; controlo1 < limite ; controlo1++)
	{
	    if(saida[controlo1] == decrescente[incr])
	    {
	            saida[controlo1] = '-';
	            controlo3 = 0;
	            entrada[0] = '\0';        
	            for(controlo2 = 0; controlo2 < limite; controlo2++)
	            {
	                if((saida[controlo2] != impar[0]) && (saida[controlo2] != impar[1]) && (saida[controlo2] != impar[2]) && (saida[controlo2] != impar[3]) && (saida[controlo2] != impar[4]))
	                {   
	                    entrada[controlo3] = saida[controlo2];
	                    entrada[controlo3 + 1] = '\0';
	                    controlo3++;
	                }
	            }
	        incr++;
	        for(controlo4 = controlo1; controlo4 < limite; controlo4++)
	        {
	            saida[controlo4] = saida[controlo4 + 1];
	        }
			strcpy(apresentacao[incr1],entrada);
			incr1++;
	        goto DENOVO;    
	    }
	}
	return apresentacao;
}