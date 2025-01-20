import os 

def solve(s):
    # Direkte Verarbeitung von Listen
    result = ' '.join(word.capitalize() for word in s)
    return result

def main():
    fptr = open('output.txt', 'w')  # Schreibe die Ausgabe in eine Datei namens output.txt
    s = input().strip().split(' ')  # Konvertiere den String in eine Liste
    result = solve(s)
    fptr.write(result + '\n')
    fptr.close()
    

if __name__ == '__main__':
    main()