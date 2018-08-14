#!/bin/bash
#the above is a bash library path
echo "What is your name?"
read name  #variable
mkdir $name
cd $name
touch $name
for i in 1 2 3 4 5
do  
touch $name$i.cpp
done


