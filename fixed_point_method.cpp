#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return exp(-x);
}
int main()
{
double x0,x1;
x0 = 1;
double tol = 0.001;
cout<<"input initial point: "<<endl;
//cin>>x0;
int maxit= 50;
for(int i=1;i<=maxit;i++){
    x1 = f(x0);
    cout<<"Root: "<<x1<<" Itt: "<<i<<endl;
    if(fabs(x1-x0)<tol){
        cout<<"Root Founded: "<<x1<<endl;
        break;
    }
    x0=x1;
    if(i==maxit){
        cout<<"Not Found!"<<endl;
    }
}
return 0;
}