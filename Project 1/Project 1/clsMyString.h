#pragma once
#include"clsMyStack.h"
using namespace std;

template <class T>
class clsMyString 
{
protected:
	clsMyStack<T>_MyList;
	T _Value;
public:
	
	void SetVlaue(T Value)
	{
		_Value = Value;
	}
	T GetValue()
	{
		return _Value;
	}

};

