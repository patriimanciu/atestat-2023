#include <iostream>
#include <fstream>

using namespace std;

ifstream in("atestat.in");

int complementare(int x[200][200], int n, int k1, int k2){
    for (int i = 0; i < n; i++)
        if (x[i][k1] == x[i][k2])
            return 0;
    return 1;
}

int main(){
    int x[200][200], n, m, sum = 0;
    in >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            in >> x[i][j];
    for (int i = 1; i < m; i++){
        sum += complementare(x, n, 0, i);
    }
    cout << sum;
    return 0;
}