class Solution {
public:
bool isVowel(char c) {
    // Check if a character is a vowel (either uppercase or lowercase).
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
    string reverseVowels(string s) {
          int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Find the first vowel from the left.
        while (left < right && !isVowel(s[left])) {
            left++;
        }

        // Find the first vowel from the right.
        while (left < right && !isVowel(s[right])) {
            right--;
        }

        // Swap the vowels.
        if (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }

    return s;
    }
};