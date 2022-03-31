#include <iostream>
using namespace std;

int is_prime(int n){
    int counter = 0;
    for (int i = 1; i<=n; i++){
        if(n%i == 0){
            counter += 1;
        }
    }

    if(counter == 2){
        return n;
    }
    else{
        return 0;
    }
}

int main(){
    int qtd = 0;
    int maior = 0;

    for(int i = 1; i<=100000; i++){
        int a = is_prime(i);
        if(a!=0){
            //cout << a << endl;
            qtd+=1;

            if(a>maior){
                maior = a;
            }
        }

    }

    cout<<"maior primo: "<<maior<<endl;
    cout<<"quantidade de primos: "<<qtd<<endl;

}