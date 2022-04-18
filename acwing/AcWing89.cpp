//https://www.acwing.com/problem/content/91/
#include<iostream>
using namespace std;

//迭代法快速模意义下取幂
long long binpow(long long a, long long b, long long m) {

    long long res = 1;
    while(b)
    {
        if(b&1) res=res*a%m;
        b>>=1;//b右移了一位后,a也需要更新
        a=(a*a)%m;
    }
    return res%m;
}

//迭代法快速幂运算
/*
long long quick_pow_iter(long long a,long long b){
    long long res = 1;
    while(b>0){
        if(b&1) res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
*/
int main(){
    long long a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<binpow(a,b,c);
}

