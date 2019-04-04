#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include "1_SeparateProg.h"

TEST_CASE("testing class in separate file") {
  TestProg myProg;

  CHECK(myProg.isEven());

  myProg.increment();

  CHECK(!myProg.isEven());
}
