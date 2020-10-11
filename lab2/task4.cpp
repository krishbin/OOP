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

    complex(complex &c2){
      imag = c2.imag;
      real = c2.real;
    };

    complex operator+(complex c2){
      complex temp;
      temp.real = real + c2.real;
      temp.imag = imag + c2.real;
      return temp;
    };

    void showData(){
      cout<<real<<"+"<<imag<<"i"<<endl;
    };

    void getData(){
      cin>>real>>imag;
    };

    ~complex(){
      cout<<"Destructor Called"<<endl;
    };
};

int main(){
  complex c1(2,3),c2(3,4),c3;
  c3 = c1 + c2;
  c1.showData();
  c2.showData();
  c3.showData();
  return 0;
};
