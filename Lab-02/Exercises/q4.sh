#!/bin/bash

read -p "Enter number: " num1
#echo $number

for (( i=2; i<=num1; i++ ))
do
	if [[ $num1 -eq $i ]]
	then
		echo "Prime"
		break
	elif [[ $(($num1 % i)) -eq 0 ]]
	then
		echo "Not Prime"
		break
	fi
done
