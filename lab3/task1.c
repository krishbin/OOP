#include <stdio.h>

typedef struct complex{
  float real;
  float imag;
}complex;

complex add(complex c1, complex c2){
  complex temp;
  temp.real = c1.real + c2.real;
  temp.imag = c1.imag + c2.imag;
  return temp;
};

int main(){
  complex c1, c2, c3;
  scanf("%f%f",&c1.real,&c1.imag);
  printf("%.2f\t+%.2fi\n",c1.real,c1.imag);
  scanf("%f%f",&c2.real,&c2.imag);
  printf("%.2f\t+%.2fi\n",c2.real,c2.imag);
  c3 = add(c1,c2);
  printf("%.2f\t+%.2fi\n",c3.real,c3.imag);
  return 0;
};
