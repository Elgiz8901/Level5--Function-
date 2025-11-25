#include <iostream>
using namespace std;
//level-2.4
int tek_cut(int n){
    if(n%2==0)
        return 0;

    return 1;

}


int main() {
    int n;
    cout<<"bir eded daxil et:";
    cin>>n;
    if (tek_cut(n)==0){
        cout<<"Cutdur";
    }
    else {
        cout<<"Tekdir";
    }


	return 0;
}
