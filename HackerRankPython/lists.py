def list_opearation(liste, command, operation):
    # Ausführung der Operationen
        if operation == "insert":
            index, value = int(command[1]), int(command[2])
            liste.insert(index, value)
        elif operation == "print":
            print(liste)
        elif operation == "remove":
            value = int(command[1])
            liste.remove(value)
        elif operation == "append":
            value = int(command[1])
            liste.append(value)
        elif operation == "sort":
            liste.sort()
        elif operation == "pop":
            liste.pop()
        elif operation == "reverse":
            liste.reverse()
        else:
            print("Invalid operation")

def main():
    liste = []
    N = int(input())
    for _ in range(N):
        # Eingabe eines Befehls
        command = input().split()
        operation = command[0]
        list_opearation(liste, command, operation)


if __name__ == '__main__':
    main()