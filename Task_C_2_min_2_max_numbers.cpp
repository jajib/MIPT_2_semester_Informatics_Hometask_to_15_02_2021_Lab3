#include <iostream>

int main ()
{
	int array_size;
	int min2, min1, max1, max2;
	int buffer;
	
	std::cin >> array_size;
	
	std::cin >> buffer;
	min2 = buffer;
	
	std::cin >> buffer;
	if (buffer <= min2)
	{
		min1 = min2;
		min2 = buffer;
	} else if (min2 < buffer)
	{
		min1 = buffer;
	}
	
	std::cin >> buffer;
	if (buffer <= min2)
	{
		max1 = min1;	
		min1 = min2;
		min2 = buffer;
	} else if (min2 < buffer && buffer <= min1)
	{
		max1 = min1;
		min1 = buffer;
	} else if (min1 < buffer)
	{
		max1 = buffer;
	}
	
	std::cin >> buffer;
	if (buffer <= min2)
	{
		max2 = max1;
		max1 = min1;
		min1 = min2;
		min2 = buffer;
	} else if (min2 < buffer && buffer <= min1)
	{
		max2 = max1;
		max1 = min1;
		min1 = buffer;
	} else if (min1 < buffer && buffer <= max1)
	{
		max2 = max1;
		max1 = buffer;
	} else if (max1 < buffer)
	{
		max2 = buffer;
	}
	
	for (int cnt = 0; cnt < array_size - 4; cnt++)
	{
		std::cin >> buffer;
		
		if (buffer < min2)
		{
			min1 = min2;
			min2 = buffer;
		} else if (min2 <= buffer && buffer < min1)
		{
			min1 = buffer;
		} else if (min1 <= buffer && buffer < max1)
		{
			
		} else if (max1 <= buffer && buffer < max2)
		{
			max1 = buffer;
		} else if (max2 <= buffer)
		{
			max1 = max2;
			max2 = buffer;
		}
	}

	std::cout << min1 + min2 << std::endl << max1 + max2;
}
