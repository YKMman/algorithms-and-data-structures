function findSmallest(arr) {
    let smallest = arr[0]
    let smallest_index = 0

    for (let i = 1; i < arr.length; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i]
            smallest_index = i
        }
    }

    return smallest_index
}




function selectionSort(arr) {
    let newArray = []

    for (let i = 0; i < arr.length; i++) {
        let smallest = findSmallest(arr)
        newArray.push(arr.pop(smallest))
    }
    return newArray
}

let result = selectionSort(Array.from(Array(10).keys()))
console.log(result)