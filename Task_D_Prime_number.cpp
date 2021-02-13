#include <iostream>

int main ()
{
	int number_of_prime, prime_number = 0;
	
	std::cin >> number_of_prime;
	
	if (number_of_prime == 1)
	{
		std::cout << "2" << std::endl;
		return 0;
	}
	
	for (int i = 0, cnt2 = 3; i < number_of_prime - 1; cnt2++)
	{	
		for (int cnt = 2; cnt <= (cnt2 + cnt2 % 2) / 2; cnt++)
		{
			if (cnt2 % cnt == 0)
			{
				break;
			}
			
			if (cnt == (cnt2 + cnt2 % 2) / 2)
			{
				prime_number = cnt2;
				i++;
			}
		}
	}
	
	std::cout << prime_number << std::endl;
}
