/*

Questao 2 para processo seletivo de estagio

Nome: Barbara Silveira Rodrigues
Linkedin: https://www.linkedin.com/in/barbara-silveira-rodrigues/

  Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.

*/
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// Return the count of A's inside a string
int countA (const string& str){

    int count = 0;

    // Each char inside a string
    for (char ch : str) {
        if (tolower(ch) == 'a') {
            count++;
        }
    }

    return count;
}

int main () {

    string input;
    int count;

    // Read input from file or terminal
    while(true){

        getline(cin, input);

        // Empty input will exit the loop
        if(input.empty()){
            break;
        }

        count = countA(input);

        cout << "Ha " << count << " ocorrencias de 'a' ou 'A' dentro da frase" << endl;
    }

    return 0;
}