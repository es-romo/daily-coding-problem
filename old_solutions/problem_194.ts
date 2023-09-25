const intersectedSegments = ( a : number[], b : number[] )=>{
    let total: number = 0;
    for (let i : number = 0; i < a.length; i++) {
        for (let j = 0; j < a.length; j++) {
            if (b[j] < a[i] && a[j] > b[i]) {
                total++;
            }
        }
    }
    return total;
}

console.log(intersectedSegments([2,3,4,5],[4,5,1,3])); // 4
console.log(intersectedSegments([1,3,4,5],[3,2,5,4])); // 2