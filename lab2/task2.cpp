#include <iostream>

using namespace std;

class Student{
  private:
    char name[20];
    int roll;
    int marks;
  public:
    Student(){
    };
    Student(char n[],int r,int m){
      roll=r;
      marks=m;
      for ( int i = 0; n[i]!='\0'; ++i) {
        name[i]=n[i];
      };
    };
    void getData(){
      cin>>name>>roll>>marks;
    };
    void showData(){
      cout<<"Name:"<<name<<"\t"<<"Roll:"<<roll<<"\t"<<"Marks:"<<marks<<endl;
    };
};

int main(){
  cout<<"Enter the number of students you want to enter"<<endl;
  int n;
  cin>>n;
  Student bei [n];
  for ( int i = 0 ; i<n;++i) {
    cout<<"Enter the details of student:"<<i+1<<endl;
    bei[i].getData();
  }
  for ( int i = 0 ; i<n;++i) {
    cout<<"The details of student:"<<i+1<<endl;
    bei[i].showData();
  }
  return 0;
};
