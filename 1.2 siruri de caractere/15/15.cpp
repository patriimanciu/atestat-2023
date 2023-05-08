#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

char s[256], v[256][256], *p;

int main(){
    int x, n = 0;
    cin >> x;
    cin.get();
    cin.getline(s, 256);
    p = strtok(s, " ");
    while (p){
        int cnt = 0;
        for (int i = 0; i < strlen(p); i++)
            if (p[i] == 'o')
                cnt++;
        if (cnt >= 1 && cnt <= x){
            n++;
            strcpy(v[n], p);
        }
        p = strtok(NULL, " ");
    }
    cout << n << '\n';
    for (int i = 1; i <= n; i++)
        cout << v[i] << '\n';
    return 0;
}