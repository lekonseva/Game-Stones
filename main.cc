#include <iostream>
#include <sstream>
#include <random>
#include <ctime>

int main ()
{
	int kol,v,number;
	std:: random_device rd;
	std:: default_random_engine rnd {rd()};
	std:: uniform_int_distribution <> dist {15, 25};
	kol = dist(rnd);
	std::cout << "В куче находится "<< kol <<" камней."<<std::endl;
	while(kol>0){
		std::cout <<"Игрок, выбери от 1 до 3 камней"<< std::endl;
		std::string s;
		std::getline(std::cin,s);
		std::stringstream ss(s);
		ss>>v;

		if(ss.fail()){
			v=-1;
		}
					if(std::cin.eof()){
						std::cout<<"Ой"<<std::endl;
						return 1;
					}
					switch(v){
							case 1:{
								kol=kol-1;
								if(kol==0){
									std::cout<<"Игрок проиграл!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								number = 1 + gen() % (3-1+1);

								if(number>kol){
									number=kol;
								}
								kol=kol-number;
								std::cout<<"-1 камень. Мой ход - беру "<< number <<" камней и в куче лежит "<<kol<<std::endl;
								if(kol==0){
									std::cout<<"Компьютер проиграл!"<<std::endl;
									return 0;
								}

							}break;
							case 2:{
								kol=kol-2;
								if(kol==0){
									std::cout<<"Игрок проиграл!!!!!!!!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								number = 1 + gen() % (3-1+1);

								if(number>kol){
									number=kol;
								}
								kol=kol-number;
								std::cout<<"-2 камня. Мой ход - беру "<< number <<" камней и в куче лежит "<<kol<<std::endl;
								if(kol==0){
									std::cout<<"Компьютер проиграл!"<<std::endl;
									return 0;
								}
								}break;
							case 3:{
								kol=kol-3;
								if(kol==0){
									std::cout<<"Игрок проиграл!!!!!!!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								number = 1 + gen() % (3-1+1);

								if(number>kol){
									number=kol;
								}
								kol=kol-number;
								std::cout<<"-3 камня. Мой ход - беру "<< number<<" камней и в куче лежит "<<kol<<std::endl;
								if(kol==0){
									std::cout<<"Компьютер проиграл!"<<std::endl;
									return 0;
								}
								}break;
							case 0:std::cout<<"До следующей игры"<<std::endl;break;
							default:std::cout<<"Ошибка: Введи число от 1 до 3!"<<std::endl;break;
	}

}return 0;
}


