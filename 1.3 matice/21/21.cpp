#include <fstream>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

int main()
{
    int n, a[21][21], k;
    bool found;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < n; i++){
        if (i == k)
            continue;
        found = false;
        for (int j = 0; j < n && !found; j++){
            for (int m = 0; m < n && !found; m++) 
                if (a[i][j] == a[k][m]){
                    cout << i + 1 << " ";
                    found = true;
                }
        }
    }

    return 0;
}