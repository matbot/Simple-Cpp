/***************************************
 * Function Description: This function takes
 * three int values by reference and returns
 * those values in ascending order.
 * ************************************/

void smallSort(int& a, int& b, int& c) //the function definition has a void return type as the parameters by reference will be sent back to the main method, so no return value is needed.
{
	int min, mid, max; //these int variables will hold values for sorting.
	
	//test a againt the other values.
	if (a < b && a < c) //if a is the smallest,
		min = a; //it is the minimum.
	else if (a > b && a > c) //if a is the largest,
		max = a; //it is the maximum.
	else //if it is neither the largest or the smallest, 
		mid = min = max = a; //it is definitely the middle value and may be the min and max as well if all values are equal.

	//test b against the other values.
	if (b <= a && b <= c)
		min = b;
	else if (b >= a && b >= c)
		max = b;
	else 
		mid = b;
	//test c against the other values.
	if (c < a && c < b)
		min = c;
	else if (c > a && c > b)
		max = c;
	else
		mid = c;
	
	//set the parameters by reference equal to the sorted values so that they are passed back to the main function.
	a = min;
	b = mid;
	c = max;
}
