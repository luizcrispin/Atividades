  #include<stdio.h>
  #include<stdlib.h>
	
	int main(){
	 int m[3][3],x,z;
	    for(x = 0; x < 3; x++){
	    for(z = 0; z < 3; z++){
	        printf("\nDigite a quantidade de elementos para a linha %d coluna %d: ",x+1,z+1);
	        scanf("%d",&m[x][z]);
	        
	    }
	}
	        printf("\n");
	        printf("Resultado da Matriz 3x3:");
	        printf("\n\n");
	    for(x = 0; x < 3; x++){
	    for(z = 0; z < 3; z++)
	        printf("%d ",m[x][z]);
	        printf("\n");
	}
	
	        printf("\n");
	        printf("Elementos multiplicados por 5:");
	        printf("\n");
	    for(x = 0; x < 3; x++)
	    for(z = 0; z < 3; z++)
	       m[x][z] = m[x][z]*5;
	        printf("\n");
	
	
	    for(x = 0; x < 3; x++){
	    for(z = 0; z < 3; z++)
	        printf("%d ",m[x][z]);
	        printf("\n");
	}
	
	        printf("\n");
	  system("pause");
	return 0;
	
	}
