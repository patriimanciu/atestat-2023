#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("cuvinte.in");
ofstream cout("cuvinte.out");

int main(){
    char s[21];
    cin >> s;
    if (strlen(s) % 2 == 0)
        cout << strlen(s) / 2 << '\n';
    else
        cout << strlen(s) / 2 + 1 << '\n';
    for (int i = 0; i < strlen(s); i++){
        cout << s + i << " ";
        s[strlen(s) - 1] = '\0';
    }
}