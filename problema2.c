#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "problema2.h"
char *problema2(char mensagemInimiga[251])
{
    char mensagemIntrepetada[251], *mensagemExtraida, mensagemGuardada[251], mhz[10];
	char numero[11] = {'1','2','3','4','5','6','7','8','9','0','\0'}, acrescentador[5], num[2];
    int control1o, control2o, control3o, limite1o, limite2o, frequencia, incremento1o, incremento2o, incremento3o;
    mensagemExtraida = malloc(sizeof(char) * (int)(strlen(mensagemInimiga)) + 1);
    DENOVO: limite1o = strlen(mensagemInimiga);
    for(control1o = 0; control1o < limite1o; control1o++)
    {
        if((mensagemInimiga[control1o] == numero[0]) || (mensagemInimiga[control1o] == numero[1]) || (mensagemInimiga[control1o] == numero[2]) || (mensagemInimiga[control1o] == numero[3]) || (mensagemInimiga[control1o] == numero[4]) || (mensagemInimiga[control1o] == numero[5]) || (mensagemInimiga[control1o] == numero[6]) || (mensagemInimiga[control1o] == numero[7]) || (mensagemInimiga[control1o] == numero[8]) || (mensagemInimiga[control1o] == numero[9]) || (mensagemInimiga[control1o] == numero[10]))
        { 
            control1o++;
            if((mensagemInimiga[control1o] == numero[0]) || (mensagemInimiga[control1o] == numero[1]) || (mensagemInimiga[control1o] == numero[2]) || (mensagemInimiga[control1o] == numero[3]) || (mensagemInimiga[control1o] == numero[4]) || (mensagemInimiga[control1o] == numero[5]) || (mensagemInimiga[control1o] == numero[6]) || (mensagemInimiga[control1o] == numero[7]) || (mensagemInimiga[control1o] == numero[8]) || (mensagemInimiga[control1o] == numero[9]) || (mensagemInimiga[control1o] == numero[10]))
            {
                control1o++; 
                if((mensagemInimiga[control1o] == numero[0]) || (mensagemInimiga[control1o] == numero[1]) || (mensagemInimiga[control1o] == numero[2]) || (mensagemInimiga[control1o] == numero[3]) || (mensagemInimiga[control1o] == numero[4]) || (mensagemInimiga[control1o] == numero[5]) || (mensagemInimiga[control1o] == numero[6]) || (mensagemInimiga[control1o] == numero[7]) || (mensagemInimiga[control1o] == numero[8]) || (mensagemInimiga[control1o] == numero[9]) || (mensagemInimiga[control1o] == numero[10]))
                { 
                    mhz[0] = mensagemInimiga[control1o-2];
                    mhz[1] = mensagemInimiga[control1o-1];
                    mhz[2] = mensagemInimiga[control1o];
                    mhz[3] = '\0';
                    limite2o = limite1o;
                    VOLTA: frequencia = atoi(mhz);
                    if(frequencia >= 100 && frequencia <= 200)
                    {
                        strcpy(mhz, "0");
                        incremento1o = 0;
                        incremento2o = 0;
                        for (control2o = control1o; control2o < limite2o; control2o++)
                        {
                            if ((mensagemInimiga[control2o+1] == 'a') || (mensagemInimiga[control2o+1] == 'b') || (mensagemInimiga[control2o+1] == 'c') || (mensagemInimiga[control2o+1] == 'd') || (mensagemInimiga[control2o+1] == 'e') || (mensagemInimiga[control2o+1] == 'f') || (mensagemInimiga[control2o+1] == 'g') || (mensagemInimiga[control2o+1] == 'h') || (mensagemInimiga[control2o+1] == 'i') || (mensagemInimiga[control2o+1] == 'j') || (mensagemInimiga[control2o+1] =='k') || (mensagemInimiga[control2o+1] == 'l') || (mensagemInimiga[control2o+1] == 'm') || (mensagemInimiga[control2o+1] == 'n') || (mensagemInimiga[control2o+1] == 'o') || (mensagemInimiga[control2o+1] =='p') || (mensagemInimiga[control2o+1] == 'q') || (mensagemInimiga[control2o+1] == 'r') || (mensagemInimiga[control2o+1] == 's') || (mensagemInimiga[control2o+1] == 't') || (mensagemInimiga[control2o+1] == 'u') || (mensagemInimiga[control2o+1] == 'v') || (mensagemInimiga[control2o+1] == 'w') || (mensagemInimiga[control2o+1] == 'x') || (mensagemInimiga[control2o+1] == 'y') || (mensagemInimiga[control2o+1] == 'z') || (mensagemInimiga[control2o+1] == 'A') || (mensagemInimiga[control2o+1] == 'B') || (mensagemInimiga[control2o+1] == 'C') || (mensagemInimiga[control2o+1] == 'D') || (mensagemInimiga[control2o+1] == 'E') || (mensagemInimiga[control2o+1] == 'I') || (mensagemInimiga[control2o+1] == 'G') || (mensagemInimiga[control2o+1] == 'H') || (mensagemInimiga[control2o+1] == 'I') || (mensagemInimiga[control2o+1] == 'J') || (mensagemInimiga[control2o+1] =='K') || (mensagemInimiga[control2o+1] == 'L') || (mensagemInimiga[control2o+1] == 'M') || (mensagemInimiga[control2o+1] == 'N') || (mensagemInimiga[control2o+1] == 'O') || (mensagemInimiga[control2o+1] =='P') || (mensagemInimiga[control2o+1] == 'Q') || (mensagemInimiga[control2o+1] == 'R') || (mensagemInimiga[control2o+1] == 'S') || (mensagemInimiga[control2o+1] == 'T') || (mensagemInimiga[control2o+1] == 'U') || (mensagemInimiga[control2o+1] == 'V') || (mensagemInimiga[control2o+1] == 'W') || (mensagemInimiga[control2o+1] == 'X') || (mensagemInimiga[control2o+1] == 'Y') || (mensagemInimiga[control2o+1] == 'Z'))
                            {
                                mensagemIntrepetada[incremento1o] = mensagemInimiga[control2o+1];
                                mensagemIntrepetada[incremento1o+1] = '\0';
                                incremento1o++;
                            }
                            else 
                            {
                                incremento3o = 0;
                                for (control3o = control2o; control3o < limite2o; control3o++)
                                {
                                    mensagemGuardada[incremento3o] = mensagemInimiga[control3o+1];
                                    incremento3o++;
                                }
								incremento2o++;
                                break;
                            }
                            incremento2o++;
                        }
						strcat(mensagemExtraida, mensagemIntrepetada);
						mensagemIntrepetada[0] = '\0';
                        strcpy(mensagemInimiga, mensagemGuardada);
						goto DENOVO;
                    }
                    else
                    {
                        control1o++; 
                        if((mensagemInimiga[control1o] == numero[0]) || (mensagemInimiga[control1o] == numero[1]) || (mensagemInimiga[control1o] == numero[2]) || (mensagemInimiga[control1o] == numero[3]) || (mensagemInimiga[control1o] == numero[4]) || (mensagemInimiga[control1o] == numero[5]) || (mensagemInimiga[control1o] == numero[6]) || (mensagemInimiga[control1o] == numero[7]) || (mensagemInimiga[control1o] == numero[8]) || (mensagemInimiga[control1o] == numero[9]) || (mensagemInimiga[control1o] == numero[10]))
                        {
                            num[0] = mensagemInimiga[control1o];
                            strcpy(acrescentador,num);
                            strcat(mhz, acrescentador); 
                            goto VOLTA;
                        }
                    }
                }
            }
        }
    }
    return mensagemExtraida;
}