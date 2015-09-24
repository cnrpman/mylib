#include <iostream>
#include <string>
#include <sstream>
#include <locale>

#include "CustomDelimiter.h"

using namespace std;

int main(int argc, char * argv[]){
    std::wstringstream in(std::wstring(L"go,go,go\ngo,go,go"));
    in.imbue(std::locale(std::locale::classic(), new custom_delim<wchar_t>(L',')));

    wstring word;
    while(in>>word){
        wcout<<word<<std::endl;
    }

    return 0;
}
