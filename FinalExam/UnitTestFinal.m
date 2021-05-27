/** \file      FinalExamUnitTest1
 *  \brief     UnitTest
 *  \details   Test to make sure program is working
 *  \author    Siba Almohamed
 *  \version   0.1
 *  \date      27/5/2021
 *  \copyright University of Nicosia.
 */
#include "pch.h"
#include "CppUnitTest.h"
#include "../FinalExam/FinalExam.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FinalExamUnitTest1
{
    TEST_CLASS(FinalExamUnitTest1)
    {
    public:
        /*
        *Test case of sumOfRange
        */
        TEST_METHOD(TestsumOfRange1)
        {
         //Arrange
     
         //Act

         //Assert
            Assert::AreEqual(18, sum)
        }
    };
}
