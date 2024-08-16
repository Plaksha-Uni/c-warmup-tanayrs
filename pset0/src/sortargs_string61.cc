#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {
    // Logic Taken from Solutions //
    std::vector <std::string> args(&argv[1],&argv[argc]);

    std::sort(args.begin(),args.end());
    
    for (std::string& s : args) {
        std::cout << s << '\n';
    }
}