#include <fstream>

using namespace std;

ifstream cin("numere.in");
ofstream cout("numere.out");

void PozitiiPare(int n, int v[], int &prim, int &ultim){
    int i = 0;
    while (!prim){
        if (v[++i] % 2 == 0)
            prim = i;
    }
    i = n;
    while (!ultim){
        if (v[i] % 2 == 0)
            ultim = i;
        i--;
    }
}

void Sortpq(int n, int v[], int p, int q){
    for (int i = p; i < q; i++)
        for (int j = i + 1; j <= q; j++)
            if (v[i] >= v[j])
                swap(v[i], v[j]);
}

int main(){
    int n, v[101], prim = 0, ultim = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    PozitiiPare(n, v, prim, ultim);
    Sortpq(n, v, prim, ultim);
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
    return 0;
}