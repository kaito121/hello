#include<iostream>
//#include<utility>  //pairの時
#include<tuple> //tupleの時
#include<string>

//pairの試し
/*int main()
{
    std::pair<int, std::string> p = std::make_pair(1,"hello");

    std::cout << p.first << std::endl;
    std::cout << p.second << std :: endl;
}*/


//tupleの試し
/*int main()
{
    std::tuple<int, int, std::string> t = std::make_tuple(4,a,"hello world");
    a=0;

    int& i = std::get<0>(t);
    std::cout << i << std::endl;

    int& j = std::get<1>(t);
    std::cout << j << std::endl;

    std::string& s = std::get<2>(t);
    std::cout << s << std::endl;
}*/

int main(){
    std::tuple<int,CMyClass,double>tupleValue;//tupleValueの定義

　　//データ指定
    int value1 = std::get<0>(tupleValue);
    CMyClass value2 = std::get<1>(tupleValue);
    double value3 = std::get<2>(tupleValue);

　　//データ代入（個別）
    std::get<0>(tupleValue) = 10;
    std::get<1>(tupleValue) = instance;
    std::get<2>(tupleValue) =15.5;

    //要素数の取得 
    size_t count = std::tuple_size<std::tuple<int,double>>::value;

    //要素数の取得（変数の場合）
    size_t count = std::tuple_size<decltype(tupleValue)>::value;
    
}
