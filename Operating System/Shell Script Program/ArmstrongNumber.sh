#!/bin/bash

echo "Enter a number: "
read number

original_number=$number
sum=0

while [ $number -gt 0 ]; do
    digit=$((number % 10))
    sum=$((sum + digit * digit * digit))
    number=$((number / 10))
done

if [ $original_number -eq $sum ]; then
    echo "$original_number is an Armstrong number."
else
    echo "$original_number is not an Armstrong number."
fi
