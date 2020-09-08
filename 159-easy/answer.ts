const recurringCharacter = (string:String)=>{
    for (let currentChar of string) {
        let previousChar;
        if (currentChar == previousChar) {
            return currentChar;
        }
        previousChar = currentChar;
    }
    return null;
}

console.log(recurringCharacter(Deno.args[0]));