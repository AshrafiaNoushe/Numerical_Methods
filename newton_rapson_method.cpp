#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x*x-2*x;
}
double fd(double x){
    return 3*x*x-2;
}
int main()
{
double x0=2,x1;
double Ea = 100.0;
double Es = 0.001;
int it = 0,maxit = 20;
while(it<maxit && Ea>Es){
    x1 = x0 - (f(x0)/fd(x0));
    Ea = fabs((x1-x0)/x1)*100.0;
    cout<<"Root: "<<x1<<" It: "<<it<<" Ea: "<<Ea<<endl;
    x0 = x1;
    it++;
}
return 0;
}