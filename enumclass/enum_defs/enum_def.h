enum class ENUM_TYPE{
#   define _(a) a,
#   include ENUM_PATH
#   undef _
    Num
};
template<>
const char * const Enumer<ENUM_TYPE>::Array[] = {
#   define _(a) #a,
#   include ENUM_PATH
#   undef _
    0
};
template<>
std::map<std::string, ENUM_TYPE> Enumer<ENUM_TYPE>::Map = {
#   define _(a) {#a,ENUM_TYPE::a},
#   include ENUM_PATH
#   undef _
    {"", static_cast<ENUM_TYPE>(0)}
};
