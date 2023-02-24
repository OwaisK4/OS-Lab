#!/bin/bash

read -p "Enter string: " string
echo $string
if [[ "x$string" = 'xcalc' ]];
then
	$(gnome-calculator)
fi
