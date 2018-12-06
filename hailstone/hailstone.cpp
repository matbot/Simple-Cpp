/**********************************************
 * Function Description: This function
 * takes a positive integer arguement 
 * and passes it through a series of 
 * manipulations that will reduce the 
 * integer to a value of 1. The function
 * then returns how many steps were required
 * to reduce the value of that integer
 * to 1.
 * *******************************************/

int hailstone(int iceed) //Here's the hailstone function definition. hailstone takes an int argument and returns an int value.
{
	int iceSteppes = 0; //iceSteppes is a variable to store how many steps hailstone takes.

	while (iceed != 1) //This while loop will continue until the seed integer value becomes 1.
	{
		if (iceed % 2 == 0) //Testing if iceed is even.
			iceed /= 2; //If it is, iceed is set equal to itself divided by 2.
		else //If a positive integer isn't 1 or even, it is odd.
			iceed = (iceed * 3) + 1; //If odd, iceed is set equal to itself multiplied by three, plus one.

		iceSteppes++; //increment the loop counter.
	}
	
	return iceSteppes; //hailstone returns the int value of iceSteppes to main.
}
