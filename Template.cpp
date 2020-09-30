#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define PB push_back
typedef long long ll;
#define endl "\n"

template <class T>
class Arithmetic
{
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T subtract();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add()
{
    return a + b;
}
template <class T>
T Arithmetic<T>::subtract()
{
    return a - b;
}

int main()
{
    IOS;
    Arithmetic<int> ar(12, 5);
    cout << ar.add() << endl;
    cout << ar.subtract() << endl;
    Arithmetic<float> ar1(12.98, 5.34);
    cout << ar1.add() << endl;
    cout << ar1.subtract() << endl;
    return 0;
}
