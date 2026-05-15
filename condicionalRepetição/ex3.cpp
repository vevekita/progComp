#include <iostream>
using namespace std;

void tabuada(int a){
    int i = 0;
    while(i <= 10){
        int resultado = a * i;
        cout << a << "x" << i << "=" << resultado << endl;
        i++;
    }
}

int main(){
    tabuada(10);
    return 0;
}
