#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std:: cout << "Error: Bad arguments" << std::endl;
        return (1);
    }
    else
    {
        std::string fileName = av[1];
        std::string sentence = av[2];
        std::string updated = av[3];
        std::ifstream myFile;
        std::ofstream Outfile;
        if (sentence.empty())
        {
            std::cout << "Error: first RE may not be empty" << std::endl;
            return (2);      
        }
        Outfile.open(fileName + ".replace", std::ios::out);
        if (!Outfile.is_open())
            exit(1);
        myFile.open(fileName, std::ios::in);
        if (myFile.is_open())
        {
            std::string line;
            std::string result;
            while(getline(myFile, line))
            {
                if (!myFile.eof())
                    line = line + "\n";
                    while(line.find(sentence) != std::string::npos)
                    {
                        size_t i = line.find(sentence);
                        int len = sentence.length();
                        result = line.substr(0, i);
                        result.append(updated);
                        line = line.substr(i + len);
                        Outfile << result;
                    }
                if (!line.empty())
                    Outfile << line;
            }
        }
        else
            std::cout << "Error: No such file or directory" << std::endl;
        Outfile.close();
        myFile.close();
    }
    return 0;
}