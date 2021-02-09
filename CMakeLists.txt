cmake_minimum_required(VERSION 3.17)
project(myBigInteger)

set(CMAKE_CXX_STANDARD 14)

add_executable(myBigInteger main.cpp BigInteger.cpp BigInteger.h)