#include "pj.h"

void writeHistograma(unsigned int *h, char *rotulo, int lmv){
	FILE *fp;
	char ch;

	if (!(fp = fopen("Histograma.csv","a"))){
		perror("Erro.");
		exit(1);
	}
	for (int i = 0; i < lmv; i++)  fprintf(fp, "%u,", *(h + i));
  fprintf(fp, "%c\n", *rotulo);
	fclose(fp);
}