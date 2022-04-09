#include <iostream>
#include <math.h>
using namespace std;

void dec_bin(unsigned short int n)
{
	for (int i = 15; i>=0; --i)
	{
		cout << (n >> i & 1);

	}
	cout << endl;
}
int bin_dec(unsigned int n)
{
  int a=0,i=0;
  while (n!=0)
  {
    a+=(n%2)*pow(2,i);
    n=n/10;
    ++i;
  }
  return a;
}
int main()
{
  unsigned int a,b;
  double c;

  cin>>a>>b;
  
  cout<<bin_dec(a)<<" "<<bin_dec(b)<<" "<<bin_dec(a)+bin_dec(b)<<endl;
  c = 1.0*(bin_dec(a)+bin_dec(b))/2;
  cout<<c<<endl;
  //wypisanie c wbinarnych zamiana c na inta i funkcja dec_bin(c)
  
  cout<<(1.0*((1<<15)|1))/2;//średnia z 2^16 i 1
}