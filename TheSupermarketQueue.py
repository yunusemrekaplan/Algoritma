def queue_time(customers, n):
    arr = [0]*n
    for i in customers:
        arr[0] += i
        arr.sort()
    return max(arr)