#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x*x-x-2;
}
int main()
{
    double xl=1,xu=2,xr=0,xr_old=0;
    double Ea = 100.0,Es = 0.0001;
    int it =0,maxit=20;
    if(f(xl)*f(xu)>=0){
        cout<<"Invalid"<<endl;
        return -1;
    }
    while(it<maxit && Ea>Es){
        xr_old = xr;
        xr = xu - (f(xu)*(xu-xl))/(f(xu)-f(xl));
        Ea = fabs((xr-xr_old)/xr)*100.0;
        if(f(xu)*f(xr)<0){
            xu = xr;
        }else if(f(xu)*f(xr)>0){
            xl = xr;
        }
        cout<<"Root: "<<xr<<" it: "<<it+1<<" Ea: "<<Ea<<endl;
        it++;
    }
    return 0;
}