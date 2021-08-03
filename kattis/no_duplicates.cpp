#include <bits/stdc++.h>
using namespace std;

vector<string> splitSentence(string str) {
	string word = "";
	vector<string> vec;
	int i = 0;
	while (str[i]!='\0') {
		if (str[i]==' ') {
			vec.push_back(word);
			word = "";
		}
		else
			word += str[i];
		i++;
	}
	vec.push_back(word);
	return vec;
}

int main() {
	string str;
	getline(cin, str);
	unordered_map<string, int> dp;
	vector<string> word = splitSentence(str);
	int size = word.size();
	dp[word[0]]++;
	for (int i=1; i<size; i++) {	
		if (dp[word[i]] > 0) {
			cout << "no";
			return 0;
		}
		dp[word[i]]++;
	}
	cout << "yes";
	return 0;
}
