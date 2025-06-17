#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return exp(-x)-x;
}
double fd(double x){
    return -exp(-x)-1;
}
int main()
{
double x0=1;
double x1;
double tol = 0.001;
int maxit = 20;
for(int i=1;i<=maxit;i++){
    x1 = x0 - f(x0)/fd(x0);
    cout<<"x1: "<<x1<<" it: "<<i<<endl;
    if(fabs(x1-x0)<tol){
        cout<<"Root Founded: "<<x1<<endl;
        break;
    }
    x0 = x1;
    if(i==maxit){
        cout<<"Can't Found!!"<<endl;
    }
}
return 0;
}