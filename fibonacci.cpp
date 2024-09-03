/*

Questao 1 para processo seletivo de estagio

Nome: Barbara Silveira Rodrigues
Linkedin: https://www.linkedin.com/in/barbara-silveira-rodrigues/

  Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.

*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Returns true if the number is inside the sequence
bool isFibonacci(int x) {

    // Only positive numbers
    if (x < 0) return false;

    int a = 0, b = 1, c = 0;

    while (c < x) {
        c = a + b;
        a = b;
        b = c;
    }

    return (c == x || x == 0);
}

int main () {

    string input;
    int number;

    // Read input from file or terminal
    while(true){

        getline(cin, input);

        // Empty input will exit the loop
        if(input.empty()){
            break;
        }

        stringstream ss(input);
        ss >> number;

        if(isFibonacci(number)){
            cout << number << " pertence a sequencia de Fibonacci" << endl;
        } else {
            cout << number << " nao pertence a sequencia de Fibonacci" << endl;
        }
    }

    return 0;
}