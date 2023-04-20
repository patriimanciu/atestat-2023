#include <fstream>
#include <cstring>

using namespace std;

ifstream cin("atestat.in");
ofstream cout("atestat.out");

int main()
{
    char s[256];
    cin.getline(s, 256);
    cin.get();
    for (int i = 0 ; i < strlen(s); i++)
        if (strchr("aeiou", s[i])){
            strcpy(s + i + 1, s + i + 3);
        }
    cout << s;
    return 0;
}