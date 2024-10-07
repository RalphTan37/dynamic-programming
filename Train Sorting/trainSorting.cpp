#include <iostream>
#include <vector>
#include <algorithm> // For max()

using namespace std;

int main() {
    // Initialize vectors a and b with size 2001 and all elements as 0
    vector<int> a(2001, 0), b(2001, 0);
    int n;

    // Input handling: first take number of elements
    cin >> n;
    vector<int> v(n);

    // Input handling: take the elements of the vector
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Reverse traversal to calculate a[i] and b[i]
    for (int i = n - 1; i >= 0; i--) {
        for (int j = i + 1; j <= n; j++) {
            if (j == n || v[j] > v[i]) {
                a[i] = max(a[i], a[j] + 1);
            }
            if (j == n || v[j] < v[i]) {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }

    // Compute the result by finding the maximum value of a[i] + b[i] - 1
    int result = 0;
    for (int i = 0; i < n; i++) {
        result = max(result, a[i] + b[i] - 1);
    }

    // Output the result
    cout << result << endl;

    return 0;
}
