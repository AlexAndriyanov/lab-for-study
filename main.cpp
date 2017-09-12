#include <iostream>
#include <fstream>
#include <list>
#include "module1.h"

int main (int argc, char **argv)
{
    list<string> myLists;
    string buffer;
    if (argc!=3){
        cout<<"<Необходимо ввести аргументы программы"<<endl;
        return 1;
    }

    ifstream finput(argv[1]);
    if (!finput) {
        cout << ">Ошибка открытия файла" << endl;
        return 1;
    }

    ofstream foutput(argv[2]);
    if (!foutput) {
        cout << ">Ошибка открытия файла" << endl;
        return 1;
    }

    while (getline(finput,buffer)){
        myLists.push_back(buffer);
    }

    using namespace Module1;

    myLists=SpecialMetod::sort_strings(myLists);
    while(!myLists.empty()){
        foutput<<myLists.back()<< endl;
        myLists.pop_back();
    }
    finput.close();
    foutput.close();
    return 0;
}
