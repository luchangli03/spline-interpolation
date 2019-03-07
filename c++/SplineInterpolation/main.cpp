
#include <iostream>
using namespace std;



#include "SplineInterpolation.h"




int main()
{
#define InputDataLen  5
#define OutputDataLen  ((InputDataLen+1)*10+1)

	float x_i[InputDataLen] = {
		1,2,3,4,5
	};
	float y_i[InputDataLen] = {
		19.6000000000000,	121.400000000000,	212.600000000000	,122.800000000000	,4.80000000000000,

	};

	float xn[OutputDataLen];
	float yn[OutputDataLen];

	for (int i = 0; i < OutputDataLen; i++)
	{
		xn[i] = i*0.1;
//		printf("%f ", xn[i]);
	}


	SplineInterpolation< InputDataLen, OutputDataLen>(x_i, y_i, xn, yn, FindPositionID_0, 0);

		
	for (int cnt = 0; cnt < OutputDataLen; cnt++)
	{
		printf("%.4f ", yn[cnt]);
	}
	printf("\n");

	return 0;
}
