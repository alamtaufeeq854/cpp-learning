#include <iostream>
#include <cmath> // for using sqrt function
using namespace std;
int main(){
    int a,b,c;
    float r1,r2,d;
    cout<<"Enter 'a' here ";
    cin>>a;
        cout<<"Enter 'b' here ";
    cin>>b;
    cout<<"Enter 'c' here ";
    cin>>c;

    d = sqrt(b*b-4*a*c);
 r1 = (-b+d)/(2*a); // 1st root of equation
 r2 = (-b-d)/(2*a); // 2nd root of equation
        cout<<"Roots of equations are "<<r1<<" & "<<r2;
        return 0;
 
}