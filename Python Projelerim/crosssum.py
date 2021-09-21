sayi = input("Rakamlarının toplanmasını istediğiniz sayı: ")
list = []

for rakam in sayi:
    list.append(rakam)

for i in range(0,len(list)):
    list[i] = int(list[i])

print(sum(list))



