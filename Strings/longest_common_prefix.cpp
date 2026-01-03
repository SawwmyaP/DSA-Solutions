
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> strs = {"flower", "flow", "flight"};

    if (strs.empty()) {
        cout << "";
        return 0;
    }

    sort(strs.begin(), strs.end());

    string first = strs[0];
    string last = strs.back();
    string prefix = "";

    for (int i = 0; i < min(first.size(), last.size()); i++) {
        if (first[i] == last[i])
            prefix += first[i];
        else
            break;
    }

    cout << prefix;
    return 0;
}