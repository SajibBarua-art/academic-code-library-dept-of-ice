#!/bin/bash

echo "Enter the number of terms in Fibonacci series: "
read num_terms

term1=0
term2=1
count=2

echo "Fibonacci series:"
echo -n "$term1 $term2 "

while [ $count -lt $num_terms ]; do
    next_term=$((term1 + term2))
    echo -n "$next_term "
    
    term1=$term2
    term2=$next_term
    
    count=$((count + 1))
done

echo
