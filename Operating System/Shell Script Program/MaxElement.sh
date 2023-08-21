#!/bin/bash

echo "Enter the array elements separated by spaces:"
read -a array

max_number=${array[0]}

for num in "${array[@]}"; do
    if [ "$num" -gt "$max_number" ]; then
        max_number="$num"
    fi
done

echo "Maximum number in the array is: $max_number"
