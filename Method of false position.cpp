#include<bits/stdc++.h>
using namespace std;
double fun(double x){
    return (x*x*x -x-2);
}
void falsi_pos(double a,double b,double tolerance,int maxit){
    if(fun(a)*fun(b)>=0){
        cout<<"Invalid interval cause a and b should have opposite sign"<<endl;
        return;
    }
    double c =a;
    for(int i=1;i<=maxit;i++){
        c = (a*fun(b)-b*fun(a))/(fun(b)-fun(a));
        cout<<"|Iteration: "<<i<<" |c= "<<c<<" |F(c) = " <<fun(c)<<endl;
        if(fabs(fun(c))<tolerance){
            cout<<"|Root found at: "<<fun(c)<<" |Iterations: "<<i<<endl;
            return;

        }if(fun(c)>0){
            b = c;
        }else{
            a = c;
        }
    }
    cout<<"Methood doesn't support within the selected iterations"<<endl;
}
int main()
{
    double a=1,b=2;
    double tolerance = 1e-6;
    int maxit= 100;
    falsi_pos(a,b,tolerance,maxit);
}