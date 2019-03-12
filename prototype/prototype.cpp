#include<iostream>
class Button
{
public:
	virtual Button* clone() = 0;
	virtual void disp() = 0;
};
class ButtonFactory
{
	static Button *prototype[4];
public:
	static Button *getButton(int choice);

};
class checkbox : public Button
{
public:
	Button *clone()
	{
		return new checkbox;
	}
	virtual void disp()
	{
		cout<<"I am a checkbox\n";
	}
};
class radiobutton : public Button
{
public:
	Button *clone()
	{
		return new radiobutton;
	}
	virtual void disp()
	{
		cout<<"I am a radiobutton\n";
	}
};
class togglebutton : public Button
{
public:
	Button *clone()
	{
		return new togglebutton;
	}
	virtual void disp()
	{
		cout<<"I am a togglebutton\n";
	}
};
