#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
double A,B,C;
cin>>A>>B>>C;
if(A>=1&&A<=1e12&&
    B>=1&&B<=1e12&&
    C>=1&&C<=1e12)
{
if(pow(A,B)==C||pow(B,A)==C||pow(C,B)==A||pow(B,C)==A||pow(C,A)==B||pow(A,C)==B){cout<<"YES";}
else{cout<<"NO";}


}
return 0;
}