#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

int main()
{
    char sep = fs::path::preferred_separator;
    std::string path = "/Users/pam";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl; 
    std::cout << "Separator : " << sep << std::endl;
}