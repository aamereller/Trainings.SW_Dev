#incluse <iostream>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream infile("file.txt");
    std::ofstream outfile("copy.txt",, std::ios_base::out|std::ios_base::truncate);
    char ch;
    while (infile.good())
    {
        infile>>ch;
        outfile<<ch;

    }
    infile.close();
    outfile.close();
    return EXIT_SUCCESS;
}