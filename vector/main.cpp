#include <bits/stdc++.h>
using namespace std;

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H"; // ANSI escape codes
}

int main()
{
    vector<int> v = {1, 4, 5, 6, 3, 2, 8, 9, 7};

    for (auto &&i : v)
        cout << i << ' ';
    cout << endl;

    auto maxV = max_element(v.begin(), v.end());
    int idxMax = distance(v.begin(), maxV);
    cout << "max: " << *maxV << endl;
    cout << "idx " << idxMax << endl;

    cin.get();
    return 0;
}