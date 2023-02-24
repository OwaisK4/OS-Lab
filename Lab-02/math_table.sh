#!/bin/bash

read -p "Enter number: " num
#echo $num

for i in {1..10};
do
	echo $(($num * $i))
done
