#include <iostream>
using namespace std;
//level-3.14
int eded(int i) {
   return (i%3==0 || i%7==0);

}

int main() {
    cout<<"1-den 100-e qeder 3e ve 7-e bolunen ededler:";
  for(int i=1;i<100;i++){
        if(eded(i)){
            cout<<i<<",";
        }
  }
	return 0;
}
