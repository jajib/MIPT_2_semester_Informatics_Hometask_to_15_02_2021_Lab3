#include <iostream>
#include <algorithm>

int main ()
{
	int points_number;
	int quarter1_points = 0, quarter2_points = 0, quarter3_points = 0, quarter4_points = 0;
	int buffer_x, buffer_y;
	int result_points_number;
	
	std::cin >> points_number;
	
	for (int cnt = 0; cnt < points_number; cnt++)
	{
		std::cin >> buffer_x >> buffer_y;
		
		if (buffer_x > 0 && buffer_y > 0)
		{
			quarter1_points++;
		}
		
		if (buffer_x < 0 && buffer_y > 0)
		{
			quarter2_points++;	
		}
		
		if (buffer_x < 0 && buffer_y < 0)
		{
			quarter3_points++;
		}
		
		if (buffer_x > 0 && buffer_y < 0)
		{
			quarter4_points++;
		}
	}
	
	result_points_number = std::max({quarter1_points, quarter2_points, quarter3_points, quarter4_points});

	if (result_points_number == quarter1_points)
	{
		std::cout << "1";
	} else if (result_points_number == quarter2_points)
	{
		std::cout << "2";
	} else if (result_points_number == quarter3_points)
	{
		std::cout << "3";
	} else if (result_points_number == quarter4_points)
	{
		std::cout << "4";
	}
				
	std::cout << std::endl << result_points_number;
	
	return 0;
}
