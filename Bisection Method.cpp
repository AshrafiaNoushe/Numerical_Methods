// Algorithm:
// step 1:choose two real number a and b such that f(a)*f(b)<0
// step 2:define root,c = (a+b)/2;
// step 3: find f(c);
// step 4: if f(a)*f(c)<=0 then set b=c else a=c return to step 1 until finding the root mathced twice
#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x*x - 2*x*x-2;
}
int main()
{
    double xl=1,xu=4,xr,xr_old;
    xr = 0;
    int it=0,maxit=20;
    double Ea = 100.0;
    double Es = 0.001;
    while(it<maxit && Ea>Es){
        xr_old = xr;
        xr = (xl + xu)/2.0;
        Ea = fabs((xr-xr_old)/xr)*100.0;
        double test = f(xl)*f(xr);
        if(test<0){
            xu = xr;
        }else if(test>0){
            xl = xr;
        }
        it++;
        cout<<"Root: "<<xr<<" it: "<<it<<" Ea: "<<Ea<<endl;
    }
    return 0;
}