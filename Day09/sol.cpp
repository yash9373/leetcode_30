class Solution {
public:
    string reverseWords(string s) {
       istringstream iss(s);  // Create a stringstream from the input string.
   vector<std::string> words;
   string word;

    // Tokenize the input string into words using spaces as delimiters.
    while (iss >> word) {
        words.push_back(word);
    }

    if (words.empty()) {
        return "";  // Handle the case where the input string has no words.
    }

    // Reverse the order of words in the vector.
   reverse(words.begin(), words.end());

    // Join the reversed words with a single space between them.
   string result = words[0];
    for (int i = 1; i < words.size(); i++) {
        result += " " + words[i];
    }

    return result;
    }
};