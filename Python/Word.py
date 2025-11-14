word = input()
upper = 0
lower = 0

for c in word:
    if c.isupper():
        upper += 1
    else:
        lower += 1
        
if upper < lower or upper == lower:
    print(word.lower())
    
else:
    print(word.upper())
    
