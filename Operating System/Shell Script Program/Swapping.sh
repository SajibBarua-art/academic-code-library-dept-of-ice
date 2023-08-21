#!/bin/bash

echo "Enter the first number: "
read num1

echo "Enter the second number: "
read num2

echo "Before swapping: num1 = $num1, num2 = $num2"

# Swapping logic using a temporary variable
temp=$num1
num1=$num2
num2=$temp

echo "
