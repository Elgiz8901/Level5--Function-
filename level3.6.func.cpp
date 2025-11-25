#include <iostream>
using namespace std;
//level-3.6

int sum(int n) {
    int cem=0;

    for(int i=1;i<=n;i++){
        cem=cem+i;
    }
    return cem;

}

int main() {
   int n;
   cout<<"Bir eded daxil edin:";
   cin>>n;
   int cavab=sum(n);
   cout<<"Netice:"<<cavab<<endl;

	return 0;
}
