//Fun��o do Algoritmo: Criar uma Matriz de 3 linhas e 3 colunas, onde cada elemento ser� multiplicado por 5 e o novo resultado ser� exibido na tela.
//Autor: Luiz Felipe Crispin

  #include<stdio.h>
  #include<stdlib.h>
	
	int main(){
	 int Matriz[3][3],i,j;
	    //Exibe as informa��es para o usu�rio, e permite que ele realize a entrada de dados para escolher o elemento correspondente a cada linha e coluna.
	    for(i = 0; i < 3; i++){
	    for(j = 0; j < 3; j++){
	        printf("\nDigite a quantidade de elementos para a linha %d coluna %d: ",i+1,j+1);
	        scanf("%d",&Matriz[i][j]);
	        
	    }
	}
	        printf("\n");
	        printf("Resultado da Matriz 3x3:");
	        printf("\n\n");
	    //Realiza a leitura da condi��o e exibe na tela a matriz 3x3 totalmente formada.    
	    for(i = 0; i < 3; i++){
	    for(j = 0; j < 3; j++)
	        printf("%d ",Matriz[i][j]);
	        printf("\n");
	}
	
	        printf("\n");
	        printf("Elementos multiplicados por 5:");
	        printf("\n");
	    //Realiza a leitura da condi��o e instru��o l�gica, que determina que cada elemento da Matriz seja multiplicado por 5.   
	    for(i = 0; i < 3; i++)
	    for(j = 0; j < 3; j++)
	       Matriz[i][j] = Matriz[i][j]*5;
	        printf("\n");
	
	    //Exibe na tela a Matriz com os seus respectivos elementos agora sendo m�ltiplos de 5. 
	    for(i = 0; i < 3; i++){
	    for(j = 0; j < 3; j++)
	        printf("%d ",Matriz[i][j]);
	        printf("\n");
	}
	
	        printf("\n");
	  system("pause");
	return 0;
	
	}
