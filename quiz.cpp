/*
    Projeto Corpo Humano
    AEDII - Lab.AEDII
    Richard de Carvalho Borges - 634853
    Thiago Fonsato Alves - 622022
                                        */

/*
    Refer�ncias Bibliogr�ficas:

    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-sistema-excretor.htm#resposta-551
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-pulmao.htm#resposta-4765
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-pancreas.htm#resposta-3745
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-estrutura-interna-dos-olhos.htm#resposta-3651
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-paladar.htm#resposta-2697
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-intestino-delgado.htm#resposta-4241
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-figado.htm#resposta-2900
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-digestao.htm#resposta-469
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-coracao.htm#resposta-2723
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-cerebro.htm#resposta-4230
    https://exercicios.mundoeducacao.bol.uol.com.br/exercicios-biologia/exercicios-sobre-sistema-respiratorio.htm
*/

//Inclus�o de bibl�otecas
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <graphics.h>
#include <locale.h>
#include <stdbool.h>
//Inclus�o de fun��es
#include "mygraphics.h"
#include "questions.h"
#include "lista.h"

//Programa principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int i=1;
    int pontos=0;
    int resp=0;
    int list=0;

    //Cria lista
    listacircularde lista;
    criaLista(&lista);

    //Insere respostas corretas na lista
    insereLista(&lista, 2);
    insereLista(&lista, 1);
    insereLista(&lista, 1);
    insereLista(&lista, 1);
    insereLista(&lista, 4);
    insereLista(&lista, 2);
    insereLista(&lista, 2);
    insereLista(&lista, 4);
    insereLista(&lista, 2);
    insereLista(&lista, 3);
    insereLista(&lista, 1);
    insereLista(&lista, 1);
    Sleep(200);

    //Cria a janela gr�fica de 920x600, desenha o fundo padr�o e move o cursor para as coordenadas 0,0
    initwindow(920,600,"Projeto AEDII");
    moveto(0,0);
    readimagefile("back.jpg",0,0,920,600);

    //Chama fun��o que printa a primeira quest�o e suas alternativas na tela gr�fica junto com as checkbox
    qquest(i);

    //Desenha o bot�o para ir para pr�xima quest�o
    btn(340,500,460,550,"Pr�ximo >");

    printf("\nMostrando a lista...\n\n");
    mostraLista(lista, 0);
    printf("\n");
    mostraLista(lista, 1);

    //Define o valor da vari�vel "list" com o primeiro dado da lista
    list = navega(lista, 0, i);

    printf("\nQues�o %d\n", i);
    printf("\nPosi��o lista %d\n", list);

    while(!kbhit()) // aguarda, em loop, at� que uma tecla seja pressionada
    {
        //Redesenhar as checkbox na tela gr�fica de acordo com o click do usu�rio e vai guardar a resposta na v�riavel "resp" (A=1, B=2, C=3, D=4)
        if (mousex() >= 100 && mousex() <= 130 &&
            mousey() >= 200 && mousey() <= 230 &&
            ismouseclick(WM_LBUTTONDOWN))
        {
            checkboxC(100, 200, 130, 230);
            checkbox(100, 240, 130, 270);
            checkbox(100, 280, 130, 310);
            checkbox(100, 320, 130, 350);
            resp = 1;
            printf("\nResposta usu�rio %d\n", resp);
            clearmouseclick(WM_LBUTTONDOWN);
        }

        if (mousex() >= 100 && mousex() <= 130 &&
            mousey() >= 240 && mousey() <= 270 &&
            ismouseclick(WM_LBUTTONDOWN))
        {
            checkbox(100, 200, 130, 230);
            checkboxC(100, 240, 130, 270);
            checkbox(100, 280, 130, 310);
            checkbox(100, 320, 130, 350);
            resp = 2;
            printf("\nResposta usu�rio %d\n", resp);
            clearmouseclick(WM_LBUTTONDOWN);
        }

        if (mousex() >= 100 && mousex() <= 130 &&
            mousey() >= 280 && mousey() <= 310 &&
            ismouseclick(WM_LBUTTONDOWN))
        {
            checkbox(100, 200, 130, 230);
            checkbox(100, 240, 130, 270);
            checkboxC(100, 280, 130, 310);
            checkbox(100, 320, 130, 350);
            resp = 3;
            printf("\nResposta usu�rio %d\n", resp);
            clearmouseclick(WM_LBUTTONDOWN);
        }

        if (mousex() >= 100 && mousex() <= 130 &&
            mousey() >= 320 && mousey() <= 350 &&
            ismouseclick(WM_LBUTTONDOWN))
        {
            checkbox(100, 200, 130, 230);
            checkbox(100, 240, 130, 270);
            checkbox(100, 280, 130, 310);
            checkboxC(100, 320, 130, 350);
            resp = 4;
            printf("\nResposta usu�rio %d\n", resp);
            clearmouseclick(WM_LBUTTONDOWN);
        }

        //Detecta o click do mouse no bot�o "Avan�ar" e verifica se a resposta da quest�o est� correta, se estiver, � contabilizado 1 ponto
        if (mousex() >= 340 && mousex() <= 460 &&
            mousey() >= 500 && mousey() <= 550 &&
            i < 12 &&
            ismouseclick(WM_LBUTTONDOWN))
        {
            if (list == resp)
            {
                pontos++;
                printf("\nTUDO CERTO BEBE\n");
            }
            i++;
            qquest(i);
            list = navega(lista, 1, i);
            printf("\nQues�o %d\n", i);
            printf("\nPosi��o lista %d\n", list);
            Sleep(20);
            clearmouseclick(WM_LBUTTONDOWN);
            resp = 0;
        }

        //Verifica se o usu�rio j� encerrou o quiz e printa a tela de pontua��o
        if (mousex() >= 340 && mousex() <= 460 &&
            mousey() >= 500 && mousey() <= 550 &&
            i == 12 &&
            ismouseclick(WM_LBUTTONDOWN))
        {
            if (list == resp)
            {
                pontos++;
                printf("\nTUDO CERTO BEBE\n");
            }
            i++;
            readimagefile("back.jpg",0,0,920,600);
            setbkcolor(16);
            setcolor(15);
            outtextxy(90, 90, "FIM DO QUIZ");
            contPontos(i, pontos);
            clearmouseclick(WM_LBUTTONDOWN);
            resp = 0;
        }
    }
}
