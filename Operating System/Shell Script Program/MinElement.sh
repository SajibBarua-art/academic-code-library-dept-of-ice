#!/bin/bash

echo "Enter the array elements separated by spaces:"
read -a array

min_number=${array[0]}

for num in "${array[@]}"; do
    if [ "$num" -lt "$min_number" ]; then
        min_number="$num"
    fi
done

echo "Minimum number in the array is: $min_number"
