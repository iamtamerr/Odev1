print("Vücut Kitle Endeksi (BMI) Hesaplama Programına Hoşgeldiniz")
print("-"*60)
input("Hesaplamaya geçmek için enter tuşuna basınız...")
print("-"*10)


while True:
    weight = int(input("Kilonuz: "))
    height = float(input("Boyunuz (cm) : "))
    result = weight/(height/100)**2
    
    if result < 18.5:
        bmitype = "Zayıf"
    elif result > 18.5 and result < 24.9:
        bmitype = "Normal Kilolu"
    elif result > 25 and result < 30:
        bmitype = "Fazla Kilolu"
    elif result > 30 and result < 35:
        bmitype = "Tip 1 Obez"
    elif result > 35 and result < 40:
        bmitype = "Tip 2 Obez"
    else:
        bmitype = "Morbid Obez"

    print("Vücut Kitle İndeksiniz:",str(result)+" kg/m2")
    print("Bu sonuca göre vücut tipiniz:",bmitype)

