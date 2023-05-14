#include <fstream>

using namespace std;

ifstream cin("elevi.in");
ofstream cout("elevi.out");

struct elevi{
    char nume[10], prenume[10];
    int abs, abs_M, nota;
}e[25];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> e[i].nume >> e[i].prenume >> e[i].abs >> e[i].abs_M;
        e[i].nota = 10 - (e[i].abs - e[i].abs_M) / 10;
    }
    for (int i = 0; i < n - 1; i++){
        for (int j = i + 1; j < n; j++)
            if (e[i].nota < e[j].nota)
                swap(e[i], e[j]);
    }
    for (int i = 0; i < n; i++)
        cout << e[i].nume << " " << e[i].prenume << " " << e[i].nota << '\n';
    return 0;
}