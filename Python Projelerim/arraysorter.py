import numpy as np
liste = []
counter = 1

length = int(input("Kaç elemanlı bir dizi oluşturmak istiyorsunuz: "))
while length >= counter:
    
    dizi = int(input(f"Dizinin {counter}. Elemanı: "))
    liste.append(dizi)
    counter += 1


converted = np.sort(liste)
print(converted)




