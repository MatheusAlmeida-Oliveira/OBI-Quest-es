// ========================
// Compilador online da OBI
// ========================

#include <bits/stdc++.h>
using namespace std;

struct dias {
        int cmc;
        int fim;
    };

void lerdias(dias &days) {
   
    cin >> days.cmc;
    cin >> days.fim;

}

int main() {
    // comandos para agilizar entrada/saída
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Digite seu código aqui, por exemplo:
    // cout << "resposta" << endl;

    dias A;
    vector<int> diasana;
    lerdias(A);

    for (int i = 0; i < (A.fim - A.cmc) + 1; i++) {

        diasana.push_back(A.cmc + i);
        
    }

    dias B;
    vector<int> diasbeatriz;
    lerdias(B);

    for (int i = 0; i < (B.fim - B.cmc) + 1; i++) {

        diasbeatriz.push_back(B.cmc + i);
        
    }

    dias C;
    vector<int> diascarolina;
    lerdias(C);

    for (int i = 0; i < (C.fim - C.cmc) + 1; i++) {

        diascarolina.push_back(C.cmc + i);
        
    }

    vector<int> diasdisponiveis;

    for (int i = 0; i < diasana.size(); i++) {

        for (int j = 0; j < diasbeatriz.size(); j++) {
            
            if (diasana[i] < diasbeatriz[j]) continue;
            
            else if (diasbeatriz[j] == diasana[i]) {
                diasdisponiveis.push_back(diasbeatriz[j]);
                continue;
            }
        }

    }

    int contador = 0;

    for (int i = 0; i < diasdisponiveis.size(); i++) {
        
        for (int j = 0; j < diascarolina.size(); j++) {
            if (diascarolina[j] == diasdisponiveis[i]) {
                contador++;
                continue;
            }
        }
    }

    cout << contador << endl;

    

    return 0;
}