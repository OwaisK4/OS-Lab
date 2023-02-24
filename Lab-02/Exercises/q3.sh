#!/bin/bash

read -p "Enter num1: " num1
read -p "Enter num2: " num2
#echo $number

if [[ $num1 -lt $num2 ]]
then
	echo "Number1 < number2."
else
	echo "Number1 > number2."
fi
