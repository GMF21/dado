#include <iostream>


using namespace std;

void menu() {
    cout << "============================================================" << endl;
    cout << "            Dados Eletrônicos - Módulo de Programação       " << endl;
    cout << "         C/C++: Estruturas Básicas e Conceitos Fundamentais " << endl;
    cout << "                       ENTA - 2024                         " << endl;
    cout << "============================================================" << endl;
}

void mostrarDado(int numero) {
    switch (numero) {
        case 1:
            cout << "                     *                     " << endl;
            break;
        case 2:
            cout << "                   *                       " << endl;
            cout << "                        *" << endl;
            break;
        case 3:
            cout << "                   *                       " << endl;
            cout << "                     *                     " << endl;
            cout << "                       *" << endl;
            break;
        case 4:
            cout << "                   *    *               " << endl;
            cout << "                                           " << endl;
            cout << "                   *    *               " << endl;
            break;
        case 5:
            cout << "                   *   *               " << endl;
            cout << "                     *                     " << endl;
            cout << "                   *   *               " << endl;
            break;
        case 6:
            cout << "                   *     *               " << endl;
            cout << "                   *     *               " << endl;
            cout << "                   *     *               " << endl;
            break;
    }
}

void dado() {
    int tentativa = 0; 
    srand(time(NULL));

    while (true) {
    
        int numero = rand() % 6 + 1;
        mostrarDado(numero);

        tentativa++;
        cout << "Tentativas: " << tentativa << endl;

        cout << "Pressione Enter para jogar novamente ou crtl + c para sair: ";
        cin.ignore();
        system("clear");
        menu();

    }
}

int main() {
    menu();
    dado();
    
}
