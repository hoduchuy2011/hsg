#include <iostream>
#include <string>
#include <random>
#include <chrono>

using namespace std;

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Initialize Random Number Generator
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

    // Define the alphabet: Letters (upper/lower) + Digits
    const string ALPHANUM = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    // Randomize total length limit (between 50 and 1,000,000 characters)
    // This covers both Subtask 1 and Subtask 2
    uniform_int_distribution<int> length_dist(50, 1000000);
    int target_len = length_dist(rng);

    int current_len = 0;

    // Generate loop
    while (current_len < target_len) {
        // 1. Generate a word length (randomly 1 to 15 chars)
        uniform_int_distribution<int> word_len_dist(1, 15);
        int w_len = word_len_dist(rng);

        // Don't exceed total target length
        if (current_len + w_len > target_len) {
            w_len = target_len - current_len;
        }

        // Print word characters
        uniform_int_distribution<int> char_dist(0, ALPHANUM.size() - 1);
        for (int i = 0; i < w_len; ++i) {
            cout << ALPHANUM[char_dist(rng)];
        }
        current_len += w_len;

        if (current_len >= target_len) break;

        // 2. Generate space length (randomly 1 to 5 spaces)
        uniform_int_distribution<int> space_dist(1, 5);
        int s_len = space_dist(rng);

        // Don't exceed total target length
        if (current_len + s_len > target_len) {
            s_len = target_len - current_len;
        }

        // Print spaces
        for (int i = 0; i < s_len; ++i) {
            cout << ' ';
        }
        current_len += s_len;
    }
    
    // Final newline
    cout << "\n";

    return 0;
}