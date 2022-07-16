#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "pj.h"

int main(void){
  DIR *d;
  FILE *fp;
  struct pgm imgIn;
  struct dirent *dir;
  unsigned int hist[256];
  char r, nomeFinal[200];
  clock_t begin, end;
	double time_per_img, time_total=0;
  unsigned char *a, *b;
  int l, c, lmv;
   
  d = opendir("./imagens");
  if (d)  {
    if (!(fp = fopen("Histograma.csv","w"))){
		  perror("Erro.");
		  exit(1);
	  }
    fclose(fp);
    while ((dir = readdir(d)) != NULL){
      if((strcmp(dir->d_name, ".")==0 || strcmp(dir->d_name, "..")==0)) continue;
      printf("%s\n", dir->d_name);
      sprintf(nomeFinal, "imagens/%s", dir->d_name);
      readPGMImage(&imgIn, nomeFinal);
      l=imgIn.r;
      c=imgIn.c;
      lmv=imgIn.mv;
      a=malloc(l*c*sizeof(unsigned char));
      b=malloc(l*c*sizeof(unsigned char));
      a=imgIn.pData;
      for(int j=0;j<lmv;j++)  hist[j]=0;      
      begin = clock();
      lbp8bits(a, b, l, c);
      end = clock();			
			time_per_img = (double)(end - begin) / CLOCKS_PER_SEC;				
			time_total += time_per_img;
      r = *(dir->d_name);
      for(int j=0;j<lmv;j++)  hist[j]=0;
      for(int j=0;j<l*c;j++)  hist[*(b+j)]++;
      writeHistograma(hist, &r, lmv);
      free(a);
      free(b);
    }
    closedir(d);
    printf("Tempo médio: %lf\n",time_total/QTDIMG);
		printf("Tempo Total: %lf\n",time_total);
  }
  return(0);
}