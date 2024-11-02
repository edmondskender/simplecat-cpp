#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using std::cout, std::endl;

void cat(std::istream& input, bool numberlines) {
    std::string line;
    int i = 1;
    while(getline(input, line)) {
        if(numberlines) {
            cout << std::setw(6) << i << "  " << line << endl;
            ++i;
        } else {
            cout << line << endl;
        }
    }
}

void cat_file(const std::string& filename, bool numberlines) {
    std::ifstream ifs(filename);
    if(!ifs.is_open()) {
        std::cerr << "File " << "<" << filename << ">" << " could not open!" << std::endl;
        return;
    }
    std::string line;
    int num_lines = 0;
    while(getline(ifs, line))
        num_lines++;
    ifs.close();
    int max_width = std::to_string(num_lines).length();

    ifs.open(filename);
    int i = 1;
    while(getline(ifs, line)) {
        if(numberlines) {
            cout << std::setw(max_width) << i << "  " << line << endl;
            ++i;
        } else {
            cout << line << endl;
        }
    }
}

int main(int argc, char **argv) {
    bool numberlines = false;
    std::vector<std::string> filenames;
    for(int i = 1; i < argc; ++i) {
        if(std::string(argv[i]) == "-n") {
            numberlines = true;
        } else {
            filenames.emplace_back(argv[i]);
        }
    }
    if(filenames.empty()) {
        cat(std::cin, numberlines);
    } else {
        for(const auto& filename : filenames) {
            cat_file(filename, numberlines);
        }
    }
    return 0;
}
