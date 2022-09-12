#include <stdio.h>

int main(){
	char dna[100];
	int res, n;
	printf("Sequencia do DNA:");
	fflush(stdin);// Limpa o buffer
	gets(dna);
	n = strlen(dna);
	res = starCodon(dna, n);
	if(res == -1)
	   printf("Não possui início de gene\n");
	else
	   printf("Gene se inicia em %d\n", res);
	return 0;
}
