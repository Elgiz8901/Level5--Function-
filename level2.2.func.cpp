#include <iostream>
using namespace std;
//level-2.2
int eded(int n){
    if(n>0)
        return 0;
    if(n<0)
        return 1;
    return 2;

}

int main() {
    int n;
    cout<<"bir eded daxil et:";
    cin>>n;
    if (eded(n)==0){
        cout<<"Musbetdir";
    }
    else if(eded(n)==1){
        cout<<"Menfidir";
    }
    else{
        cout<<"sifir-dir";
    }


	return 0;
}
