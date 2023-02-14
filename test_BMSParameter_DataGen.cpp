
#include"BMSParameter_DataGen.hpp"
#include "test/catch.hpp"
#include <sstream>
#include <iostream>



TEST_CASE("soc 50 data")

{
  
  SOC a;
  float incr=1;
  a.gen_socData(incr);
  std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());
    a.send_socData_2cmd();
    std::cout.rdbuf(p_cout_streambuf);
   
  //cover inferBreach
  REQUIRE(oss.str() == "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 ");
}

TEST_CASE("charge data 50 data")

{
  
  SOC a;
  float incr=0.1;
  a.gen_socData(incr);
  std::ostringstream oss;
    std::streambuf* p_cout_streambuf = std::cout.rdbuf();
    std::cout.rdbuf(oss.rdbuf());
    a.send_socData_2cmd();
    std::cout.rdbuf(p_cout_streambuf);
   
  //cover inferBreach
  REQUIRE(oss.str() == "0.1 0.2 0.3 0.4 0.5 0.6 0.7 0.8 0.9 1 1.1 1.2 1.3 1.4 1.5 1.6 1.7 1.8 1.9 2 2.1 2.2 2.3 2.4 2.5 2.6 2.7 2.8 2.9 3 3.1 3.2 3.3 3.4 3.5 3.6 3.7 3.8 3.9 4 4.1 4.2 4.3 4.4 4.5 4.6 4.7 4.8 4.9 5 ");
}

