/*
ref:
http://ftivk.blogspot.jp/2007/03/input-stream-delimiter.html
*/

#ifndef CUSTOM_DELIMITER_H
#define CUSTOM_DELIMITER_H

#include <locale>
#include <iostream>
#include <algorithm>

template <typename CHARTYPE>
class custom_delim : public std::ctype<CHARTYPE> {};

template <>
class custom_delim<wchar_t> : public std::ctype<wchar_t>{
    wchar_t delim;
public:
    custom_delim(wchar_t delim) : delim(delim) {}
    bool do_is(mask m, wchar_t c) const{
        if(m == space){
            if(c == delim) return true;
        }
        return std::ctype<wchar_t>::do_is(m, c);
    }
};
#endif // CUSTOM_DELIMITER_H
