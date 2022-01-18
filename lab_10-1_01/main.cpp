#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char delimiter = ',';
    string idProduct, priceProd;
    string line;

    ifstream in("file.csv");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            stringstream stream(line);
            getline(stream, idProduct, delimiter);
        }
    }
    in.close();



    return 0;
}
