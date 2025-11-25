#include <iostream>
using namespace std;
//level-3.8
int ededinters(int n){
    int ters=0;
    while (n>0){
         int q=n%10;
        ters=ters*10+q;

        n=n/10;

    }
    return ters;
}



int main() {
    int n;
    cout<<"bir eded daxil et:";
    cin>>n;
    int netice=ededinters(n);
    cout<<"ededin tersi:"<<netice;


	return 0;
}
