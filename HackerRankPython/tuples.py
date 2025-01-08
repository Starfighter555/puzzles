
def main():
    arr = list(map(int, input().split()))  # Lies die Zahlen und wandle sie in eine Liste um
    t = tuple(arr)  # Erstelle ein Tuple aus der Liste
    h = hash(t)  # Berechne den Hash des Tuples
    print(h)  # Gib den Hash des Tuples aus

if __name__ == "__main__": 
    main()
