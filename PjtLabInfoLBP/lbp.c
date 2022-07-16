#include "pj.h"

void lbp8bits(unsigned char *x, unsigned char *y, int r, int c) {
	int contc, contl,  n;
  printf("\n");
	for(int i=0;i<r*c;i++){
		n=0;
    contc=(i%c)+1;
    contl=(i/c)+1;
    if(contc!=1 && contc!=c && contl!=1 && contl!=r){
      if(*(x+(i-1))  >= *(x+i))  n+=128;//1
      if(*(x+i+(c-1))>= *(x+i))  n+=64; //2
      if(*(x+i+c)    >= *(x+i))  n+=32;//3
      if(*(x+i+(c+1))>= *(x+i))  n+=16;//4
      if(*(x+i+1)    >= *(x+i))  n+=8;//5
      if(*(x+i-(c-1))>= *(x+i))  n+=4;//6
      if(*(x+i-c)    >= *(x+i))  n+=2;//7
      if(*(x+i-(c+1))>= *(x+i))  n+=1;//8
    }
    else if(contl==1 && contc!=1 && contc!=c){
      if(*(x+(i-1))  >= *(x+i))  n+=128;//1
      if(*(x+i+(c-1))>= *(x+i))  n+=64; //2
      if(*(x+i+c)    >= *(x+i))  n+=32;//3
      if(*(x+i+(c+1))>= *(x+i))  n+=16;//4
      if(*(x+i+1)    >= *(x+i))  n+=8;//5
    }
    else if(contl==1 && contc==1){
      if(*(x+i+c)    >= *(x+i))  n+=32;//3
      if(*(x+i+(c+1))>= *(x+i))  n+=16;//4
      if(*(x+i+1)    >= *(x+i))  n+=8;//5
    }
    else if(contl==1 && contc==c){
      if(*(x+(i-1))  >= *(x+i))  n+=128;//1
      if(*(x+i+(c-1))>= *(x+i))  n+=64; //2
      if(*(x+i+c)    >= *(x+i))  n+=32;//3
     
    }
    else if(contc==1 && contl!=1 && contl!=r){
      if(*(x+i+c)    >= *(x+i))  n+=32;//3
      if(*(x+i+(c+1))>= *(x+i))  n+=16;//4
      if(*(x+i+1)    >= *(x+i))  n+=8;//5
      if(*(x+i-(c-1))>= *(x+i))  n+=4;//6
      if(*(x+i-c)    >= *(x+i))  n+=2;//7
    }
    else if(contl==r && contc==1){
      if(*(x+i+1)    >= *(x+i))  n+=8;//5
      if(*(x+i-(c-1))>= *(x+i))  n+=4;//6
      if(*(x+i-c)    >= *(x+i))  n+=2;//7
    }
    else if(contl==r && contc!=1 && contc!=c){
      if(*(x+(i-1))  >= *(x+i))  n+=128;//1
      if(*(x+i+1)    >= *(x+i))  n+=8;//5
      if(*(x+i-(c-1))>= *(x+i))  n+=4;//6
      if(*(x+i-c)    >= *(x+i))  n+=2;//7
      if(*(x+i-(c+1))>= *(x+i))  n+=1;//8
    }
    else if(contc==c && contl!=1 && contl!=r){
      if(*(x+(i-1))  >= *(x+i))  n+=128;//1
      if(*(x+i+(c-1))>= *(x+i))  n+=64; //2
      if(*(x+i+c)    >= *(x+i))  n+=32;//3
      if(*(x+i-c)    >= *(x+i))  n+=2;//7
      if(*(x+i-(c+1))>= *(x+i))  n+=1;//8
    
    }
    else {
      if(*(x+(i-1))  >= *(x+i))  n+=128;//1
      if(*(x+i-c)    >= *(x+i))  n+=2;//7
      if(*(x+i-(c+1))>= *(x+i))  n+=1;//8
    }
    *(y+i)=n;
	}
}