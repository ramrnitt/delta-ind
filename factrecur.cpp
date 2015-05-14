#include<iostream.h>
#include<conio.h>

long int fact(int v)
{
  if(v==0)
    return 1;
  else
    return(v*fact(v-1));
}
void main()
{
  int var;
  cout<<"enter to calculate factorial:";
  cin>>var;
  fact(var);
  getch();
}
