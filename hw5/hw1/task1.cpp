#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int n = 0;
    int m = 0;
    cin >> a >> n >> m;
    int nbit = (a & (1 << n)) >> n;
    a = a & (~(1 << n));
    int mbit = (a & (1 << m)) >> m;
    a = a & (~(1 << n));
    a = a | (nbit << m) | (mbit << n);
    cout << a;
        return EXIT_SUCCESS;
}