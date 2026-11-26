#include <iostream>
using namespace std;
int main() {
int x;
int rate;
cin>>x;
for (int i =0; i<x; i++){
cin>>rate;
if(rate >= 1900)
cout<<"Division 1"<<endl;
else if ( rate >= 1600)
cout<<"Division 2"<<endl;
else if( rate >= 1400)
cout<<"Division 3"<<endl;
else
cout<<"Division 4"<<endl;
}
return 0;
}