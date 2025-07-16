#include<bits/stdc++.h>
using namespace std;
float determint(float a1,float b1,float c1,
    float a2,float b2,float c2,
    float a3,float b3,float c3){
        return a1*(b2*c3 - b3*c2) -b1*(a2*c3 - a3*c2) +c1*(a2*b3-a3*b2);
    }
int main()
{
    float a1,b1,c1,
    a2,b2,c2,
    a3,b3,c3,
    d1,d2,d3;
    cin>>a1>>b1>>c1>>a2>>b2>>c2>>a3>>b3>>c3>>d1>>d2>>d3;
    float d = determint(a1,b1,c1,a2,b2,c2,a3,b3,c3);
    float dx = determint(d1,b1,c1,d2,b2,c2,d3,b3,c3);
    float dy = determint(a1,d1,c1,a2,d2,c2,a3,d3,c3);
    float dz = determint(a1,b1,d1,a2,b2,d2,a3,b3,d3);
    float x = dx/d;
    float y = dy/d;
    float z = dz/d;
    cout<<"D= "<<d<<endl;
    cout<<"Solutions: "<<"x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
    return 0;
}