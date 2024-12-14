#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
    string text = "(123) (456) (789)";
    regex pattern("\\((\\d+)\\)");
    smatch finder;
    
    auto start = sregex_iterator(text.begin(), text.end(), pattern);
    auto finish = sregex_iterator();
    
    for (auto i = start; i != finish; ++i) {
        smatch finder = *i;
        string match_str = finder.str(1);
        cout << "Number: " << match_str << endl;
    }
    
    return 0;
}
