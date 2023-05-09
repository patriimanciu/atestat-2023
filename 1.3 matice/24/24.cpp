#include <fstream>

using namespace std;

ifstream cin("matrice.in");
ofstream cout("matrice.out");

int suma (int x[10][10], int n, int p){
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[p][i];
    return sum;
}

int main(){
    int x[10][10], n, a[10], maxx = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cin >> x[i][j];
        a[i] = suma(x, n, i);
        if (a[i] > maxx)
            maxx = a[i]; 
    }
    for (int i = 0; i < n; i++)
        if (a[i] == maxx)
            cout << i + 1 << " ";
    return 0;
}