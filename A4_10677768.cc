#include <iostream>
#include<cstdlib>
using namespace std;
int gcd(int A, int B );
int main ()
{
	cout<<"Enter two positive integers"<<endl;
	int x, y;
	cin>>x>>y;
	gcd(x, y);
	cout<<"The GCD of "<<x<<" and "<<y<<" is "<<gcd(x,y)<<endl;
	return 0;
}
int gcd(int A, int B)
{
	if((A>=B && (A%B)==0))
	return B;
	else 
	gcd(B, A%B);
}