#include <iostream>
using namespace std;
//level-3.9
int sade(int n){
    if(n<=1)
        return 2;
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;

        }
    }
    return 1;
}





int main() {
    int n;
    cout<<"Eded daxil edin:";
    cin>>n;
     if (sade(n)==1){
        cout<<"Sadedir";
     }
     else if(sade(n)==2){
        cout<<"ne sadedir nede murekkebdir";
     }
     else {
        cout<<"Murekkebdir";
     }

	return 0;
}
