#pragma once
#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <vector>
#include <functional>
#include <string>
#include <fcntl.h>
#include <io.h>

class chapter02
{
public:
	static void startFunction();
	static void solution01();
	static void solution02();
	static void solution03();
	static void solution04();
	static void solution05();
	static void solution06();
	static void solution07();
	static void solution08();
	static void solution09();
	static void solution10();
	static void solution11();
	static void solution12();
	static void solution13();
	static void solution14();
	static void solution15();
	static void solution16();
	static void solution17();
	static void solution18();
	static void solution19();
	static void solution20();
	static void solution21();
	static void solution22();
	static void solution23();
	static void solution24();
	static void solution25();
	static void solution26();
	static void solution27();
	static void solution28();
	static void solution29();
	static void solution30();
	static void solution31();
	static void solution32();
	static void solution33();
	static void solution34();
	static void solution35();
	static void solution36();
	static void solution37();
	static void solution38();

	template<typename ...Arg>
	static double distance(Arg ...arg)
	{
		return sqrt(sum(arg...));
	}

	template<typename X1, typename X2, typename ...Rest>
	static double sum(X1 x1, X2 x2, Rest ...rest)
	{
		return pow(x2 - x1, 2) + sum(rest...);
	}

	template<typename X1, typename X2>
	static double sum(X1 x1, X2 x2)
	{
		return pow(x2 - x1, 2);
	}

	struct Vector
	{
		double x;
		double y;
	};

	template<typename ...Arg>
	static bool convex(Arg ...arg)
	{
		int result = foo(arg...);
		return result > 0 || result % 1000000 == 0;
	}

	static Vector getVector(double x1, double y1, double x2, double y2)
	{
		return { x2 - x1, y2 - y1 };
	}

	static int getSign(Vector v1, Vector v2)
	{
		int result = static_cast<int>(v1.x * v2.y - v1.y * v2.x);
		return result > 0 ? 1 : result < 0 ? -1000000 : 0;
	}

	template<typename ...Rest>
	static int foo(double x1, double y1, double x2, double y2, double x3, double y3, Rest ...rest)
	{
		return getSign(getVector(x1, y1, x2, y2), getVector(x2, y2, x3, y3)) + foo(x2, y2, x3, y3, rest...);
	}

	static int foo(double x1, double y1, double x2, double y2, double x3, double y3)
	{
		return getSign(getVector(x1, y1, x2, y2), getVector(x2, y2, x3, y3));
	}
};

