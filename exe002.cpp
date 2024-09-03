#include <iostream>
using namespace std;

int fibonacci(int num){
    int a = 0, b = 0, k;

    while (b < k){
        k = b;
        b = a + b;
        a = k;
    }

    return (b == num || num == 0);

}


int main(){
    int num;

    cout << "Indique um numero: " << endl;
    cin >> num;

    if(fibonacci(num)){
         cout << "O numero " << num << " pertence a sequencia de Fibonacci." << endl;
    } else {
        cout << "O numero " << num << " nao pertence a sequencia de Fibonacci." << endl;
    }

    return 0;


}