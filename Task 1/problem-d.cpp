#include <iostream>
using namespace std;
int main() {
int n,a,b,c;
cin>>n;
for (int i = 0 ; i<n ; i++){
cin>>a>>b>>c;
if(a==(c+b))
cout<<"YES"<<endl;
else if(c==(a+b))
cout<<"YES"<<endl;
else if(b==(c+a))
cout<<"YES"<<endl;
else
cout<<"NO"<<endl;
}
return 0;
}