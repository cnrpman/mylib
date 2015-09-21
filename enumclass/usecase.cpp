#include <iostream>

using namespace std;

#undef ENUM_TYPE
#undef ENUM_PATH
#define ENUM_TYPE Plane_cate
#define ENUM_PATH "plane_cate.def"
#include "enum_defs/enumer.h"
#include "enum_defs/enum_def.h"

int main(int argc, char * argv[]){
    ENUM_TYPE tmp;
    cout << Enumer<Plane_cate>::Array[2] << endl;
    cout << (Enumer<Plane_cate>::Map["Bomber"]) << endl;
    cin >> tmp;
    cout << tmp;
    return 0;
}
