#!/bin/bash

read -p "Enter the starting balance: " balance
echo "menu options"
echo "a) Deposit"
echo " b) Withdraw"
echo
read -p "Enter your selection: " selection
case $selection in
	a|A)
		read -p "Enter the deposit amount: " deposit
		((balance = $balance + $deposit))
	;;
	b|B)
		read -p "Enter the withdraw amount: " withdraw
		((balance = $balance - $withdraw))
	;;
	*)
		echo "ERROR! Invalid input was provided"
	;;
esac
echo "The final balance is: $balance"
