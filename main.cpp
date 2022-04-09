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

bool check_if_binary(string a)
{
  for(int i=0;i<a.length();i++)
  {
    if (a[i]!='0' and a[i]!='1')
    return false;
  }
  return true;
}

int main()
{
  unsigned int a,b;
  double c;
  cout<<"Input 2 binary numbers to calculate a avarge"
  cin>>a>>b;
  if (check_if_binary(to_string(a))&&check_if_binary(to_string(b)))
  {
    cout<<bin_dec(a)<<" "<<bin_dec(b)<<" "<<bin_dec(a)+bin_dec(b)<<endl;
    c = 1.0*(bin_dec(a)+bin_dec(b))/2;
    cout<<c<<endl;
  }
  else
    cout<<"Wrong input! Check if the numbers are binary";

  
  //wypisanie c wbinarnych zamiana c na inta i funkcja dec_bin(c)
  
  //cout<<(1.0*((1<<15)|1))/2;//średnia z 2^16 i 1
}