#include <iostream>
using namespace std;

//level2.1
int enBoyuk(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int x, y;
    cout<<"Iki eded daxil edin: ";
    cin>>x;
    cin>>y;

    int netice = enBoyuk(x, y);
    cout << "Ededlerin en boyuyu: " << netice << endl;

    return 0;
}
