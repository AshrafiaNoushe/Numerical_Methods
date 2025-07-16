#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a1,a2,a3,b1,b2,b3,c1,c2,c3,d1,d2,d3;
    cin>>a1>>b1>>c1>>d1>>a2>>b2>>c2>>d2>>a3>>b3>>c3>>d3;
    float x=0,y=0,z=0;
    float x1,y1,z1;
    int maxit=100;
    int it =0;
    float Exp = 0.001;
    do{
        x1 = (d1-b1*y-c1*z)/a1;
        y1=(d2-a2*x1-c2*z)/b2;
        z1=(d3-a3*x1-b3*y1)/c3;
        cout<<"x1: "<<x1<<" y1: "<<y1<<" z1: "<<z1<<" at it: "<<it<<endl;
        if(fabs(x-x1)<Exp && fabs(y-y1)<Exp && fabs(z-z1)<Exp){
            break;
        }
        x=x1;
        y=y1;
        z = z1;
        it++;

    }while(it<maxit);
    cout<<"Final: "<<"at it: "<<it<<"x: "<<x1<<" y: "<<y<<" z: "<<z<<endl;
    return 0;
}