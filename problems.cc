#include "problems.h"

std::string base13(int dec) {

	std::string digits;
	do {
		int units = dec % 13;
		auto c = static_cast<char>(units < 10 ? '0' + units : 'A' + units - 10);
		digits = std::string(1, c) + digits;
		dec /= 13;
	} while (dec > 0);
	return digits;
}

int arrayPlusArray(std::vector<int> a, std::vector<int> b)
{
	int sum = 0;
	if (a.size() == b.size()) {
		for (size_t i = 0; i != a.size(); ++i) {
			sum += a[i] + b[i];

		}
		return sum;
	}
	else {
		for (size_t i = 0; i != a.size(); ++i) {
			sum += a[i];

		}
		for (size_t i = 0; i != b.size(); ++i) {
			sum += b[i];

		}
		return sum;
	}
	return 0;
}
// You can add strings together using +
// If first="Adrian "
// and second="Hurtado"
// sumString=first+second
// sumString="Adrian Hurtado"
std::string greet(const std::string& n)
{
	std::string first = "Hello, ";


	std::string third = " how are you doing today?";
	return first + n + third;
}

std::string reverse(std::string str) {

	std::string reverse;

	for (auto rit = str.rbegin(); rit != str.rend(); ++rit) {
		if (std::islower(*rit)) {

			reverse.push_back(std::toupper(*rit));

		}
		else {
			reverse.push_back(std::tolower(*rit));
		}
	}
	return reverse;
}

std::string duplicate_encoder(const std::string& word) {

	std::map<char, int> ch_map;
	std::string word_copy = word;
	for (auto& ch : word_copy) {
		if (isalpha(ch)) {
			ch = std::tolower(ch);
		}
		ch_map[std::tolower(ch)] += 1;
	}
	std::string code = "";
	for (const auto& ch : word_copy) {
		if (ch_map.at(ch) > 1) {
			code.push_back(')');
		}
		else {
			code.push_back('(');
		}
	}
	return code;
}

std::vector<int> digitize(unsigned long n) {
	std::vector<int> reverse_digits;

	std::string string_digits = std::to_string(n);
	//  std::cout << string_digits;
	for (int i = string_digits.size() - 1; i >= 0; i--) {
		int d = string_digits[i];
		d = d - '0';
		reverse_digits.push_back(d);
	}

	return reverse_digits;
}
