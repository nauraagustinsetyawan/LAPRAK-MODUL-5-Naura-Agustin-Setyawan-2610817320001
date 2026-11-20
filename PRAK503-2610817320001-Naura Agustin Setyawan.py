def maksimal(a, b):
    if a > b:
        return a
    return b

def minimal(a, b):
    if a < b:
        return a
    return b

def main():
    n = int(input("Masukkan jumlah bilangan (N): "))
    
    daftar_angka = list(map(int, input("Masukkan deretan angka (pisahkan spasi): ").split()))
    
    maks = -100000
    minim = 100000
    
    batas = 0
    while batas < n and batas < len(daftar_angka):
        nilai = daftar_angka[batas]
        maks = maksimal(maks, nilai)
        minim = minimal(minim, nilai)
        batas += 1
        
    print(maks, minim)

if __name__ == "__main__":
    main()