#include <iostream>
using namespace std;
//level-4.2
int eded(int n){
    int say=0;
    while(n>0){
        n=n/10;
        say=say+1;
    }

    return say;

}

int main() {
    int n;
    cout<<"Eded daxil edin:";
    cin>>n;
    int netice=eded(n);
    cout<<"Ededin reqemleri sayi:"<<netice;

	return 0;
}
