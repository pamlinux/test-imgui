#include <string>
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;
//namespace exp = std::experimental::filesystem;

int main()
{
    //char sep = exp::filesystem::path::preferred_separator
    std::string path = "/home/pam";
    for (const auto & entry : fs::directory_iterator(path))
        std::cout << entry.path() << std::endl;
}