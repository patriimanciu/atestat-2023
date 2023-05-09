#include <fstream>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

void interchimbL(int a[201][201], int &m, int &k1, int &k2){
    for(int i = 0; i < m; i++){
        swap(a[k1][i], a[k2][i]);
    }
}

int main(){
    int n, m, a[201][201], k1 = INT_MAX, k2 = INT_MIN, ok1, ok2;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if (a[i][j] < k1){
                k1 = a[i][j];
                ok1 = i;
            }
            if (a[i][j] > k2){
                k2 = a[i][j];
                ok2 = i;
            }
        }
    interchimbL(a, m, ok1, ok2);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}