#include <iostream>
#include <fstream>

using namespace std;


int main()
{
    int op;
    cout << "do you want to open Text.txt or overwrite?\nIf you want to overwrite enter 1 , if you want to view it enter 2. :\n";
    cin >> op;
    if (op == 1)
    {
        edit();
    }
    else if (op == 2)
    {
        open();
    }
}

void edit()
{
    int op;
    string x;
    ofstream a_file("Text.txt", ios::app);
    cout << "HEY ENTER SOME TEXT TO BE WRITTEN TO EXAMPLE.txt [created by rohan bojja]\n";
    getline(cin, x);
    a_file << x;
    cout << "want to type in an other line?\n1 for YES, 2 for NO";
    cin >> op;
    while (op == 1)
    {
        a_file << "\n";
        edit;
    }
    cout << "Do you want to quit?\n1 for YES , 2 for NO";
    cin >> op;
    if (op == 2)
    {
        edit;
    }
}
void open()
{
    int op;
    ifstream a_file("Text.txt");
    cout << "You are now viewing example.txt [created by rohan bojja]\n";
    cout << a_file;
    cout << "Do you want to quit?\n1 for YES , 2 for NO";
    cin >> op;
    if (op == 2)
    {
        open;
    }
}