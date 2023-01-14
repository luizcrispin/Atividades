  #include<stdio.h>
  #include<stdlib.h>
	
	int main(){
	 int Matriz[3][3],i,j;
	    
	    for(i = 0; i < 3; i++){
	    for(j = 0; j < 3; j++){
	        printf("\nDigite a quantidade de elementos para a linha %d coluna %d: ",i+1,j+1);
	        scanf("%d",&Matriz[i][j]);
	        
	    }
	}
	        printf("\n");
	        printf("Resultado da Matriz 3x3:");
	        printf("\n\n");
	        
	    for(i = 0; i < 3; i++){
	    for(j = 0; j < 3; j++)
	        printf("%d ",Matriz[i][j]);
	        printf("\n");
	}
	
	        printf("\n");
	        printf("Elementos multiplicados por 5:");
	        printf("\n");
	     
	    for(i = 0; i < 3; i++)
	    for(j = 0; j < 3; j++)
	       Matriz[i][j] = Matriz[i][j]*5;
	        printf("\n");
	
	
	    for(i = 0; i < 3; i++){
	    for(j = 0; j < 3; j++)
	        printf("%d ",Matriz[i][j]);
	        printf("\n");
	}
	
	        printf("\n");
	  system("pause");
	return 0;
	
	}
