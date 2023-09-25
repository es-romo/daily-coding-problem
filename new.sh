#!/bin/sh

languages=("Javascript" "Typescript" "Python")
declare -A extensions_map=(["Javascript"]="js" ["Typescript"]="ts" ["Python"]="py")

cd $(dirname $0)

PS3=$'\e[0;36mSelect a language: \e[0m'
while true; do
    select language in "${languages[@]}"; do
        if [ ! -z "$language" ]; then
            break 2;
        fi
    done
done

read -p $'\e[36mEnter the day number: \e[0m' dayNumber

if [ -d "problems/$dayNumber" ]; then
    echo -e "\033[0;31mProblem $dayNumber already exists"
    exit 1
fi

mkdir -p problems/$dayNumber
touch "problems/$dayNumber/solution.${extensions_map[$language]}"
touch problems/$dayNumber/README.md
vim problems/$dayNumber/README.md

echo -e $'\e[0;32mDone!'
