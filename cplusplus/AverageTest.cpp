#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>

#include "average.h"
#include "AverageTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION( AverageTest );

void AverageTest::setUp()
{
  // Nothing to initialize here
}

void AverageTest::tearDown()
{
  // Nothing to destroy here
}

void AverageTest::test1()
{
  int values[]={};
  CPPUNIT_ASSERT_EQUAL(0.0, average(values,-3));
}

void AverageTest::test2()
{
  int values[]={};
  CPPUNIT_ASSERT_EQUAL(0.0, average(values,0));
}

void AverageTest::test3()
{
  /*  int values[]={1,2,3,4};
  double res=10.0/4.0;
  CPPUNIT_ASSERT_EQUAL(res, average(values,4));*/
}

void AverageTest::test4()
{
  /*  int values[]={-3,-2,-4};
      CPPUNIT_ASSERT_EQUAL(-3.0, average(values,3));*/
}


void AverageTest::test5()
{

}


void AverageTest::test6()
{

}

