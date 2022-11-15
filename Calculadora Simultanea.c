	//Função do Algoritmo: Elaborar um programa de uma calculadora que apresenta as quatro operações aritméticas de forma simultânea. 
	//Autor: Luiz Felipe Crispin
	
	#include <stdio.h>
	#include <stdlib.h>
	#include <locale.h>
	
	   int main (){
	   	
	   	  //Esta opção proporciona a inclusão do idioma português (Brazil) exibido na tela do usuário.
	   	  setlocale(LC_ALL,"portuguese");
	   	 
	   	 //A linguagem C não garante que variáveis sejam iniciallizadas com valor zero, então dependendo do compilador ela pode iniciar com um valor aleatório. 	 
		 int calc = 0;
		 float A = 0, B = 0, soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;
		 
		  // Ao inserir a função "do", a estrutura de repetição while deve ser incluída após o fechamento das chaves.
		  do{
		  	
		  	printf("\n----------------------------------");
	   	    printf("\n------CALCULADORA SIMULTÂNEA------");
	   	    printf("\n----------------------------------");
		  	
	   	    //Nessa parte do código, o usuário insere os dois números que serão usados na operação aritmética.
	   	    printf("\n\n Digite o primeiro valor:");
	   	    scanf("%f",&A);
	   	    printf("\n Digite o segundo valor:");
	   	    scanf("%f",&B);
	   	  
	   	    //Aqui seguem as instruções lógicas para que as operações aritméticas sejam realizadas.
	   	    soma = A + B;
	   	    subtracao = A - B; 
	   	    multiplicacao = A * B;
	   	    divisao = A / B;
	   	  
	   	    //Etapa que imprime os resultados das quatro operações aritméticas e exibe na tela do usuário os valores com duas casas decimais.
	   	    printf("\n O resultado da soma é = %0.2f + %0.2f = %0.2f",A,B,soma);
	   	    printf("\n O resultado da subtração é = %0.2f - %0.2f = %0.2f",A,B,subtracao);
	   	    printf("\n O resultado da multiplicação é = %0.2f * %0.2f = %0.2f",A,B,multiplicacao);
	   	    printf("\n O resultado da divisão é = %0.2f / %0.2f = %0.2f",A,B,divisao);
	   	  
	   	  
	   	    printf ("\n");
	   	   }
	   	   
	   	   //Inclusão da estrutura de repetição while após o fechamento das chaves. Sem ela ocorrerá problema na compilação.
	      while(calc==0);	
	      
	 return 0;
	 }
