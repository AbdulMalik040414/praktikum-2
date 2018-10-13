#include <iostream>

int main()
{
	int a,b,c;

	std::cout << "masukan nilai pertama : ";
	std::cin >>a;
	std::cout << "masukan nilai kedua : ";
	std::cin >>b;
	std::cout << "masukan nilai ketiga : ";
	std::cin >>c;

	if (a>b)
	{
		if(a>c)
			std::cout << "bilangan terbesar adalah : " << a;
		else
			std::cout << "bilangan terbesar adalah : " << c;
	}
	
	else
	{
		if(b>c)
			std::cout << "bilangan terbesar adalah : " << b;
		else
			std::cout << "bilangan terbesar adalah : " << c;
	}
	return 0;
}
