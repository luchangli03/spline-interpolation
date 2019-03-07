#include "SplineInterpolation.h"




// find the index i where xn >= x_i[i]
int FindPositionID_0(float *x_i, float xn, int InputDataLen, float InterplotGap)
{
#define X0_i_FirstPixel		1.0f

	int i = xn - X0_i_FirstPixel;

	return i;
}



// find the index i where xn >= x_i[i]
int FindPositionID_search(float *x_i, float xn, int InputDataLen, float UserPara)
{
	int i;
	for (i = 0; i < InputDataLen; i++)
	{
		if (xn >= x_i[i])
		{
			break;
		}
	}

	return i;
}


