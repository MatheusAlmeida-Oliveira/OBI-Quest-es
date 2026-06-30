// ========================
// Compilador online da OBI
// ========================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // comandos para agilizar entrada/saída
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Digite seu código aqui, por exemplo:
    // cout << "resposta" << endl;

    int g1, g2, g3, g4;
    cin >> g1 >> g2 >> g3 >> g4;

    int numdemesas = 0;

    while (g4 > 0) {
        numdemesas++;
        g4--;
    }

    while (g3 > 0) {
        
        if (g1 != 0) {
            g3--;
            g1--;
            numdemesas++;
        }

        else {
            numdemesas++;
            g3--;
        }
    }

    while (g2 > 0) {

        if (g2 >= 2) {
            g2 -= 2;
            numdemesas++;
        }

        else if (g1 > 1) {
            g2--;
            g1 -= 2;
            numdemesas++;
            break;
        }

        else {
            numdemesas++;
            break;
        } 

    }

    while (g1 > 0) {
        if (g1 >= 4) {
            g1 -= 4;
            numdemesas++;
        }

        else {
            numdemesas++;
            break;
        }

    }

    cout << numdemesas;


    return 0;
}