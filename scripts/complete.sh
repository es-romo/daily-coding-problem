#!/bin/bash

cd "$(dirname "$0")"
cd ..

if [ ! -z "$1" ]; then
    dayNumber=$1
else
    read -p $'\e[36mEnter the day number: \e[0m' dayNumber
fi

if [ ! -d "problems/$dayNumber" ]; then
    echo -e "\033[0;31mProblem $dayNumber does not exist"
    exit 1
fi

source problems/$dayNumber/.info
echo -e "difficulty=${difficulty}\nstatus=Complete" > problems/$dayNumber/.info

echo -e $'\e[0;32mDone!'
