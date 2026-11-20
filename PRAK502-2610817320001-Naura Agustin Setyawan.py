def mutlak(angka):
    if angka < 0:
        return -angka
    return angka

def hitung(nilai1, nilai2):
    selisih = nilai1 - nilai2
    return mutlak(selisih)

def main():
    masukan = input("Masukkan x1, y1, x2, dan y2 (pisahkan dengan spasi): ")
    
    x1, y1, x2, y2 = map(int, masukan.split())
    
    hasil = hitung(x1, x2) + hitung(y1, y2)
    
    print("Output Jarak:", hasil)

if __name__ == "__main__":
    main()