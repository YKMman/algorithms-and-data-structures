def binary_search(sort_array, search_number):
    low=0
    high=len(sort_array) - 1
    count=0
    
    while high >= low:
        count+=1
        mid = (low + high) // 2
        guess = sort_array[mid]
        if guess == search_number:
            return guess,count
        elif guess > search_number:
            high = mid - 1
        elif guess < search_number:
            low = mid + 1
            
    return False
    
    
    
sort_array=list(range(128))
search_number=1
result = binary_search(sort_array, search_number)
print(result)