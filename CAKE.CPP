#include <iostream>
#include <cmath>
using namespace std;
int main(){
long long X1=0;
long long Y1=0;
long long X2,Y2;
cin>>X2>>Y2;
if(X2>=1&&X2<=100&&Y2<=100&&Y2>=1){

double min=sqrt((X1-X2)*(X1-X2)+(Y1-Y2)*(Y1-Y2));
int X=min;
if(min==X){cout<<"YES";}
else{cout<<"NO";}
}
return 0;    
}