#include<iostream>
using namespace std;
class weather
{
	weather()
	{
		counter++;
	}
	static weather* single_ptr;
	static int counter;
	float rain_data[12];
	float temp_data[12];
public:
	void input()
	{
		cout<<"\nEnter the 12 months temperature : ";
		for(int i = 0;i < 12;i++)
		{
			cin>>temp_data[i];
		}
		cout<<"\nEnter the 12 months rainfall : ";
		for(int i = 0;i < 12;i++)
		{
			cin>>rain_data[i];
		}
	}
	float* get_rain()
	{
		return rain_data;
	}
	float* get_temp()
	{
		return temp_data;
	}
	static weather* getInstance()
	{
		if(single_ptr == NULL)
			single_ptr = new weather();
		return single_ptr;
	}
	void printCount()
	{
		cout<<"\nCounter = "<<counter<<endl;
	}
};

