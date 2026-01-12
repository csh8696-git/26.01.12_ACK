#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    //cout << a + b << endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    string s = "*";
    string ss;
    for (int i = 0; i < a; i++)
        ss += s;
    for (int i = 0; i < b; i++)
        cout << ss << endl;


    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;

    string s;

    s.append(a, '*');

    for (int i = 0; i < b; ++i)
    {
        cout << s << endl;
    }
    return 0;
}