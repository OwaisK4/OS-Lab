#!/bin/bash

Min(){ 
	if [[ $1 -lt $2 ]]; then
		Smallest=$1
	else
		Smallest=$2
	fi
}

read -p "Enter two whole numbers, Separated by space: " N1 N2
Min $N1 $N2
echo "The smallest is: " $Smallest
