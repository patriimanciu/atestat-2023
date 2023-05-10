#include <iostream>
#include <fstream>

using namespace std;

ifstream in("atestat.in");

int numarare (int x[10][10], int n, int p){
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (x[i][p])
            cnt++;
    return cnt;
}

int toateNule (int x[10][10], int n, int p){
    for (int i = 0; i < n; i++)
        if (x[p][i])
            return 0;
    return 1;
}

int main(){
    int x[10][10], n;
    in >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            in >> x[i][j];
    }
    int v[10];
    for (int i = 0; i < n; i++){
        v[i] = numarare(x, n, i);
    }

    for (int i = 0; i < n; i++){
        if (toateNule(x, n, i)){
            for (int j = 0; j < n; j++)
                x[i][j] = v[j];
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++)
            cout << x[i][j] << " ";
        cout << '\n';
    }
    return 0;
}