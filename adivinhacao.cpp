#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = rand() % 100 + 1;
    int tentativa, tentativas = 0, limiteTentativas = 10;
    bool acertou = false;

    cout << "Bem-vindo ao jogo de adivinhação!" << endl;
    cout << "Você tem " << limiteTentativas << " tentativas para acertar o número entre 1 e 100." << endl;

    while (tentativas < limiteTentativas) {
        cout << "Digite sua tentativa: ";
        cin >> tentativa;
        tentativas++;

        if (tentativa > numeroSecreto) {
            cout << "Muito alto! Tente um número menor." << endl;
        } else if (tentativa < numeroSecreto) {
            cout << "Muito baixo! Tente um número maior." << endl;
        } else {
            acertou = true;
            break;
        }
    }

    if (acertou) {
        cout << "Parabéns! Você acertou em " << tentativas << " tentativas." << endl;
    } else {
        cout << "Fim de jogo! O número secreto era " << numeroSecreto << "." << endl;
    }

    return 0;
}
