#include <iostream>
#include "Sales_item.h"
int main()
{
	std::cout << "enter two numbers" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "the product of" << v1;
	std::cout << "and" << v2;
	std::cout << "is" << v1 * v2 << std::endl;
	int i = 50,sum=0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	std::cout << "totel equel" << sum << std::endl;
	std::cout << "enter two numbers"<< std::endl;
	int a = 0, b = 0;
	std::cin >> a >> b;
	
	if (a <= b)
	{
		if (a < b-1)
		{
			while (a < b - 1)
			{
				++a;
				std::cout << a << std::endl;
				
			}
			

		}
		else
			std::cout << "no number" << std::endl;
	}
	else
	{
		if (b < a - 1)
		{

			while (b < a - 1)
			{
				b++;
				std::cout << b << std::endl;
			}
		}
		else
		{
			std::cout << "no number" << std::endl;
		}

		
	}
	 std::cout << "enter the numbers" << std::endl;
	 int c = 0, d = 0;
	while (std::cin >> c)
	{
		d += c;
	}
	std::cout << "the sum of all the numbers is" << d << std::endl;


	int currval = 0, val = 0;
	if (std::cin >> currval)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (currval == val)
			{
				cnt++;

			}
			else
			{
				std::cout << currval << "occurs" << cnt << "times" << std::endl;
				currval = val;
				cnt = 1;
			}
		}
		std::cout << currval << "occurs" << cnt << "times" << std::endl;
	}
	else
		//std::cout << currval << "occurs" << cnt << "times" << std::endl;
		std::cout << "zh" << std::endl;
	
	

	Sales_item item1,item2;
	std::cin >> item1>>item2;
	std::cout << item1 + item2 << std::endl;

	Sales_item item3, item4;
	if (std::cin >> item3)
	{
		while (std::cin >> item4)
		{
			if (item3.isbn() == item4.isbn())
			{
				item3 += item4;
			}
			else
				std::cout << item3 << std::endl;
			item3 = item4;
		}
		std::cout << item3 << std::endl;
	}


	return 0;


}