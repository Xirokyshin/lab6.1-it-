// UnitTest1.cpp
#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.1(it).cpp" // Підключення файлу з вашими функціями

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountElements)
        {
            const int size = 5;
            int testArray1[size] = { 1, 2, 3, 4, 5 }; 
            int testArray2[size] = { -1, -2, -3, -4, -5 }; 
            int testArray3[size] = { 4, 8, 12, 16, 20 }; 
            int testArray4[size] = { 2, 6, 10, 14, 18 }; 
            int testArray5[size] = { 2, 4, 6, 8, 10 }; 

            Assert::AreEqual(4, CountElements(testArray1, size));
            Assert::AreEqual(0, CountElements(testArray2, size));
            Assert::AreEqual(0, CountElements(testArray3, size));
            Assert::AreEqual(5, CountElements(testArray4, size));
            Assert::AreEqual(3, CountElements(testArray5, size));
        }
    };
}
