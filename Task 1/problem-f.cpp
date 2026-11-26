#include <iostream>
using namespace std;
int main() {
int n;
cin>>n;
if (n % 100 == 0 )
cout<<0<<0;
else if ( n % 100 < 10 )
cout<<0<<n%10;
else 
cout<< n % 100;
return 0;
}