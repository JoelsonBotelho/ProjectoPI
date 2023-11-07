#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void mostrarMembros()
{
	system("clear");
	printf("---------------------------\n");
        printf("----------MEMBROS----------\n");
        printf("---------------------------\n");
	printf("------Luardino Jaime-------\n");
        printf("------Joelson Botelho------\n");
        printf("---------------------------\n");
}

void mostrarDocumentacao()
{
	system("clear");
        printf("---------------------------------------------------------------------------------------------------------------\n");
        printf("-------------------------------------------------DOCUMENTACAO--------------------------------------------------\n");
        printf("---------------------------------------------------------------------------------------------------------------\n");
        printf("h | -help: imprime a documentação do programa, incluindo a lista das opções de execução e descrição do projecto\n");
        printf("---------------------------------------------------------------------------------------------------------------\n");
        printf("prob <n>:  executa  um  determinado  problema,  onde  <n>  indica  o  número  do  problema---------------------\n");
        printf("Sabendo que apenas existe 3 problemas, então <n> só deve ser permitido de 1 à 3--------------------------------\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("-group: imprime a lista dos integrantes do grupo---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
}

char escolheOpcao(char opcao[20])
{
        char  *op[6];
        op[0] = "-h";
        op[1] = "-help";
        op[2] = "-group";
        op[3] = "-prob 1";
        op[4] = "-prob 2";
        op[5] = "-prob 3";
        if(!strcmp(op[0],opcao) || !strcmp(op[1],opcao))
        {
                mostrarDocumentacao();
        }
        else
	{
		if(!strcmp(op[2],opcao))
        	{
                	mostrarMembros();
        	}
		else
		{
			if(!strcmp(op[3],opcao))
        		{	/*1*/
                       	printf("caso 1");
        		}
        		else
        		{
        			if(!strcmp(op[4],opcao))
        			{	/*2*/
              				printf("caso 2");
        			}
        			else
        			{	
        				if(!strcmp(op[5],opcao))
        				{	/*3*/
              					printf("caso 3");
        				}
        				else
        				{
        					mostrarDocumentacao();
        				}
        			}
        		}
		}
	}
	return 0;
}

int main(int argc, char *argv[])
{
	escolheOpcao(argv[1]);
	return 0;
 }
