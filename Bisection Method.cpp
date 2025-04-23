// Algorithm:
// step 1:choose two real number a and b such that f(a)*f(b)<0
// step 2:define root,c = (a+b)/2;
// step 3: find f(c);
// step 4: if f(a)*f(c)<=0 then set b=c else a=c return to step 1 until finding the root mathced twice
#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x -4;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x1=0;
    double xu=3;
    double xr =0;
    double xr_old;
    double Ea = 100.0;
    double Es = 10.0;
    int Imax = 100;
    int iter = 0;
    while(Ea>Es && iter<Imax)
    {
        xr_old = xr;
        xr = (x1+xu)/2.0;
        iter++;
        if(xr!=0){
            Ea = fabs((xr-xr_old)/xr)*100.0;
        }
        double test = f(x1)*f(xu);
        if(test<0){
            xu = xr;
        }else if(test>0){
            x1=xr;
        }else{
            Ea = 0;
        }
        cout<<"Iter"<<iter<<": Xr = "<<xr<<", Ea = "<<Ea<<"%"<<endl;
    }
    cout<<"Approximate Roor = "<<xr<<endl;
    return 0;

}
