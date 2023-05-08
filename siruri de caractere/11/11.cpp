#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ofstream out("sufixe.out");

int main(){
    char s[21];
    cin >> s;
    for (int i = 0; i < strlen(s); i++)
        out << s + i << " ";
    out << '\n' << strlen(s);
    return 0;
}