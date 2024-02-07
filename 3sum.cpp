#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    unordered_map<int, int> numPositions;
    bool found = false;

    for (int i = 1; i <= n; ++i) {
        int num;
        cin >> num;

        int complement = x - num;

        if (numPositions.find(complement) != numPositions.end()) {
            // Found a pair
            cout << numPositions[complement] << " " << i << endl;
            found = true;
            break;
        }

        // Save the position of the current number
        numPositions[num] = i;
    }

    if (!found) {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
