#include <iostream>
using namespace std;
int main() {
int num ,a,b,c , count=0;
cin>> num;
for ( int i=0; i< num ; i++){
cin>>a>>b>>c;
if( (a ==1 && b == 1)||(a==1&&c==1)||(c==1&&b==1)) 
count++;
}
cout<<count;
return 0;
}