/**********************************************************************
 *        Bell Numbers (Number of ways to Partition a Set)            *
 *********************************************************************/


/*********************************************************************
 *            Input:  n = 2                                          *
 *            Output: Number of ways = 2                             *
 *            Explanation: Let the set be {1, 2}                     *
 *                                { {1}, {2} }                       *
 *                                { {1, 2} }                         *
 ********************************************************************/
 


#include <stdio.h>

int BellNumber(int n);

int main()
{
	int i;
	int num;
	int value;

	printf("Enter the Number whose BellNumber you want: ");
	scanf("%d", &num);

	value = BellNumber(num);

	printf("BellNumber of %d is %d\n", num, value);

	return 0;
}

int BellNumber(int n)
{
	int i;
	int j;
	int bell[n+1][n+1];

	bell[0][0] = 1;

	for(i = 1; i < n+1; i++){
		bell[i][0] = bell[i-1][i-1];

		for(j = 1; j < n+1; j++){
			bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
		}
	}

	return bell[n][0];
}
