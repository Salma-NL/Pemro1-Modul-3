nilai = int(input())

if nilai == 0:
    print("Nol")
elif 0 < nilai < 10:
    print("Satuan")
elif 10 <= nilai <= 19:
    print("Belasan")
elif 20 <= nilai <= 99:
    print("Puluhan")
else:
    print("Anda Menginput Melebihi Limit Bilangan")