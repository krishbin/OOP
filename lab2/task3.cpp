#include <iostream>

using namespace std;

class complex{
  private:
    float imag;
    float real;
  public:
    complex(){
      imag=0;
      real=0;
    };

    complex(float r,float i){
      imag = i;
      real = r;
    };

    void showData(){
      cout<<real<<"+"<<imag<<"i"<<endl;
    };
    void getData(){
      cin>>real>>imag;
    };
    friend complex add(complex &c1, complex &c2);
};

complex add(complex &c1, complex &c2){
  complex temp;
  temp.real = c1.real + c2.real;
  temp.imag = c1.imag + c2.real;
  return temp;
};

int main(){
  complex c1(2,3),c2(3,4),c3;
  c3 = add(c1,c2);
  c1.showData();
  c2.showData();
  c3.showData();
  return 0;
};
