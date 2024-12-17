#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float f ( float  );

main()
{
	float a;
	
	cout<<"enter a : "<<endl;
	cin>>a;
	
	cout<< f ( a );
}

float f ( float b )
{
	float i;
	float s = 0;
	
	for ( i = 1 ; i <= b ; i++ )
	{
		s = s + ( i ) / pow ( 3 , i );
	}
	return s;
}
