#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    while (a--) {
        string s;
        cin >> s;
        stack<char> st;

        // Thêm điều kiện kiểm tra ngăn xếp trống trước khi sử dụng top()
        for (int i = 0; i < s.length(); i++) {
            if (!st.empty() && s[i] == 'B' && st.top() == 'A') {
                st.pop();
            } else if (!st.empty() && s[i] == 'D' && st.top() == 'C') {
                st.pop();
            } else {
                st.push(s[i]);
            }
        }

        cout << st.size() << endl;
    }
    return 0;
}