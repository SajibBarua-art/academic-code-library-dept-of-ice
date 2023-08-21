#!/bin/bash
echo "Enter an alphabet"
read char
if [[ $char == 'a' || $char == 'e' || $char == 'i' || $char == 'o' || $char == 'u' ]];
then 
	echo "The alphabet is vowel."
else
	echo "The alphabet is consonant."
fi
