#include <iostream>
using namespace std;
//level-4.4
int sum(int i) {
    int cem=0;
    {

        while(i>0){
            int q=i%10;
            i=i/10;
            cem=cem+q;

        }
        return cem;

    }

}

int main() {
    cout<<"Reqemleri cemi 10-a beraber olan ucreqemli ededler:";
    for(int i=100;i<=999;i++){
    if(sum(i)==10){
        cout<<i<<",";
    }
    }
	return 0;
}
