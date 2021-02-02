const recurringCharacter = (string: string)=>{
    let previousChar = null;
    for (let currentChar of string) {
        if (currentChar == previousChar) {
            return currentChar;
        }
        previousChar = currentChar;
    }
    return null;
}

console.log(recurringCharacter(Deno.args[0]));