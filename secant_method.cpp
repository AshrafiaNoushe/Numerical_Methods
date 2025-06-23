#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x-2*x-1;
}
int main()
{
double x0=1,x1=2,x2;
double Ea = 100.0;
double Es = 0.001;
int it =0,maxit = 20;
while(it<maxit && Ea>Es){
    x2 = x1 - ((f(x1)*(x1-x0))/(f(x1)-f(x0)));
    Ea = fabs((x2-x1)/x2)*100.0;
    cout<<"Root: "<<x2<<" it: "<<it<<" Ea: "<<Ea<<endl;
    it++;
    x0 = x1;
    x1 = x2;
}
return 0;
}