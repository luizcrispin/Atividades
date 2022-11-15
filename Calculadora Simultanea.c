	//Fun��o do Algoritmo: Elaborar um programa de uma calculadora que apresenta as quatro opera��es aritm�ticas de forma simult�nea. 
	//Autor: Luiz Felipe Crispin
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	   int main (){
	   	
	   	  //Esta op��o proporciona a inclus�o do idioma portugu�s (Brazil) exibido na tela do usu�rio.
	   	  setlocale(LC_ALL,"portuguese");
	   	 
	   	 //A linguagem C n�o garante que vari�veis sejam iniciallizadas com valor zero, ent�o dependendo do compilador ela pode iniciar com um valor aleat�rio. 	 
		 int calc = 0;
		 float A = 0, B = 0, soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;
		 
		  // Ao inserir a fun��o "do", a estrutura de repeti��o while deve ser inclu�da ap�s o fechamento das chaves.
		  do{
		  	
		  	printf("\n----------------------------------");
	   	    printf("\n------CALCULADORA SIMULT�NEA------");
	   	    printf("\n----------------------------------");
		  	
	   	    //Nessa parte do c�digo, o usu�rio insere os dois n�meros que ser�o usados na opera��o aritm�tica.
	   	    printf("\n\n Digite o primeiro valor:");
	   	    scanf("%f",&A);
	   	    printf("\n Digite o segundo valor:");
	   	    scanf("%f",&B);
	   	  
	   	    //Aqui seguem as instru��es l�gicas para que as opera��es aritm�ticas sejam realizadas.
	   	    soma = A + B;
	   	    subtracao = A - B; 
	   	    multiplicacao = A * B;
	   	    divisao = A / B;
	   	  
	   	    //Etapa que imprime os resultados das quatro opera��es aritm�ticas e exibe na tela do usu�rio os valores com duas casas decimais.
	   	    printf("\n O resultado da soma � = %0.2f + %0.2f = %0.2f",A,B,soma);
	   	    printf("\n O resultado da subtra��o � = %0.2f - %0.2f = %0.2f",A,B,subtracao);
	   	    printf("\n O resultado da multiplica��o � = %0.2f * %0.2f = %0.2f",A,B,multiplicacao);
	   	    printf("\n O resultado da divis�o � = %0.2f / %0.2f = %0.2f",A,B,divisao);
	   	  
	   	  
	   	    printf ("\n");
	   	   }
	   	   
	   	   //Inclus�o da estrutura de repeti��o while ap�s o fechamento das chaves. Sem ela ocorrer� problema na compila��o.
	      while(calc==0);	
	      
	 return 0;
	 }
