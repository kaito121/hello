#include <iostream>
#include <tuple>

typedef struct
{
	int x,y,z;
}kuukan;

int main()
{	
	int NUM=3;
	//pair
	std::pair<int, kuukan> p_youso = std::make_pair(NUM, kuukan{1,2,3});
	std::cout << "NUM=" << std::get<0>(p_youso) << std::endl;
	std::cout << "kuukan.x=" << std::get<1>(p_youso).x << std::endl;
	std::cout << "kuukan.y=" << std::get<1>(p_youso).y << std::endl;
	std::cout << "kuukan.z=" << std::get<1>(p_youso).z << std::endl;
	//tuple
	std::tuple<int, kuukan,double> t_youso = std::make_tuple(NUM, kuukan{1,2,3}, 0.233);
}
