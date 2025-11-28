#include <bits/stdc++.h>

using namespace std;

void setupIO(string filename) {
    // Tối ưu tốc độ nhập xuất
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Mở file nếu tồn tại
    if (fopen((filename + ".INP").c_str(), "r")) {
        freopen((filename + ".INP").c_str(), "r", stdin);
        freopen((filename + ".OUT").c_str(), "w", stdout);
    }
}

int main() {
    setupIO("MATMA");

    string s;
    // Đọc toàn bộ dòng dữ liệu
    if (!getline(cin, s)) return 0;

    long long sum_digits = 0;
    
    // --- PHẦN 1: Tính tổng các chữ số ---
    for (char c : s) {
        if (isdigit(c)) {
            sum_digits += (c - '0');
        }
    }
    
    // --- PHẦN 2: Giải mã thông điệp ---
    // Sử dụng stringstream để tách từng từ dựa trên khoảng trắng
    stringstream ss(s);
    string word;
    vector<string> result_words;

    while (ss >> word) {
        string clean_word = "";
        
        // Lọc bỏ các chữ số, chỉ giữ lại chữ cái
        for (char c : word) {
            if (!isdigit(c)) {
                clean_word += c;
            }
        }
        
        // Nếu từ còn lại chữ cái (không rỗng) thì đảo ngược và lưu lại
        if (!clean_word.empty()) {
            reverse(clean_word.begin(), clean_word.end());
            result_words.push_back(clean_word);
        }
    }

    // --- IN KẾT QUẢ ---
    // Dòng 1: Tổng các chữ số
    cout << sum_digits << " ";
    
    // Dòng 2: Các từ đã giải mã, cách nhau bởi khoảng trắng
    for (int i = 0; i < result_words.size(); ++i) {
        cout << result_words[i] << (i == result_words.size() - 1 ? "" : " ");
    }
    
    return 0;
}