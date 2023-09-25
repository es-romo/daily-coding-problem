const board = { length: 8, width: 8 }
const start = { x: 3, y: 5 }
const k = 3

function check(x,y,depth = 0) {
    if ( x < 0 || x >= board.length || y < 0 || y >= board.width )
        return 0
    if (depth == k)
        return 1
    let chance = 0;
    chance += (1/8) * check(x-1,y-2,depth + 1)
    chance += (1/8) * check(x+1,y-2,depth + 1)
    chance += (1/8) * check(x-1,y+2,depth + 1)
    chance += (1/8) * check(x+1,y+2,depth + 1)
    chance += (1/8) * check(x-2,y-1,depth + 1)
    chance += (1/8) * check(x-2,y+1,depth + 1)
    chance += (1/8) * check(x+2,y-1,depth + 1)
    chance += (1/8) * check(x+2,y+1,depth + 1)
    return chance;
}

console.log(check(start.x,start.y))