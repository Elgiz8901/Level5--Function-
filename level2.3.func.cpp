#include <iostream>
using namespace std;

int enboyuk(int a, int b, int c){
    if(a > b && a > c)
        return a;
    if(b > a && b > c)
        return b;
    return c;
}

int main(){
    int a,b,c;
    cout<<"Uc eded daxil edin:";
    cin >> a;
    cin >> b ;
    cin>> c;
    cout <<"En boyuyu:"<<enboyuk(a,b,c);
}
