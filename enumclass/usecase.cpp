#include <iostream>

using namespace std;

#undef ENUM_TYPE
#undef ENUM_PATH
#define ENUM_TYPE Plane_cate
#define ENUM_PATH "plane_cate.def"
#include "enum_defs/enumer.h"
#include "enum_defs/enum_def.h"

int main(void){
    cout << Enumer<Plane_cate>::Array[2] << endl;
    cout << static_cast<int>(Enumer<Plane_cate>::Map["Bomber"]) << endl;
    return 0;
}
