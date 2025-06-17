#include<bits/stdc++.h>
using namespace std;
double f(double x){
    return x*x-4;
}
int main()
{
    double x_i=1;
    double x_0=3;
    double x1;
    double tol = 0.001;
    int it= 20;
    for(int i=1;i<=it;i++){
        x1 = x_0 - ((f(x_0)*(x_i-x_0))/(f(x_i)-f(x_0)));
        cout<<"x1: "<<x1<<" it: "<<i<<endl;
        if(fabs(f(x1))<tol){
            cout<<"Root founded: "<<x1<<endl;
            break;
        }
        x_i = x_0;
        x_0 = x1;
        if(i==it){
            cout<<"Not Found!"<<endl;
        }
    }
    return 0;

}