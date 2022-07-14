#include "pj.h"

void lbp8bits(unsigned char *x, unsigned char *y, int r, int c) {
	int contc, contl,  n, u[]={128,64,32,16,8,4,2,1}, v[]={-1,c-1,c,c+1,1,-c+1,-c-1};
	for(int i=0;i<r*c;i++){
		n=0;
    contc=(i%c)+1;
    contl=(i/c)+1;
    if(contc!=1 && contc!=c && contl!=1 && contl!=r){
      for(int j=0;j<8;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    else if(contl==1 && contc!=1 && contc!=c){
      for(int j=0;j<5;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    else if(contl==1 && contc==1){
      for(int j=2;j<5;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    else if(contl==1 && contc==c){
      for(int j=0;j<2;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j]; 
    }
    else if(contc==1 && contl!=1 && contl!=r){
      for(int j=2;j<7;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    else if(contl==r && contc==1){
      for(int j=4;j<7;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    else if(contl==r && contc!=1 && contc!=c){
      if(*(x+i)<=*(x+i)+v[0]) n+=u[0];
      for(int j=4;j<8;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    else if(contc==c && contl!=1 && contl!=r){
      for(int j=0;j<3;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
      for(int j=6;j<8;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    else {
      if(*(x+i)<=*(x+i)+v[0]) n+=u[0];
      for(int j=6;j<8;j++)  if(*(x+i)<=*(x+i)+v[j]) n+=u[j];
    }
    *(y+i)=n;
	}
  }
}