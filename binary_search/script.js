function binarySearch(list, item) {
    let low = 0
    let high = list.length - 1


    let countOperations = 0
    
    while (high >= low) {
        countOperations++
        let mid = Math.floor((low + high) / 2)
        let guess = list[mid]

        if (guess == item) return guess, countOperations

        if (guess > item) {
            high = mid - 1
        }

        if (guess < item) {
            low = mid + 1
        }
    }

}

const array = Array.from(Array(128).keys())

console.log(binarySearch(array, 1))