      	#include <stdio.h>
		#include <stdlib.h>
		#include <locale.h>
		
		   int main (){
		   	
		   	
		   	  setlocale(LC_ALL,"portuguese");
		   	 
		   	  
			 int calc = 0;
			 float A = 0, B = 0, soma = 0, subtracao = 0, multiplicacao = 0, divisao = 0;
			 
			  
			  do{
			  	
		   	    printf("\n------CALCULADORA SIMULT�NEA------");
		   	    printf("\n----------------------------------");
			  	
		   	    
		   	    printf("\n\n Digite o primeiro valor:");
		   	    scanf("%f",&A);
		   	    printf("\n Digite o segundo valor:");
		   	    scanf("%f",&B);
		   	  
		   	    
		   	    soma = A + B;
		   	    subtracao = A - B; 
		   	    multiplicacao = A * B;
		   	    divisao = A / B;
		   	  
		   	    
		   	    printf("\n O resultado da soma � = %0.2f + %0.2f = %0.2f",A,B,soma);
		   	    printf("\n O resultado da subtra��o � = %0.2f - %0.2f = %0.2f",A,B,subtracao);
		   	    printf("\n O resultado da multiplica��o � = %0.2f * %0.2f = %0.2f",A,B,multiplicacao);
		   	    printf("\n O resultado da divis�o � = %0.2f / %0.2f = %0.2f",A,B,divisao);
		   	  
		   	  
		   	    printf ("\n");
		   	   }
		   	   
		   	   
		      while(calc==0);	
		      
		 return 0;
