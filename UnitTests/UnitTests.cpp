#include "pch.h"
#include "CppUnitTest.h"
#include "../CalculatorConsoleApp/Calculator.h"
#include "cmath"  //вычисление степеней

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(UnitTests)
	{
	public:

		TEST_METHOD(TestMethod1) //Сложение
		{
			int i = 0;
			int j = 17;
			int actual = i + j;
			Assert::AreEqual(17, actual);
		}

		TEST_METHOD(TestMethod2) //Вычитание
		{
			int i = 2;
			int j = 3;
			int actual = i - j;
			Assert::AreEqual(-1, actual);
		}

		TEST_METHOD(TestMethod3) //Умножение
		{
			int i = 0;
			int j = 11;
			int actual = i * j;
			Assert::AreEqual(0, actual);
		}

		TEST_METHOD(TestMethod4) //Деление
		{
			int i = 81;
			int j = 9;
			int actual = i / j;
			Assert::AreEqual(9, actual);
		}

		TEST_METHOD(TestMethod5) //Степень
		{
			int i = 2;
			int j = 5;
			int actual = pow(i, j);
			Assert::AreEqual(32, actual);
		}

		TEST_METHOD(TestMethod6) //Проценты
		{
			int i = 30;
			int j = 10;
			int actual = i * j / 100;
			Assert::AreEqual(3, actual);
		}
	};
}