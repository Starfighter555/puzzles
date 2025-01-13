def designe_door_map(n, m):
    for i in range(1, n, 2):
        print(('.|.' * i).center(m, '-'))
    print('WELCOME'.center(m, '-'))
    for i in range(n-2, 0, -2):
        print(('.|.' * i).center(m, '-'))
    

def main():
    inputs = input().split()
    designe_door_map(int(inputs[0]), int(inputs[1]))
    
if __name__ == '__main__':
    main()  