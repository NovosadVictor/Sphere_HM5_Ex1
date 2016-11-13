#include <iostream>
#include <string>

void _count(std::string s) {
	int brack_o = 1;
	int brack_c = 0;
	int count = 0;
	bool b = false;
	for (size_t i = 1; i < s.size(); ++i) {
		if (s[i] == '('){
			++brack_o;
			continue;
		}
		if (s[i] == 'b') {
			if (!b) {
				brack_c = brack_o;
				b = true;
				continue;
			}
		}

		if (s[i] == ')') {
			--brack_o;
			if (brack_o == brack_c - 1){
				b = false;
			}
			continue;
		}

		if (b && s[i] == 'w'){
			++count;
			continue;
		}
	}
	std::cout << count << std::endl;
}



int main() {
	std::string s;
	std::getline(std::cin, s);
	_count(s);
	return 0;
}
