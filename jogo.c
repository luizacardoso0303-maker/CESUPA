#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

int main(){ 
   
   setlocale(LC_ALL,"Portuguese_Brazil");
   system("color 0B");
   
   int ok, esc;
   do{
   ok = 1;	
   printf("Torneio Trijogo\n");
   printf("\njogos:\n\n1.Pergunta e Resposta\n2.Cobra na caixa!\n3.Gousmar War\n4.Sair\n\nDigite um número para prosseguir: ");
   scanf("%d", &esc);
   while(getchar() != '\n');
   system ("cls");
    
   if ((esc == 1) || (esc == 2) || (esc == 3) || (esc == 4)){
	   
   } else {
       
	   printf("Acalmai participante, só podes digitar os números do menu\n\n");
	   ok = 0;
   } 
	
   if(esc == 1){
      int vol, b;
	  vol = 1;
	  do{
	  char rs1[20];
	  printf("\t\t\t\t\t\t\t\t\t\tDescrição");         
      printf("\n\n\n\n\n\n\n                         O jogo de perguntas e respostas possui quatro alternativas para cada pergunta e apenas uma das afirmações é a correta.\n                                                     Caso você erre uma ou mais delas, poderá no final repetir as perguntas.\n\n\n\n                                                                               Prepare-se.\n\n\n\n\n                                                              ");
	  system("pause");
	  system("cls");       	
	  do{
	  b = 1;	
	  printf("1)Qual a raíz quadrada de 2025?\n\na)45¹\nb)45\nc)45 . (senx² + cosx²)\nd)|45|\n\nRegistre a sua resposta: ");
	  scanf("%s", rs1);      
      while(getchar() != '\n');
      if (strlen(rs1) > 1) {
        system("cls");
        printf("Inválido, digite apenas uma das letras\n\n");
        b = 0;
    } 
    else {
    	char lt = tolower(rs1[0]);
   if(lt == 'd'){
      printf("\nParabéns, você acertou a questão, prossiga para a próxima\n");
      system("pause");
	  system("cls");
  }else if((lt == 'a') || (lt == 'b') || (lt == 'c')) {
	  
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra d, prossiga para a próxima.\n");
	  system("pause");
	  system("cls");
  }else{
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0;
  }
  }	  
  }while(!b);
      char rs2[20];
	  do{
	  b = 1;			  
   	  printf("2)Qual proteína é responsável pela quebra das pontes de hidrogênio do DNA durante sua replicação?\n\na)aminoácido\nb)topoisomerase\nc)helicase\nd)telomerase\n\nDigite sua resposta: ");
	  scanf("%s", rs2);
      while(getchar() != '\n');	 
      if (strlen(rs2) > 1) {
        system("cls");
        printf("Inválido, digite apenas uma das letras\n\n");
        b = 0;
    } 
    else {
    	char lt = tolower(rs2[0]);
   if (lt == 'c'){
      
      printf("\nParabéns, você acertou a questão, prossiga para a próxima.\n");
      system("pause");
	  system("cls");
	   
  }else if((lt == 'a') || (lt == 'b') || (lt == 'd')){
	  
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra c, prossiga para a próxima.\n");
	  system("pause");
	  system("cls");
  }else {
	 system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
  }
	}
  }while(!b); 
   	  
      char rs3[20];
	  do{
	  b = 1;		 	  
   	  printf("3)Qual jogo ganhou o GOTY 2013?\n\na)The Last of Us\nb)GTA V\nc)Batman Arkham City\nd)Call of Duty Black Ops 2\n\nDigite sua resposta: ");
	  scanf("%s", rs3);
	  while(getchar() != '\n'); 
	  if (strlen(rs3) > 1) {
        system("cls");
        printf("Inválido, digite apenas uma das letras\n\n");
        b = 0;
    } 
    else {
    	char lt = tolower(rs3[0]);
   if (lt == 'b'){
	   
      printf("\nParabéns, você acertou a questão, prossiga para a próxima.\n");
      system("pause");
	  system("cls");
	   
   }else if ((lt == 'a') || (lt == 'c') || (lt == 'd')){
   	 
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra a, prossiga para a próxima\n");
	  system("pause");
	  system("cls");	   	   
   }else{
   	
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
   }
	}
  }while(!b);	  
      char rs4[20];
      do{
	  b = 1;	  
   	  printf("4)Qual é o número na base 10 que equivale a FB, o qual é de base hexadecimal?\n\na)128\nb)345\nc)251\nd)250\n\nDigite sua resposta: ");
	  scanf("%s", rs4);
	  while(getchar() != '\n');
	  if (strlen(rs4) > 1) {
        system("cls");
        printf("Inválido, digite apenas uma das letras\n\n");
        b = 0;
    } 
    else {
    	char lt = tolower(rs4[0]); 
   if (lt == 'c'){
	   
      printf("\nParabéns, você acertou a questão, prossiga para a próxima\n");
      system("pause");
	  system("cls");
	   
   }else if((lt == 'a') || (lt == 'b') || (lt == 'd')){
	   
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra c, prossiga para a próxima\n");
	  system("pause");
	  system("cls");	   
   }else{
	   system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
    }
	}
   }while(!b);
      char rs5[20];
	  do{	  
      b = 1;
   	  printf("5)Qual o único planta que rotaciona em sentido horário?\n\na)Vênus\nb)Marte\nc)Urano\nd)Júpiter\n\nDigite sua resposta: ");
	  scanf("%s", rs5);        
      while(getchar() != '\n');
      if (strlen(rs5) > 1) {
        system("cls");
        printf("Inválido, digite apenas uma das letras\n\n");
        b = 0;
    } 
    else {
    	char lt = tolower(rs5[0]);
   if (lt == 'a'){
	   
      printf("\nParabéns, você acertou a questão\n");
      system("pause");
	  system("cls");
	   
   }else if((lt == 'b') || (lt == 'c') || (lt == 'd')){
	   
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra a\n");
	  system("pause");
	  system("cls");	   
   }else {
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
    }
	}
    }while(!b);  
    int con, x;
    do{
    x=1;
	system("cls");
	printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &con);
    while(getchar() != '\n');
    if((con !=1) || (con !=2))
	printf("       Inválido, digite novamente\n\n\n\n");
    x=0;
    system("pause");
    if(con == 1){
    vol = 0;
	system("cls");	
    } else if(con == 2){
    vol = 1;
	ok = 0;
	system("cls");
	}
	}while(!x);
   }while(!vol);
    
   }
   int ji, n, jp, re, cx1, cx2, cx3, cx4, cx5, m, esco1, esco2, bot, cob, cx;
   char ex1[20], ex2[20];
   srand(time(NULL));
   
   if(esc == 2){	
    do{
   	re = 1;	
   printf("\n\n\n\n                                                                               Descrição\n\n\n\n\n\n\n             Cobra na caixa é um jogo em que dois exploradores, o explorador 1 e o explorador 2, se perdem numa tumba egípcia e se deparam com cinco caixas.\n         Em uma dessas há uma cobra e em outra há um botão, caso o explorador 1 ou vice-versa ache o botão primeiro, ele ganha, caso seja a cobra, ele perde e, \n                                  se nenhum dos dois acharem, eles continuarão à abrir as caixas até um achar o botão ou a cobra.\n\n\n\n                                                                               Prepare-se \n\n\n\n\n                                                               ");
   system("pause");
   system("cls");	
   do{
   cx1 = cx2 = cx3 = cx4 = cx5 = 0;	 	
   n = 1;	
   printf("Lista de Nomes para utilizar:\n\n\n1) Link\n2) Joel\n3) Mason\n4) Zelda\n5) Mário\n6) Laracroft\n7) Leia");   
   printf("\n\nEscolha o nome do primeiro explorador: ");    
   scanf("%d", &esco1);
   while(getchar() != '\n');
   printf("\nEscolha o nome do segundo explorador: ");   
   scanf("%d", &esco2);
   while(getchar() != '\n');
   switch(esco1){
    case 1: strcpy(ex1, "Link");
	   break;
    case 2: strcpy(ex1, "Joel");
   	   break;
    case 3: strcpy(ex1, "Mason");
        break;
    case 4: strcpy(ex1, "Zelda");
		break;
    case 5: strcpy(ex1, "Mário");
		break;
	case 6: strcpy(ex1, "Laracroft");
		break;
	case 7: strcpy(ex1, "Leia");
		break;
    default: 
	system("cls");
	printf("Opção de escolha 1 inválida\n\n");
		n = 0;
		break;        
   }
   switch(esco2){
    case 1: strcpy(ex2, "Link");
	   break;
    case 2: strcpy(ex2, "Joel");
   	   break;
    case 3: strcpy(ex2, "Mason");
        break;
    case 4: strcpy(ex2, "Zelda");
		break;
    case 5: strcpy(ex2, "Mário");
		break;
	case 6: strcpy(ex2, "Laracroft");
		break;
	case 7: strcpy(ex2, "Leia");
		break;
    default: 
	printf("Opção de escolha 2 inválida\n\n");
		n = 0;
		break;} 
    if(esco2 == esco1){
       system("cls");
       printf("Inválido o nome do jogador dois, pois esse nome já foi escolhido pelo jogador 1\n\n");
	   n = 0;
	}
   }while (!n);
   
   	
   printf("\nO jogador 1 será: %s", ex1);
   printf("\nO jogador 2 será: %s\n\n", ex2);
   system("pause");
   
   jp = rand() %2 + 1;
   ji = jp;
   system("cls");
   
   if(ji == 1){printf("%s inicia!\n", ex1);}
   else{printf("%s inicia!\n", ex2);}
   
   bot = rand() %5 + 1;	
   cob = rand() %5 + 1;	   
	  
   while (bot == cob) {cob = rand() %5 + 1;}       
	
	while(1){
		int es, p;
		do{
		p=1;	
		do{	
        es = 1;
		if(ji == 1){printf("\nEscolha uma caixa entre 1 e 5 %s: ", ex1);}
   
      	 else{printf("\nEscolha uma caixa entre 1 e 5 %s: ", ex2);}
	 	
	    scanf("%d", &cx);
	    while(getchar() != '\n');
         m = cx - 0;
	if(((cx == 1) && (cx1 == 1)) || ((cx == 2) && (cx2 == 1)) || ((cx == 3) && (cx3 == 1))  || ((cx == 4) && (cx4 == 1))  || ((cx == 5) && (cx5 == 1))){
		printf("\ncaixa aberta, escolha novamente\n");
		p = 0;
		continue;  
	} 
	}while(!p);
	
	switch(cx){
	case 1: cx1 = 1; 
	break;
	case 2: cx2 = 1; 
	break;
	case 3: cx3 = 1; 
	break;
	case 4: cx4 = 1; 
	break;
	case 5: cx5 = 1;
	break;
	default: printf("\nEscolha somente os números de 1 a 5\n");
	es = 0;
	break;}
   }while(!es);
    if(m == cob){
    if(ji == 1){
		printf("\n%s Perdeu! encontrou a cobra\n", ex1);
		printf("\nO vencedor é %s\n\n", ex2);
		break;
	}else {
		printf("\n%s Perdeu! encontrou a cobra\n", ex2);
		printf("\nO vencedor é %s\n\n", ex1);
		break;
	}
    } else if(m == bot){
    	if(ji == 1){
		printf("\nParabéns %s, você encontrou o botão!\n\nO vencedor é %s\n", ex1, ex1);	
		break;	
	} else {
		printf("\nParabéns %s, você encontrou o botão!\n\nO vencedor é %s\n", ex2, ex2);
	    break;
	}
	
	} else{
		printf("\nCaixa vazia, sorte ou azar?\n");
	}
	ji = 3 - ji;
	
	}
	system("pause");
	system("cls");
	int nex, x;
    do{	
 	x = 1;
    printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &nex);
    while(getchar() != '\n');
    if((nex!=1) || (nex !=2))
	printf("       \nInválido, digite novamente\n\n\n\n");
    x=0;
    system("pause");
   if(nex == 1){
	re = 0;
	system("cls");	
    } else if(nex == 2){
	ok = 0;
	system("cls");
	} 
	}while(!x); 
   }while(!re);
   }

   if(esc == 3){
   	int esc1, esc2, c, je, jt, ac, ges, rst, gi, gos, f, tr, rb;
   char no1[20], no2[20];
   srand(time(NULL));
   	do{
   	rb=1;	
   	int g[4] = {1,1,1,1};
   	 printf("\n\n\n\n                                                                                 Descrição\n\n\n\n\n\n\n ");
    printf("                                             O Gousmas War é um jogo de estratégia em que você controla criaturas chamadas gousmas\n                   Cada gousma possui uma condição interna chamada fúria e os jogadores começam cada um com duas gousmas com 1 de fúria");
	printf(" e um jogador vence                           quando cada uma das gousmas do adversário atingem mais de 5 fúrias. Durante o jogo o jogador possui duas opções: escolher uma de suas gousmas para           atacar uma outra do adversário, transferindo o valor de fúria da gousma atacante para o alvo, ou escolher dividir pontos de fúria de uma de suas gousmas para a outra,com possibilidade de reviver uma gousma derrotada desde que a doadora permaneça com pelo menos 1 de fúria e a transferência deve conter pelo menos 1 fúria e se a gousma                                                      receptora ficar com mais de 5 de fúria, então ela será destruída.\n\n                                                        Não pode e não deve atacar uma gousma derrotada, seu Monstro! ");
	printf("\n                      Só ataque gousmas ativas ou reativadas e lembre-se que o jogo é por turnos e o jogador só pode executar uma das opções por turno. \n\n\n\n                                                                                 Prepare-se.\n\n\n\n\n                                                                  "); 
	system("pause");
	system("cls");		  
   do{
   c = 1;	
   printf("Lista de Nomes:\n\n1)Vader\n2)Lynch\n3)Snake\n4)Bellatrix");
   printf("\n\nJogador 1, escolha o personagem: ");
   scanf("%d", &esc1);
   while(getchar() != '\n');
   printf("\n\nJogador 2, escolha o personagem: ");
   scanf("%d", &esc2);
   while(getchar() != '\n');
   
   switch(esc1){
   case 1: strcpy(no1, "Vader");
   break;
   case 2: strcpy(no1, "Lynch");
   break;
   case 3: strcpy(no1, "Snake");
   break;
   case 4: strcpy(no1, "Bellatrix");	   
   break;
   default:
   system("cls");
   printf("opção inválida, escolha somente as opções disponíveis\n\n");
   c = 0;
   break;
   }
   switch(esc2){
   case 1: strcpy(no2, "Vader");
   break;
   case 2: strcpy(no2, "Lynch");
   break;
   case 3: strcpy(no2, "Snake");
   break;
   case 4: strcpy(no2, "Bellatrix");	   
   break;
   default:
   system("cls");
   printf("opção inválida, escolha somente as opções disponíveis\n\n");
   c = 0;
   break;
   }
   if(esc1 == esc2){
	   system("cls");
	   printf("Opção de escolha inválida jogador 2, pois está já foi escolhida pelo jogador 1\n\n");
       c = 0;   
   }
  }while(!c);
   printf("\nJogador 1: %s\n", no1);
   printf("Jogador 2: %s\n\n", no2);
   printf("As atribuições jogador 1 e jogador 2 só são para as escolhas dos nomes, quem começará a batalha será decidido por sorteio\n\t\t\t\t\t\te\ncaso você transfira uma quantidade de fúria que ultrapasse a 5 na gousma receptora, ela será destruída\n\n");
   system("Pause");
   
   je = rand() %2 +1;
   if(je == 1){
	   char ajd[20];
	   strcpy(ajd, no1);
       strcpy(no1, no2);
       strcpy(no2, ajd);
   }
   jt = 1;
   system("cls");
   
   while((g[0] <=5 || g[1] <=5) && (g[2] <=5 || g[3] <=5)){
   do{
   f=1;	 		
   system("cls");	
   if(jt == 1)printf("Turno de %s", no1);
   else if(jt == 2)printf("Turno de %s", no2);		
   printf("\n\n\n\t\t\t\tGousma 1: ");
   if(g[0] > 5) printf("Morta");
   else printf("%d", g[0]);

   printf("\t\t\t\t\t\tGousma 3: ");
   if(g[2] > 5) printf("Morta");
   else printf("%d", g[2]);

   printf("\n\n\n\t\t\t\tGousma 2: ");
   if(g[1] > 5) printf("Morta");
   else printf("%d", g[1]);

   printf("\t\t\t\t\t\tGousma 4: ");
   if(g[3] > 5) printf("Morta");
   else printf("%d", g[3]);
    printf("\nEscolha sua ação(se ela puder ser feita): \n1. atacar\n2. Dividir fúria\n\nação: ");
   scanf("%d", &ac);
   while(getchar() != '\n');
   if(ac == 1){	
   if(jt==1){			
   printf("escolha a gousma atacante (1 ou 2): ");
   scanf("%d", &ges);
   while(getchar() != '\n');
   if((ges == 1 && g[0] > 5) || (ges == 2 && g[1] > 5)){
	   printf("Está gousma foi destroçada, escolha novamente\n");
	   f=0;
	   system("pause");
	   continue;
   }else{
   if(ges == 1){
	   gi = g[0];
   }else if(ges == 2){
	   gi = g[1];
   }else{
         printf("opção inválida, escolha novamente\n");
	 f=0;
	 system ("pause");
	 continue;
   }
   }	
   printf("escolha a gousma atacada (3 ou 4): ");
   scanf("%d", &rst);
   while(getchar() != '\n');
   if((rst == 3 && g[2] > 5) || (rst == 4 && g[3] > 5)){
	   printf("Está gousma já foi derrotada, escolha novamente\n");
	   f=0;
	   system("pause");
	   continue;
   }else
   if(rst == 3){g[2] = g[2] + gi;}	
   else if(rst == 4){g[3] = g[3] + gi;}
   else{ 
   printf("Opção inválida, escolha novamente\n");	
   f=0;
   system("pause");
   }
   }else if(jt==2){	
	printf("escolha a gousma atacante (3 ou 4): ");
   scanf("%d", &ges);
   while(getchar() != '\n');
   if((ges == 3 && g[2] > 5) || (ges == 4 && g[3] > 5)){
	   printf("Está gousma já foi exterminada, escolha novamente\n");
	   f=0;
	   system("pause");
	   continue;
   }else
   if(ges == 3){
	   gi = g[2];
   } else if(ges == 4){
	   gi = g[3];
   }else {
   printf("Opção de escolha inválida, escolha novamente\n"); 
   f=0;
   system("pause");
   continue;
   }
   printf("escolha a gousma atacada (1 ou 2): ");
   scanf("%d", &rst);
   while(getchar() != '\n');
    if((rst == 1 && g[0] > 5) || (rst == 2 && g[1] > 5)){
	   printf("Está gousma já foi destroçada, escolha novamente\n");
	   f=0;
	   system("pause");
       continue;
	}else{
   if(rst == 1) {
   g[0] = g[0] + gi;	
   }else if(rst == 2){
   g[1] = g[1] + gi;
   }else{ 
   printf("Opção de escolha inválida, escolha novamente\n");
   f=0;
   system("pause");
   }
	}	 
   } 
   if(f==1)jt = 3 - jt;
   else f=0;
   }else if (ac == 2){
   	if(jt==1){
   		if(((g[0] > 5) || (g[0] <=1)) && ((g[1] > 5) || (g[1] <=1))){
		   printf("Nenhuma de suas gousmas pode doar fúria, você só pode atacar\n\n");
		   f=0;
		   system("pause");
           continue;
    }else{  		
	printf("escolha a gousma doadora (1 ou 2): ");
	scanf("%d", &gos);
	while(getchar() != '\n');
	if(gos == 1){
	if((g[0] <= 1) || (g[0] > 5)){
		printf("\nA gousma doadora escolhida é inválida, pois ela deve manter ao menos 1 de fúria ou ela for destruída\n");
		f=0;
		system("pause");
        continue;
	}else{
		printf("Escolha o quanto de fúria você irá transferir: ");
		scanf("%d", &tr);
		while(getchar() != '\n');
		if((tr < 1) || (tr >= g[0])){
			printf("Transferência inválida, você deve doar no mnímo 1 de fúria ou um valor que não zera a gousma doadora!\n");
			f=0;
			system("pause");
            continue;
		}else{
		if(g[1] > 5){			 
		g[1] = 0;	
        g[0] = g[0] - tr;
	    g[1] = g[1] + tr;
		     printf("\nGousma 2 revivida\n");
		}else{
	    g[0] = g[0] - tr;
		g[1] = g[1] + tr;
		}
		}	
	}
	}else if(gos == 2){
	if((g[1] <= 1) || (g[1] > 5)){
		printf("\nA gousma doadora escolhida é inválida, pois ela deve manter ao menos 1 de fúria ou ela foi destruída\n");
		f=0;
		system("pause");
        continue;
	}else{
		printf("Escolha o quanto de fúria você irá transferir: ");
		scanf("%d", &tr);
		while(getchar() != '\n');
		if((tr < 1) || (tr >= g[1])){
			printf("Transferência inválida, você deve doar no mnímo 1 de fúria ou um valor que não zera a gousma doadora!\n");
			f=0;
            system("pause");
		}else{
		if(g[0] > 5){
        g[0] = 0;
        g[1] = g[1] - tr;
		g[0] = g[0] + tr;
		printf("Gousma 1 revivida");
		}else{
	    g[1] = g[1] - tr;
		g[0] = g[0] + tr;
	}
   }
   }
   }
   }
   }else if(jt==2){ 
   	if(((g[2] > 5) || (g[2] <=1)) && ((g[3] > 5) || (g[3] <=1))){
		   printf("Nenhuma de suas gousmas pode doar fúria, você só pode atacar\n\n");
		   f=0;
		   system("pause");
           continue;
    }else{  
    printf("escolha a gousma doadora (3 ou 4): ");
	scanf("%d", &gos);
	while(getchar() != '\n');
	if(gos == 3){
	if((g[2] <= 1) || (g[2] > 5)){
		printf("\nA gousma doadora escolhida é inválida, pois ela deve manter ao menos 1 de fúria ou ela foi destruída\n");
		f=0;
		system("pause");
        continue;
	}else{
		printf("Escolha o quanto de fúria você irá transferir: ");
		scanf("%d", &tr);
		while(getchar() != '\n');
		if((tr < 1) || (tr >= g[2])){
			printf("Transferência inválida, você deve doar no mnímo 1 de fúria ou um valor que não zera a gousma doadora!\n");
			f=0;
			system("pause");
            continue;
		}else{
		if(g[3] > 5){
		g[3] = 0;
        g[2] = g[2] - tr;
		g[3] = g[3] + tr;
		printf("Gousma 4 revivida");
		}else{
	    g[2] = g[2] - tr;
		g[3] = g[3] + tr;
		}
		}
	}
	}else if(gos == 4){
	if((g[3] <= 1) || (g[3] > 5)){
		printf("\nA gousma doadora escolhida é inválida, pois ela deve manter ao menos 1 de fúria ou ela foi destruída\n");
		f=0;
		system("pause");
        continue;
	}else{
		printf("Escolha o quanto de fúria você irá transferir: ");
		scanf("%d", &tr);
		while(getchar() != '\n');
		if((tr < 1) || (tr >= g[3])){
			printf("Transferência inválida, você deve doar no mnímo 1 de fúria ou um valor que não zera a gousma doadora!");
			f=0;
            system("pause");
		}else{
		if(g[2] > 5){
		g[2] = 0;
		g[3] = g[3] - tr;
		g[2] = g[2] + tr;
		printf("Gousma 3 revivida");
		}else{
	    g[3] = g[3] - tr;
		g[2] = g[2] + tr;
		}
		}
	}
   }
	}
   }
   if(f==1)jt = 3 - jt;
    else f=0;
   }else{
	   printf("Como assim comandante? Essa escolha não existe, escolha novamente\n");
	   f=0;
	   system("pause");
   }
   }while(!f);
}
    system("cls");
    printf("Fim de jogo!\n");
    	
   printf("\n\n\n\t\t\t\tGousma 1: ");
   if(g[0] > 5) printf("Morta");
   else printf("%d", g[0]);

   printf("\t\t\t\t\t\tGousma 3: ");
   if(g[2] > 5) printf("Morta");
   else printf("%d", g[2]);

   printf("\n\n\n\t\t\t\tGousma 2: ");
   if(g[1] > 5) printf("Morta");
   else printf("%d", g[1]);

   printf("\t\t\t\t\t\tGousma 4: ");
   if(g[3] > 5) printf("Morta");
   else printf("%d", g[3]);
   
    if (g[0] > 5 && g[1] > 5) printf("\n\n\n\t\t\t\t\t\t\t    %s Venceu!\n\n\n\n\n\n\n", no2);
    else printf("\n\n\n\t\t\t\t\t\t\t    %s Venceu!\n\n\n\n\n\n\n", no1);
    system("pause");
    int tm, x;
    do{
 	x=1;
    system("cls");
	printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &tm);
    while(getchar() != '\n');
    if((tm !=1) || (tm !=2))
	printf("       Inválido, digite novamente\n\n\n\n");
    x=0;
    system("pause");
    if(tm == 1){
    rb = 0;
	system("cls");	
    } else if(tm == 2){
    rb = 1;
	ok = 0;
	system("cls");
	}
   }while(!x);
   }while(!rb);
   }
   }while(!ok);
   if(esc == 4){  
   	ok = 1;
   }
   return 0;  
}
