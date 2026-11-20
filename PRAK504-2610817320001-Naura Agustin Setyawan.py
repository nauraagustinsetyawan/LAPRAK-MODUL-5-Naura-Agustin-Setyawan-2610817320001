def reverse_angka(n):
    return int(str(n)[::-1])

def main():
    a, b = map(int, input().split())

    a_aksen = reverse_angka(a)
    b_aksen = reverse_angka(b)

    c = a_aksen + b_aksen

    print(reverse_angka(c))

if __name__ == "__main__":
    main()