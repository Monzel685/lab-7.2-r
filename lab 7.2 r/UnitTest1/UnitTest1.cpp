#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 7.2 r/lab 7.2 r.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int rowCount = 3;
            const int colCount = 5;
            int* a[rowCount];

            int row0[] = { 1, 3, 5, 7, 9 };
            int row1[] = { 2, 8, 6, 4, 10 };
            int row2[] = { 3, 1, 7, 8, 11 };
            a[0] = row0;
            a[1] = row1;
            a[2] = row2;

            int expectedSum = 6 + 10; // —ума максимальних елемент≥в у непарних стовпц€х (1, 3)
            int actualSum = 0;

            // «найти максимальн≥ значенн€ у непарних стовпц€х
            for (int j = 1; j < colCount; j += 2)
            {
                int max = a[0][j];
                findMaxInColumn(a, rowCount, j, 0, max);
                actualSum += max;
            }

            Assert::AreEqual(expectedSum, actualSum);
        }
    };
}
