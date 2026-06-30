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

    int qnt;
    cin >> qnt;


    vector<int> numeros;
    //set<int> numeros;

    while (qnt > 0) {
        int num;
        cin >> num;
        numeros.push_back(num);
        qnt--;
    }

    int contagem = 0;

    for (int i = 0; i < numeros.size(); i++) {
        
        if (i != (numeros.size() - 1)) {
        int segs = abs(numeros[i+1] - numeros[i]);
        contagem += segs;
        }
    }


    cout << contagem;



    return 0;
}