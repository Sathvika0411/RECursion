#include <bits/stdc++.h>

using namespace std;

int main() {

long long n, x;
cin >> n >> x;
vector<long long >weight(n);

for (int i = 0; i < n; ++i) { 
    cin >> weight[i];
}

sort(weight.begin(), weight.end());
int begin = 0, end = n - 1;

while (begin < end) {

if (weight[begin] + weight[end] <= x) {
n--;
begin++;
end--;
} 
else {
end--;
}

}
cout << n << endl;

return 0;
}