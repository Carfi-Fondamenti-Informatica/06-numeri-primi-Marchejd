#include <iostream>
#include "lib.h"
using namespace std;
int primo(int n, int i);
int main(){
   int n = 0, i=1;
        cin>>n;
if (primo(n,i)==true)
{
    cout<<"è primo"<<endl;
}
if (primo(n,i)==false)
{
    cout<<"non è primo"<<endl;
}
  
  return 0;
}
