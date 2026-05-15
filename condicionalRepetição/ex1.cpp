// Condicionais e laços de repetição
#include <iostream>
using namespace std;

void verifica_idade(int a){
    if(a < 15){
        cout << "Criança" << endl;
    }
    else if(a > 15 && a < 18){
        cout << "Adolescente" << endl;
    }
    else if(a > 18 && a < 60){
        cout << "Adulto" << endl;
    }
    else{
        cout << "Idoso" << endl;
    }
}

int main(){
    verifica_idade(10);
    verifica_idade(16);
    verifica_idade(34);
    verifica_idade(65);
    return 0;
}
