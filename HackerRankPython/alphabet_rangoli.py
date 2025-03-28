import string

def alphabet_rangoli(size):
    alpha = string.ascii_lowercase
    L = []
    for i in range(size):
        s = "-".join(alpha[i:size])
        L.append((s[::-1]+s[1:]).center(4*size-3, "-"))
    print('\n'.join(L[:0:-1]+L))

    
def main():
    n = int(input())
    alphabet_rangoli(n)

if __name__ == '__main__':
    main()