#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;

    int numbers[100], prefix[100];

    cout << "Enter the numbers one by one:\n";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    prefix[0] = numbers[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + numbers[i];
    }

    cout << "Here are the prefix sums:\n";
    for (int i = 0; i < n; i++) {
        cout << prefix[i] << " ";
    }

    cout << endl;
    return 0;
}
