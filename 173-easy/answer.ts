let d: any = {
    bns: 3,
    foo: {
        a: 5,
        bar: {
            baz: 8
        }
    }
}

let flatten = (dictionary: any) => {
    let flat: any = {};

    for (let key in dictionary) {
    
        if (typeof dictionary[key] == "object") {

            const jefe = flatten(dictionary[key]);
            
            for (let z in jefe) {
                flat[key + '.' + z] = jefe[z]
            }

        } else {

            flat[key] = dictionary[key];
        
        } 
    }
    return flat
}

console.log(flatten(d))