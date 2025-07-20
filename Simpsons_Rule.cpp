#include<bits/stdc++.h>
using namespace std;
float f(float x){
    return 1/(1+x);
}
void a_1_3_simpson(float a,float b,int n){
    if(n%2!=0){
        cout<<"1/3 need n= even num"<<endl;
        return;
    }
    float h = (b-a)/n;
    float sum = f(a)+f(b);
    for(int i=1;i<n;i++){
        float x = a+h*i;
        if(i%2==0){
            sum+=2*f(x);
        }else{
            sum+=4*f(x);
        }
    }
    float result = (h/3)*sum;
    cout<<"Result: "<<result<<endl;
}
void a_3_8_simpson(float a,float b,int n){
    if(n%3!=0){
        cout<<"Simpsons 3/8 need n%3==0"<<endl;
        return;
    }
    float h = (b-a)/n;
    float sum = f(a)+f(b);
    for(int i=1;i<n;i++){
        float x = a+h*i;
        if(i%3==0){
            sum+=2*f(x);
        }else{
            sum+=3*f(x);
        }
    }
    float result=(3*h/8)*sum;
    cout<<"Result: "<<result<<endl;
}
int main()
{
    float a,b;
    int n;
    cout<<"Enter the low and up point:"<<endl;
    cin>>a>>b;
    cout<<"Enter the interval num: "<<endl;
    cin>>n;
    a_3_8_simpson(a,b,n);
    a_1_3_simpson(a,b,n);
    return 0;
}