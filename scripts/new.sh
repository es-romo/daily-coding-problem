#!/bin/sh

difficulties=("Easy" "Medium" "Hard")
languages=("Javascript" "Typescript" "Python" "C" "Java")
declare -A extensions_map=(["Javascript"]="js" ["Typescript"]="ts" ["Python"]="py" ["C"]="c" ["Java"]="java")

cd "$(dirname "$0")"
cd ..

read -p $'\e[36mEnter the day number: \e[0m' dayNumber

if [ -d "problems/$dayNumber" ]; then
    echo -e "\033[0;31mProblem $dayNumber already exists"
    exit 1
fi

PS3=$'\e[0;36mSelect a difficulty: \e[0m'
while true; do
    select difficulty in "${difficulties[@]}"; do
        if [ ! -z "$difficulty" ]; then
            break 2;
        fi
    done
done

PS3=$'\e[0;36mSelect a language: \e[0m'
while true; do
    select language in "${languages[@]}"; do
        if [ ! -z "$language" ]; then
            break 2;
        fi
    done
done

mkdir -p problems/$dayNumber
touch "problems/$dayNumber/solution.${extensions_map[$language]}"
touch problems/$dayNumber/problem.md
echo -e "difficulty=${difficulty}\nstatus=Incomplete" > problems/$dayNumber/.info
vim problems/$dayNumber/problem.md

echo -e $'\e[0;32mDone!'
