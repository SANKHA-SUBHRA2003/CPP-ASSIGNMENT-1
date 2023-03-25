#include <iostream>
using namespace std;
int main()
{
  cout<<"Enter a number";
  int n;
  int m=-1;
  cin>>n;
  if(n%3==0 && n%5==0)
  {
    cout<<"Good Number";
  }

  else if (n%3==0 && n%5!=0)
  {      
    cout<<"Bad Number";    /* code */
  }

  else if (n%5==0 && n%3!=0)
  {
    cout<<"Poor Number";    /* code */
  }

  else
  {
    cout<< m;
  }

  return 0;
}
