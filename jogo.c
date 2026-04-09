#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>



int main(){ 
   
   setlocale(LC_ALL,"Portuguese_Brazil");
   system("color 0B");
   
   char esc;
   int ok;
   
   do{
   ok = 1;	
   printf("Torneio Trijogo\n");
   printf("\njogos:\n\n1.Pergunta e Resposta\n2.Cobra na caixa!\n3.Gousmar War\n4.Sair\n\nDigite um número para prosseguir: ");
   scanf(" %c", &esc);
   
   system ("cls");
    
   if ((esc == '1') || (esc == '2') || (esc == '3') || (esc == '4')){
	   
   } else {
       
	   printf("Acalmai participante, só podes digitar os números do menu\n\n");
	   ok = 0;
   } 
	
   if(esc == '1'){
      
	  char rs1;         
      printf("\n\n\n\n\n\n\n                         O jogo de perguntas e respostas possui quatro alternativas para cada pergunta e apenas uma das afirmações é a correta.\n                       Caso você erre uma ou mais delas, poderá no final repetir as perguntas e cada questão corrigida valerá metade da original.\n\n\n\n                                                                             Prepare-se.\n\n\n\n\n                                                            ");
	  system("pause");
	  system("cls");       
      int vol, b;
      vol = 1;
	  do{	
	  do{
	  b = 1;	
	  printf("1)Qual a raíz quadrada de 2025?\n\na)45¹\nb)45\nc)45 . (senx² + cosx²)\nd)|45|\n\nRegistre a sua resposta: ");
	  scanf(" %c", &rs1);      
   	     
   if(rs1 == 'd'){
      printf("\nParabéns, você acertou a questão, prossiga para a próxima\n");
      system("pause");
	  system("cls");
  }else if((rs1 == 'a') || (rs1 == 'b') || (rs1 == 'c')) {
	  
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra d, prossiga para a próxima.\n");
	  system("pause");
	  system("cls");
  }else{
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0;
  }	  
  }while(!b);
      char rs2;
	  do{
	  b = 1;			  
   	  printf("2)Qual proteína é responsável pela quebra das pontes de hidrogênio do DNA durante sua replicação?\n\na)aminoácido\nb)topoisomerase\nc)helicase\nd)telomerase\n\nDigite sua resposta: ");
	  scanf(" %c", &rs2);
	  	    
   if (rs2 == 'c'){
      
      printf("\nParabéns, você acertou a questão, prossiga para a próxima.\n");
      system("pause");
	  system("cls");
	   
  }else if((rs2 == 'a') || (rs2 == 'b') || (rs2 == 'd')){
	  
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra c, prossiga para a próxima.\n");
	  system("pause");
	  system("cls");
  }else {
	 system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
  }
  }while(!b); 
   	  
      char rs3;
	  do{
	  b = 1;		 	  
   	  printf("3)Qual jogo ganhou o GOTY 2013?\n\na)The Last of Us\nb)GTA V\nc)Batman Arkham City\nd)Call of Duty Black Ops 2\n\nDigite sua resposta: ");
	  scanf(" %c", &rs3);
	  
   if (rs3 == 'b'){
	   
      printf("\nParabéns, você acertou a questão, prossiga para a próxima.\n");
      system("pause");
	  system("cls");
	   
   }else if ((rs3 == 'a') || (rs3 == 'c') || (rs3 == 'd')){
   	 
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra a, prossiga para a próxima\n");
	  system("pause");
	  system("cls");	   	   
   }else{
   	
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
   }
  }while(!b);	  
      char rs4;
      do{
	  b = 1;	  
   	  printf("4)Qual é o número na base 10 que equivale a FB, o qual é de base hexadecimal?\n\na)128\nb)345\nc)251\nd)250\n\nDigite sua resposta: ");
	  scanf(" %c", &rs4);
   if (rs4 == 'c'){
	   
      printf("\nParabéns, você acertou a questão, prossiga para a próxima\n");
      system("pause");
	  system("cls");
	   
   }else if((rs4 == 'a') || (rs4 == 'b') || (rs4 == 'd')){
	   
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra c, prossiga para a próxima\n");
	  system("pause");
	  system("cls");	   
   }else{
	   system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
    }
   }while(!b);
      char rs5;
	  do{	  
      b = 1;
   	  printf("5)Qual o único planta que rotaciona em sentido horário?\n\na)Vênus\nb)Marte\nc)Urano\nd)Júpiter\n\nDigite sua resposta: ");
	  scanf(" %c", &rs5);        
   
   if (rs5 == 'a'){
	   
      printf("\nParabéns, você acertou a questão\n");
      system("pause");
	  system("cls");
	   
   }else if((rs5 == 'b') || (rs5 == 'c') || (rs5 == 'd')){
	   
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra a\n");
	  system("pause");
	  system("cls");	   
   }else {
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
    }
    }while(!b);  
    int con;
	printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &con);
    
    if(con == 1){
    vol = 0;
	system("cls");	
    } else if(con == 2){
    vol = 1;
	ok = 0;
	system("cls");
	}
   }while(!vol);
    
   }
   
   
   int esco1, esco2, ji, n, jp, bot, cob, cx, re, cx1, cx2, cx3, cx4, cx5;
   char ex1[20], ex2[20];
   srand(time(NULL));
   
   if(esc == '2'){	
   printf("\n\n\n\n                                                                               Descrição\n\n\n\n\n\n\n             Cobra na caixa é um jogo em que dois exploradores, o explorador 1 e o explorador 2, se perdem numa tumba egípcia e se deparam com cinco caixas.\n         Em uma dessas há uma cobra e em outra há um botão, caso o explorador 1 ou vice-versa ache o botão primeiro, ele ganha, caso seja a cobra, ele perde e, \n                                  se nenhum dos dois acharem, eles continuarão à abrir as caixas até um achar o botão ou a cobra.\n\n\n\n                                                                               Prepare-se \n\n\n\n\n                                                               ");
   system("pause");
   system("cls");
   do{
   	re = 1;		
   do{
   cx1 = cx2 = cx3 = cx4 = cx5 = 0;	 	
   n = 1;	
   printf("Lista de Nomes para utilizar:\n\n\n1) Link\n2) Joel\n3) Mason\n4) Zelda\n5) Mário\n6) Laracroft\n7) Leia");   
   printf("\n\nEscolha o nome do primeiro explorador: ");    
   scanf("%d", &esco1);
   printf("\nEscolha o nome do segundo explorador: ");   
   scanf("%d", &esco2);
   
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
		do{	
        es = 1;
		if(ji == 1){printf("\nEscolha uma caixa entre 1 e 5 %s: ", ex1);}
   
      	 else{printf("\nEscolha uma caixa entre 1 e 5 %s: ", ex2);}
	 	
	    scanf("%d", &cx);
	
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
    if(cx == cob){
    if(ji == 1){
		printf("\n%s Perdeu! encontrou a cobra\n", ex1);
		printf("\nO vencedor é %s\n\n", ex2);while(!re);
		break;
	}else {
		printf("\n%s Perdeu! encontrou a cobra\n", ex2);
		printf("\nO vencedor é %s\n\n", ex1);
		break;
	}
    } else if(cx == bot){
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
	int nex;
	system("cls");	  
    nex = 0;
    printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &nex);
   if(nex == 1){
	re = 0;
	system("cls");	
    } else if(nex == 2){
	ok = 0;
	system("cls");
	} 
   }while(!re);
   }
   }while(!ok);
   
return 0;
}#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>



int main(){ 
   
   setlocale(LC_ALL,"Portuguese_Brazil");
   system("color 0B");
   
   char esc;
   int ok;
   
   do{
   ok = 1;	
   printf("Torneio Trijogo\n");
   printf("\njogos:\n\n1.Pergunta e Resposta\n2.Cobra na caixa!\n3.Gousmar War\n4.Sair\n\nDigite um número para prosseguir: ");
   scanf(" %c", &esc);
   
   system ("cls");
    
   if ((esc == '1') || (esc == '2') || (esc == '3') || (esc == '4')){
	   
   } else {
       
	   printf("Acalmai participante, só podes digitar os números do menu\n\n");
	   ok = 0;
   } 
	
   if(esc == '1'){
      
	  char rs1;         
      printf("\n\n\n\n\n\n\n                         O jogo de perguntas e respostas possui quatro alternativas para cada pergunta e apenas uma das afirmações é a correta.\n                       Caso você erre uma ou mais delas, poderá no final repetir as perguntas e cada questão corrigida valerá metade da original.\n\n\n\n                                                                             Prepare-se.\n\n\n\n\n                                                            ");
	  system("pause");
	  system("cls");       
      int vol, b;
      vol = 1;
	  do{	
	  do{
	  b = 1;	
	  printf("1)Qual a raíz quadrada de 2025?\n\na)45¹\nb)45\nc)45 . (senx² + cosx²)\nd)|45|\n\nRegistre a sua resposta: ");
	  scanf(" %c", &rs1);      
   	     
   if(rs1 == 'd'){
      printf("\nParabéns, você acertou a questão, prossiga para a próxima\n");
      system("pause");
	  system("cls");
  }else if((rs1 == 'a') || (rs1 == 'b') || (rs1 == 'c')) {
	  
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra d, prossiga para a próxima.\n");
	  system("pause");
	  system("cls");
  }else{
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0;
  }	  
  }while(!b);
      char rs2;
	  do{
	  b = 1;			  
   	  printf("2)Qual proteína é responsável pela quebra das pontes de hidrogênio do DNA durante sua replicação?\n\na)aminoácido\nb)topoisomerase\nc)helicase\nd)telomerase\n\nDigite sua resposta: ");
	  scanf(" %c", &rs2);
	  	    
   if (rs2 == 'c'){
      
      printf("\nParabéns, você acertou a questão, prossiga para a próxima.\n");
      system("pause");
	  system("cls");
	   
  }else if((rs2 == 'a') || (rs2 == 'b') || (rs2 == 'd')){
	  
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra c, prossiga para a próxima.\n");
	  system("pause");
	  system("cls");
  }else {
	 system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
  }
  }while(!b); 
   	  
      char rs3;
	  do{
	  b = 1;		 	  
   	  printf("3)Qual jogo ganhou o GOTY 2013?\n\na)The Last of Us\nb)GTA V\nc)Batman Arkham City\nd)Call of Duty Black Ops 2\n\nDigite sua resposta: ");
	  scanf(" %c", &rs3);
	  
   if (rs3 == 'b'){
	   
      printf("\nParabéns, você acertou a questão, prossiga para a próxima.\n");
      system("pause");
	  system("cls");
	   
   }else if ((rs3 == 'a') || (rs3 == 'c') || (rs3 == 'd')){
   	 
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra a, prossiga para a próxima\n");
	  system("pause");
	  system("cls");	   	   
   }else{
   	
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
   }
  }while(!b);	  
      char rs4;
      do{
	  b = 1;	  
   	  printf("4)Qual é o número na base 10 que equivale a FB, o qual é de base hexadecimal?\n\na)128\nb)345\nc)251\nd)250\n\nDigite sua resposta: ");
	  scanf(" %c", &rs4);
   if (rs4 == 'c'){
	   
      printf("\nParabéns, você acertou a questão, prossiga para a próxima\n");
      system("pause");
	  system("cls");
	   
   }else if((rs4 == 'a') || (rs4 == 'b') || (rs4 == 'd')){
	   
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra c, prossiga para a próxima\n");
	  system("pause");
	  system("cls");	   
   }else{
	   system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
    }
   }while(!b);
      char rs5;
	  do{	  
      b = 1;
   	  printf("5)Qual o único planta que rotaciona em sentido horário?\n\na)Vênus\nb)Marte\nc)Urano\nd)Júpiter\n\nDigite sua resposta: ");
	  scanf(" %c", &rs5);        
   
   if (rs5 == 'a'){
	   
      printf("\nParabéns, você acertou a questão\n");
      system("pause");
	  system("cls");
	   
   }else if((rs5 == 'b') || (rs5 == 'c') || (rs5 == 'd')){
	   
	  printf("\nInfelizmente você acabou errando a questão, a resposta correta é a letra a\n");
	  system("pause");
	  system("cls");	   
   }else {
      system("cls");
	  printf("Coloque apenas as letras das alternativas.\n\n");
	  b = 0; 
    }
    }while(!b);  
    int con;
	printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &con);
    
    if(con == 1){
    vol = 0;
	system("cls");	
    } else if(con == 2){
    vol = 1;
	ok = 0;
	system("cls");
	}
   }while(!vol);
    
   }
   
   
   int esco1, esco2, ji, n, jp, bot, cob, cx, re, cx1, cx2, cx3, cx4, cx5;
   char ex1[20], ex2[20];
   srand(time(NULL));
   
   if(esc == '2'){	
   printf("\n\n\n\n                                                                               Descrição\n\n\n\n\n\n\n             Cobra na caixa é um jogo em que dois exploradores, o explorador 1 e o explorador 2, se perdem numa tumba egípcia e se deparam com cinco caixas.\n         Em uma dessas há uma cobra e em outra há um botão, caso o explorador 1 ou vice-versa ache o botão primeiro, ele ganha, caso seja a cobra, ele perde e, \n                                  se nenhum dos dois acharem, eles continuarão à abrir as caixas até um achar o botão ou a cobra.\n\n\n\n                                                                               Prepare-se \n\n\n\n\n                                                               ");
   system("pause");
   system("cls");
   do{
   	re = 1;		
   do{
   cx1 = cx2 = cx3 = cx4 = cx5 = 0;	 	
   n = 1;	
   printf("Lista de Nomes para utilizar:\n\n\n1) Link\n2) Joel\n3) Mason\n4) Zelda\n5) Mário\n6) Laracroft\n7) Leia");   
   printf("\n\nEscolha o nome do primeiro explorador: ");    
   scanf("%d", &esco1);
   printf("\nEscolha o nome do segundo explorador: ");   
   scanf("%d", &esco2);
   
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
		do{	
        es = 1;
		if(ji == 1){printf("\nEscolha uma caixa entre 1 e 5 %s: ", ex1);}
   
      	 else{printf("\nEscolha uma caixa entre 1 e 5 %s: ", ex2);}
	 	
	    scanf("%d", &cx);
	
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
    if(cx == cob){
    if(ji == 1){
		printf("\n%s Perdeu! encontrou a cobra\n", ex1);
		printf("\nO vencedor é %s\n\n", ex2);while(!re);
		break;
	}else {
		printf("\n%s Perdeu! encontrou a cobra\n", ex2);
		printf("\nO vencedor é %s\n\n", ex1);
		break;
	}
    } else if(cx == bot){
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
	int nex;
	system("cls");	  
    nex = 0;
    printf("\n      Qual opção você gostaria?\n\n\n\n      1.Repetir o Jogo      2.Voltar ao menu \n\n\n\n      ");  
    scanf("%d", &nex);
   if(nex == 1){
	re = 0;
	system("cls");	
    } else if(nex == 2){
	ok = 0;
	system("cls");
	} 
   }while(!re);
   }
   }while(!ok);
   
return 0;
}
