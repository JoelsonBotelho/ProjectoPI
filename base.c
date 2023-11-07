#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "base.h"
#include "problema1.h"
#include "problema2.h"
#include "problema3.h"
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

void mostrarInvalida()
{
	system("clear");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("------------------------------------------------OPÇÃO INVÁLIDA-------------------------------------------------\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("h | -help: imprime a documentação do programa, incluindo a lista das opções de execução e descrição do projecto\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("prob <n>:  executa  um  determinado  problema,  onde  <n>  indica  o  número  do  problema---------------------\n");
    printf("Sabendo que apenas existe 3 problemas, então <n> só deve ser permitido de 1 à 3--------------------------------\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("-group: imprime a lista dos integrantes do grupo---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
}
void mostrarDocumentacao()
{
	system("clear");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("-------------------------------------------------DOCUMENTAÇÃO--------------------------------------------------\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("Este trabalho tem como objectivo a implementação de três problemas distintos com foco na manipulação de strings\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("Pretende-se com este projecto a implementação de um programa que dispõe de opções para execução da componente  \n");
    printf("que resolve um determinado problema----------------------------------------------------------------------------\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("h | -help: imprime a documentação do programa, incluindo a lista das opções de execução e descrição do projecto\n");
    printf("---------------------------------------------------------------------------------------------------------------\n");
    printf("prob <n>:  executa  um  determinado  problema,  onde  <n>  indica  o  número  do  problema---------------------\n");
    printf("Sabendo que apenas existe 3 problemas, então <n> só deve ser permitido de 1 à 3--------------------------------\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
	printf("-group: imprime a lista dos integrantes do grupo---------------------------------------------------------------\n");
	printf("---------------------------------------------------------------------------------------------------------------\n");
}
int strtamanho(char string[51])
{
    int tamanho = 0, i;
    for(i = 0; i < strlen(string); i++)
    {
        if(string[i] == '1' || string[i] == '3' || string[i] == '5' || string[i] == '7' || string[i] == '9')
        tamanho++;
    }             
    return tamanho;   
}
char escolheOpcao(char opcao[20], char opcao1[2])
{
	char **retorna, str1[51], str2[51], mensagemInimiga[251];
    int i, tamanho = 0;
	if (opcao)
	{
        char  *op[5] = {"-h", "-help", "-group", "-prob",'\0'};
        if((!strcmp(op[0],opcao) || !strcmp(op[1],opcao)) && !opcao1)
            mostrarDocumentacao();
        else if(!strcmp(op[2],opcao) && !opcao1)
        	mostrarMembros();
        else if(opcao1 && !strcmp(op[3],opcao) && !strcmp("1",opcao1))
            {
            	scanf("%s%s", str1, str2);
            	printf("%d\n", problema1(str1, str2));
            }
        else if(opcao1 && !strcmp(op[3],opcao) && !strcmp("2",opcao1))
            	{
                    scanf("%s", mensagemInimiga);
                    printf("%s\n", problema2(mensagemInimiga));
                }
        else if(opcao1 && !strcmp(op[3],opcao) && !strcmp("3",opcao1))
            {
                scanf("%s", str1);
                tamanho = strtamanho(str1);
                retorna = problema3(str1);
                for(i = 0; i < tamanho; i++)
                {
                    printf("%s\n", (retorna[i]));
                }
            }
        else
        	mostrarInvalida();
    }       
    else
       	mostrarInvalida();
    return 0;
}