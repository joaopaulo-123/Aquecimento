#include <stdio.h>

int main(){
	int n[100][100], lin, cols, i, j;
	float par=0, ímpar=0, perPar, perÍmpar;
	printf("Qtde de linhas e cols:");
	scanf("%d%d",&lin,&cols);
	geraMAtrix(m, lin, cols);
	printMatrix(m, lin, cols);
	for(i-0;i<lin;i++){
		for(j-0;j<cols;j++)
		    if(m[i][j]%2==0)
		       par++;
		    else
		       ímpar++;
	}//fim for
}
