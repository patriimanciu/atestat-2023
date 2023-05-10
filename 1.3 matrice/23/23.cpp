#include <iostream>
#include <fstream>

using namespace std;

ifstream in("matrice.in");

int nrpare_p(int n, int a[100][100]){
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i][i] % 2 == 0){
            cnt++;
        }
    if (cnt)
        return cnt;
    else
        return -1;
}

int nrpare_s(int n, int a[100][100]){
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i][n - i] % 2 == 0){
            cnt++;
        }
    if (cnt)
        return cnt;
    else
        return -1;
}

int main(){
    int n, a[100][100], nr = 0;
    in >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            in >> a[i][j];
        }
    }

    int p = nrpare_p(n, a), s = nrpare_s(n, a);

    if (p == -1) 
        nr += n;
    else
        nr = nr + n - p;
    
    if (s == -1)
        nr += n;
    else
        nr = nr + n - s;
    if (n % 2 != 0)
        if (a[n/2+1][n/2+1] % 2 != 0)
            nr -= 1;
    cout << nr;
    return 0;
}