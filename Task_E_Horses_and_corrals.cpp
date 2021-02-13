#include <iostream>

bool IsAllHorsesInCorrals(int min_dist, int* corrals_coord, int horses_number, int corrals_number)
{
	int horses_inside = 1, left_corral = corrals_coord[0];
	for (int cnt = 0; cnt < corrals_number; cnt++)
	{
		if (corrals_coord[cnt] - left_corral >= min_dist)
		{
			horses_inside++;
			left_corral = corrals_coord[cnt];
		}
	}	

	return horses_inside >= horses_number;
};

int main ()
{
	int horses_number, corrals_number;
	std::cin >> corrals_number >> horses_number;
	int* corrals_coord = new int[corrals_number];
	
	for (int i = 0; i < corrals_number; i++)
	{
		std::cin >> corrals_coord[i];
	}
	
	int min_dist_from = 0, min_dist_to = corrals_coord[corrals_number - 1] - corrals_coord[0]; 
	
	while (min_dist_to - min_dist_from > 1)
	{
		if ( IsAllHorsesInCorrals( ( min_dist_to + min_dist_from ) / 2, corrals_coord, horses_number, corrals_number ) )
		{
			min_dist_from = ( min_dist_to + min_dist_from ) / 2;
		} else
		{
			min_dist_to   = ( min_dist_to + min_dist_from ) / 2;
		}
	}

	std::cout << min_dist_from;
}
