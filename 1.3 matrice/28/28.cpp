#include <iostream>
#include <fstream>

using namespace std;

ifstream in("matrice.in");

int maxim_d(int n, int a[100][100]){
    int maxx = -1;
    for (int i = 0; i < n; i++){
        if (a[i][i] > maxx && a[i][i] % 2 == 0)
            maxx = a[i][i];
        if (a[i][n - i - 1] > maxx && a[i][n - i - 1] % 2 == 0)
            maxx = a[i][n - i - 1];
    }
    return maxx;
}

int main(){
    int a[100][100], n;
    in >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            in >> a[i][j];
    int k = maxim_d(n, a);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i != j && j != n - i - 1)
                if (a[i][j] % 2 == 1)
                    a[i][j] = k;
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}