#include<iostream>
#include<string.h>
#include"weather.cpp"
int weather::counter=0;
weather* weather::single_ptr = NULL;
class travel
{
	char city[20];
	
	float temp;
	float rainfall;
public:
	travel()
	{
		cout<<"\nEnter city name : ";
		cin>>city;
		temp = 25;
		rainfall = 90;
	}
	travel(char c[],float t, float r)
	{
		strcpy(city, c);
		temp=t;
		rainfall=r;
	}
	float absolute(float a)
	{
		if(a<0)
			return -1*a;
		return a;
	}
	void suggestTravel()
	{
		float optimum_temp=999, optimum_rain=999;
		int best_month = 0;
		weather* w = weather::getInstance();
		w->input();
		float* rain_data = w->get_rain();
		float* temp_data = w->get_temp();
		for(int i = 0;i < 12;i++)
		{
			if((absolute(temp_data[i]-temp)/temp + absolute(rain_data[i]-rainfall)/rainfall) < (optimum_temp + optimum_rain))
			{
				optimum_temp = absolute(temp_data[i] - temp)/temp;
				optimum_rain = absolute(rain_data[i] - rainfall)/rainfall;
				best_month = i;
			}
		}
		cout<<"\nThe optimum month to travel "<<city<<" is "<<(12 - best_month)<<" months prior to current month.\n"; 
	}
};
int main()
{	
	char c[10] = "wheat";
	travel f;
	f.suggestTravel();
}
// 24 25 26 17 14 24 34 26 18 19 20 22
// 100 102 110 102 110 113 140 120 161 123 142 190
