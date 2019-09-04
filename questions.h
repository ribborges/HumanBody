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
#include <graphics.h>

//Declara��o das fun��es
void qquest(int x);
void contPontos(int x, int pontos);

//Fun��o que conta e verifica os pontos, exibindo uma mensagem no final do quiz
void contPontos(int x, int pontos)
{
    if (x == 13)
    {
        if (pontos == 0)
        {
            readimagefile("p0.jpg",0,0,920,600);
            outtextxy(140, 280, "Que horr�vel! Voc� errou tudo! Falta-lhe conhecimento!!!");
            outtextxy(140, 200, "PONTOS: 0 de 12");
        }

        if (pontos == 1)
        {
            readimagefile("p1.jpg",0,0,920,600);
            outtextxy(140, 280, "Horr�vel!");
            outtextxy(140, 200, "PONTOS: 1 de 12");
        }

        if (pontos == 2)
        {
            readimagefile("p2.jpg",0,0,920,600);
            outtextxy(140, 280, "P�ssimo!");
            outtextxy(140, 200, "PONTOS: 2 de 12");
        }

        if (pontos == 3)
        {
            readimagefile("p3.jpg",0,0,920,600);
            outtextxy(140, 280, "Muito ruim!");
            outtextxy(140, 200, "PONTOS: 3 de 12");
        }

        if (pontos == 4)
        {
            readimagefile("p4.jpg",0,0,920,600);
            outtextxy(140, 280, "Bem ruim!");
            outtextxy(140, 200, "PONTOS: 4 de 12");
        }

        if (pontos == 5)
        {
            readimagefile("p5.jpg",0,0,920,600);
            outtextxy(140, 280, "Regular!");
            outtextxy(140, 200, "PONTOS: 5 de 12");
        }

        if (pontos == 6)
        {
            readimagefile("p6.jpg",0,0,920,600);
            outtextxy(140, 280, "Voc� � melhor que isso!");
            outtextxy(140, 200, "PONTOS: 56 de 12");
        }

        if (pontos == 7)
        {
            readimagefile("p7.jpg",0,0,920,600);
            outtextxy(140, 280, "Precisa melhorar seu desempenho!");
            outtextxy(140, 200, "PONTOS: 7 de 12");
        }

        if (pontos == 8)
        {
            readimagefile("p8.jpg",0,0,920,600);
            outtextxy(140, 280, "Muito bem!");
            outtextxy(140, 200, "PONTOS: 8 de 12");
        }

        if (pontos == 9)
        {
            readimagefile("p9.jpg",0,0,920,600);
            outtextxy(140, 280, "UAU! Parab�ns");
            outtextxy(140, 200, "PONTOS: 9 de 12");
        }

        if (pontos == 10)
        {
            readimagefile("p10.jpg",0,0,920,600);
            outtextxy(140, 280, "Incr�vel!");
            outtextxy(140, 200, "PONTOS: 10 de 12");
        }

        if (pontos == 11)
        {
            readimagefile("p11.jpg",0,0,920,600);
            outtextxy(140, 280, "UAU, voc� foi muito bem!");
            outtextxy(140, 200, "PONTOS: 11 de 12");
        }

        if (pontos == 12)
        {
            readimagefile("p12.jpg",0,0,920,600);
            outtextxy(140, 280, "PARAB�NS, voc� foi INCR�VEL!!! Pontua��o m�xima!");
            outtextxy(140, 200, "PONTOS: 12 de 12");
        }
    }
}

//Fun��o que desenha as questoes e as alternativas na tela do quiz
void qquest(int x)
{
    if (x == 1)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "1- O horm�nio ADH atua sobre os t�bulos renais promovendo absor��o de �gua do filtrado glomerular. A defici�ncia na");
        outtextxy(90, 110, "secre��o desse horm�nio faz com que a pessoa produza:");
        outtextxy(140, 200, "a) muita urina, com alta concentra��o de excre��es.");
        outtextxy(140, 240, "b) muita urina, com baixa concentra��o de excre��es.");
        outtextxy(140, 280, "c) pouca urina, com alta concentra��o de excre��es.");
        outtextxy(140, 320, "d) pouca urina, com baixa concentra��o de excre��es.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 2)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "2- Entre as fun��es relatadas a seguir, qual n�o pode ser completamente associada ao c�rebro?");
        outtextxy(140, 200, "a) Equil�brio");
        outtextxy(140, 240, "b) Mem�ria");
        outtextxy(140, 280, "c) Linguagem");
        outtextxy(140, 320, "d) Consci�ncia");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 3)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "3- O cora��o realiza contra��es r�tmicas que garantem que o sangue seja impulsionado pelo corpo. Quando ocorre a");
        outtextxy(90, 110, "contra��o da c�mera card�aca, denominamos o movimento de");
        outtextxy(140, 200, "a) s�stole.");
        outtextxy(140, 240, "b) press�o arterial.");
        outtextxy(140, 280, "c) perist�ltico.");
        outtextxy(140, 320, "d) di�stole.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 4)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "4- Uma pessoa com defici�ncia na produ��o de �cido clor�drico pelas gl�ndulas da parede do est�mago provavelmente");
        outtextxy(90, 110, "tem dificuldade de digerir:");
        outtextxy(140, 200, "a) carne");
        outtextxy(140, 240, "b) arroz");
        outtextxy(140, 280, "c) batata");
        outtextxy(140, 320, "d) p�o");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 5)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "5- O f�gado desempenha importantes papeis na manuten��o da sa�de humana. Analise as alternativas a seguir e");
        outtextxy(90, 110, "marque aquela que n�o indica uma fun��o que pode ser atribu�da ao f�gado.");
        outtextxy(140, 200, "a) Secretar bile");
        outtextxy(140, 240, "b) Armazenamento de glicose");
        outtextxy(140, 280, "c) Produ��o de prote�nas");
        outtextxy(140, 320, "d) Produ��o dos horm�nios insulina e glucagon.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 6)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "6- No intestino delgado, observa-se a presen�a de gl�ndulas que produzem uma secre��o rica em bicarbonato que");
        outtextxy(90, 110, "diminui a acidez do quimo e, consequentemente, ajuda na a��o das enzimas presentes no suco pancre�tico.");
        outtextxy(90, 130, "Essas gl�ndulas s�o chamadas de:");
        outtextxy(140, 200, "a) C�lulas caliciformes");
        outtextxy(140, 240, "b) Gl�ndulas de Brunner");
        outtextxy(140, 280, "c) Gl�ndulas de Peyer");
        outtextxy(140, 320, "d) Gl�ndulas de Lieberk�hn");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 7)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "7- Nas papilas gustativas est�o localizados os bot�es gustativos, que s�o formados por c�lulas sensoriais.");
        outtextxy(90, 110, "Essas c�lulas especializadas em sentir o gosto dos alimentos podem ser classificadas como");
        outtextxy(140, 200, "a) mecanorreceptores");
        outtextxy(140, 240, "b) quimiorreceptores");
        outtextxy(140, 280, "c) fonorreceptores");
        outtextxy(140, 320, "d) fotorreceptores");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 8)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "8- A forma arredondada do olho � garantida gra�as a um material em consist�ncia de gel localizado logo ap�s a");
        outtextxy(90, 110, "lente. Esse material � formado principalmente por �gua, fibras e �cido hialur�nico e recebe o nome de");
        outtextxy(140, 200, "a) Pupila");
        outtextxy(140, 240, "b) Cristalino");
        outtextxy(140, 280, "c) Humor aquoso");
        outtextxy(140, 320, "d) Humor v�treo");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 9)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "9- Ap�s a refei��o, o p�ncreas lan�a na corrente sangu�nea uma subst�ncia que garante a estabilidade da concentra��o");
        outtextxy(90, 110, "de glicose no sangue. Analise as alternativas e marque aquela que indica corretamente o nome dessa subst�ncia:");
        outtextxy(140, 200, "a) amilase");
        outtextxy(140, 240, "b) insulina");
        outtextxy(140, 280, "c) lipase");
        outtextxy(140, 320, "d) glucagon");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 10)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "10- Os pulm�es s�o �rg�os que se destacam por sua consist�ncia esponjosa. Essa caracter�stica deve-se � presen�a dos(as):");
        outtextxy(140, 200, "a) br�nquios");
        outtextxy(140, 240, "b) bronqu�olos");
        outtextxy(140, 280, "c) alv�olos");
        outtextxy(140, 320, "d) traqueias");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 11)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "11- Sabemos que a urina � formada nos rins, mais precisamente nos n�frons. O processo inicia-se com a filtra��o do");
        outtextxy(90, 110, "sangue na regi�o:");
        outtextxy(140, 200, "a) da c�psula renal");
        outtextxy(140, 240, "b) do t�bulo renal");
        outtextxy(140, 280, "c) do t�bulo contorcido proximal");
        outtextxy(140, 320, "d) da al�a n�frica");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }

    if (x == 12)
    {
        readimagefile("back.jpg",0,0,920,450);
        setbkcolor(16);
        setcolor(15);
        outtextxy(90, 90, "12- O que � a ventila��o pulmonar?");
        outtextxy(140, 200, "a) � a passagem do ar nas vias respirat�rias.");
        outtextxy(140, 240, "b) � a circula��o do ar no corpo humano.");
        outtextxy(140, 280, "c) � o acto de circula��o do ar.");
        outtextxy(140, 320, "d) � a presen�a do ar dentro do pulm�es.");

        checkbox(100, 200, 130, 230);
        checkbox(100, 240, 130, 270);
        checkbox(100, 280, 130, 310);
        checkbox(100, 320, 130, 350);
    }
}
