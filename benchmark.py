import math
count = 1
for i in range(3,2000000,2):
    is_prime = True
    square = int(math.sqrt(i))+1
    for j in range(3,square,2):
        if i%j==0:
            is_prime = False
            break
    if is_prime == True:
        count += 1
print(count)