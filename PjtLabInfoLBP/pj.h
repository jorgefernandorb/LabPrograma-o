#ifndef PJ_H_INCLUDED  //if not defined, verifica se ja foi criado para evitar redundancias
#define PJ_H_INCLUDED

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define QTDIMG 656

struct pgm{
	int tipo;
	int c;
	int r;
	int mv;
	unsigned char *pData;
};

void readPGMImage(struct pgm *, char *);
void viewPGMImage(struct pgm *);
void writePGMImage(struct pgm *, char *);
void lbp8bits(unsigned char *, unsigned char *, int , int );
void writeHistograma(unsigned int *, char *, int);

#endif