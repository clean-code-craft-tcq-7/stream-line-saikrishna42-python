
#include"BMSParameter_DataGen.hpp"
#include "test/catch.hpp"
#include <sstream>
#include <iostream>
#include <string>


TEST_CASE("Sending 50 data")

{
  
  Data a;
  float incr=1;
  a.gen_Data(incr);
  std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());
    a.send_Data_2cmd();
    std::cout.rdbuf(p_cout_streambuf);
   
  //cover inferBreach
  REQUIRE(oss.str() == "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 ");
}

