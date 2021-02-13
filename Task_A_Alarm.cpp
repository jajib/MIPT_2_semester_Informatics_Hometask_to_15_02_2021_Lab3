#include <iostream>

int main ()
{
	int hours1, hours2, minutes1, minutes2, seconds1, seconds2;
	char buffer;
	long int time1, time2;
	
	std::cin >> hours1 >> buffer >> minutes1 >> buffer >> seconds1;
	std::cin >> hours2 >> buffer >> minutes2 >> buffer >> seconds2;
	
	time1 = hours1 * 3600 + minutes1 * 60 + seconds1;
	time2 = hours2 * 3600 + minutes2 * 60 + seconds2;
	
	std::cout << time1 << std::endl << time2 << std::endl << time2 - time1 << std::endl;
	std::cout << (time1 < time2 ? time2 - time1 : time2 - time1 + 24 * 3600);
		
	return 0;
}
