#include <iostream>
#include <cmath>
using namespace std;

double calculate(int k, int N) {
    double S = 1.0;
    for (int j = k; j <= N; j++)
    {
        S *= sqrt((j * j) / (1 + exp(-j)));
    }
    return S;
}

int main() {
    int k, N;
    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;

    // while 
    double S = 1.0;
    int j = k;
    while (j <= N) {

        S *= sqrt((j * j) / (1 + exp(-j)));
        j++;
    }
    cout << S << endl;

    // do-while
    S = 1.0;
    j = k;
    do {

        S *= sqrt((j * j) / (1 + exp(-j)));
        j++;
    } while (j <= N);
    cout << S << endl;

    // for n++
    cout << calculate(k, N) << endl;

    // for n--
    S = 1.0;
    for (j = N; j >= k; j--)
    {
        S *= sqrt((j * j) / (1 + exp(-j)));
    }
    cout << S << endl;

    return 0;
}
