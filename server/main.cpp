#include"Chat.h"

using namespace std;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "");
    Chat server;

    if (argc == 2)
    {
        // main.exe --db_name
        // get "-db_name" and remove "--"
        // exit 2 if -- not founded
        // exit 1 if " "(space)  founded

        string name = argv[1];
        size_t pos;

        pos = name.find(" ");
        if (pos != string::npos)
            return 1;

        if (name.substr(0, 2) == "--")
            name = name.substr(2);
        else
            return 2;

        server.first_start(name);
    }
    else
        server.start();

    return 0;
}
