#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>


class AverageTest : public CppUnit::TestFixture
{
 
  CPPUNIT_TEST_SUITE( AverageTest );
  CPPUNIT_TEST( test1 );
  CPPUNIT_TEST( test2 );
  CPPUNIT_TEST( test3 );
  CPPUNIT_TEST( test4 );
  CPPUNIT_TEST( test5 );
  CPPUNIT_TEST( test6 );
  CPPUNIT_TEST_SUITE_END();
private:
  // No private variables here :-(
public:
  void setUp();
  void tearDown();
  void test1();
  void test2();
  void test3();
  void test4();
  void test5();
  void test6();
};
