#include <fstream>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

void interschimbC(int a[200][200], int &n, int k1, int k2){
    for(int i = 0; i < n; i++){
        swap(a[i][k1], a[i][k2]);
    }
}

int main(){
    int a[200][200], n, m, sum = 0, maxx = INT16_MIN, minn = INT16_MAX, j_minn, j_maxx;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
            if (a[i][j] < minn){
                minn = a[i][j];
                j_minn = j;
            }
            else
                if (a[i][j] > maxx){
                    maxx = a[i][j];
                    j_maxx = j;
                }
        }
    interschimbC(a, n, j_maxx, j_minn);
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}