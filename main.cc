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
	std::cout << "� ���� ��������� "<< kol <<" ������."<<std::endl;
	while(kol>0){
		std::cout <<"�����, ������ �� 1 �� 3 ������"<< std::endl;
		std::string s;
		std::getline(std::cin,s);
		std::stringstream ss(s);
		ss>>v;

		if(ss.fail()){
			v=-1;
		}
					if(std::cin.eof()){
						std::cout<<"��"<<std::endl;
						return 1;
					}
					switch(v){
							case 1:{
								kol=kol-1;
								if(kol==0){
									std::cout<<"����� ��������!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								number = 1 + gen() % (3-1+1);

								if(number>kol){
									number=kol;
								}
								kol=kol-number;
								std::cout<<"-1 ������. ��� ��� - ���� "<< number <<" ������ � � ���� ����� "<<kol<<std::endl;
								if(kol==0){
									std::cout<<"��������� ��������!"<<std::endl;
									return 0;
								}

							}break;
							case 2:{
								kol=kol-2;
								if(kol==0){
									std::cout<<"����� ��������!!!!!!!!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								number = 1 + gen() % (3-1+1);

								if(number>kol){
									number=kol;
								}
								kol=kol-number;
								std::cout<<"-2 �����. ��� ��� - ���� "<< number <<" ������ � � ���� ����� "<<kol<<std::endl;
								if(kol==0){
									std::cout<<"��������� ��������!"<<std::endl;
									return 0;
								}
								}break;
							case 3:{
								kol=kol-3;
								if(kol==0){
									std::cout<<"����� ��������!!!!!!!"<<std::endl;
									return 0;
								}
								std:: minstd_rand gen(time(nullptr));
								number = 1 + gen() % (3-1+1);

								if(number>kol){
									number=kol;
								}
								kol=kol-number;
								std::cout<<"-3 �����. ��� ��� - ���� "<< number<<" ������ � � ���� ����� "<<kol<<std::endl;
								if(kol==0){
									std::cout<<"��������� ��������!"<<std::endl;
									return 0;
								}
								}break;
							case 0:std::cout<<"�� ��������� ����"<<std::endl;break;
							default:std::cout<<"������: ����� ����� �� 1 �� 3!"<<std::endl;break;
	}

}return 0;
}


