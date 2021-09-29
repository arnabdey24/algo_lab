cmake_minimum_required(VERSION 3.19)
project(Algorithm C)

set(CMAKE_C_STANDARD 11)

add_executable(Algorithm sort.c)
add_executable(graph graph.c)
add_executable(fractional_knapsack fractional_knapsack.c)
add_executable(binary_knapsack binary_knapsack.c)
add_executable(lcs lcs.c)
add_executable(matrix_chain_multiplication matrix_chain_multiplication.c)