import time



start_time = time.time()

result = 0

for i in range(10000000):
    print(i)
    result += i

end_time = time.time()
process_time = end_time - start_time
print(process_time)
