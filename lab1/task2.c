#include <stdio.h>

struct student{
  char name[20];
  int roll;
  int marks;
  char address[20];
}s[48];

int main(){
  int n,i;
  printf("Enter to no of students you want to enter\n");
  scanf("%d",&n);
  for(i=0; i<n; ++i) {
  printf("enter the details of student %d in format name,roll,marks,address\n",i+1);
  scanf("%s%d%d%s",s[i].name,&s[i].roll,&s[i].marks,s[i].address);
  };
  for(i=0; i<n; ++i) {
  printf("The details of students are:\n");
  printf("Name:%s, Roll:%d, Marks:%d, Address:%s\n",s[i].name,s[i].roll,s[i].marks,s[i].address);
  };
};

