#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

int main()
{
    char s[51], aux[51] = "";
    cin.getline(s, 51);
    for (int i = 0 ; i < strlen(s); i++)
        if (strchr("aeiou", s[i])){
            strcpy(aux, s + i + 1);
            s[i + 1] = s[i] + 1;
            s[i + 2] = s[i] + 2;
            strcpy(s + i + 3, aux);
            i += 2;
        }
    cout << s;
    return 0;
}