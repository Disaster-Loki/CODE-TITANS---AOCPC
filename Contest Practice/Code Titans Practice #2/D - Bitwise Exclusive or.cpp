#include <iostream>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    int A, C; cin >> A >> C;
    cout << (A ^ C) << endl;
    return (0);
}