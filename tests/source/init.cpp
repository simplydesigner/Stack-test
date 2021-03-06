#include <stack.cpp>
#include <catch.hpp>
#include <iostream>
using namespace std;

SCENARIO("count", "[count]"){
  Stack<int> s;
  s.push(1);
  REQUIRE(s.count()==1);
}

SCENARIO("push", "[push]"){
  Stack<int> s;
  s.push(1);
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}

SCENARIO("pop", "[pop]"){
  Stack<int> s;
  s.push(1);
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}

SCENARIO("prisv", "[prisv]"){
  Stack<int> s;
  s.push(1);
  Stack<int> s2;
  s2=s;
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}

SCENARIO("copy", "[copy]"){
  Stack<int> s;
  s.push(1);
  Stack<int> s2(s);
  REQUIRE(s.count()==1);
  REQUIRE(s.pop()==1);
}

