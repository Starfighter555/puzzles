#!/bin/python3

import os

def solve(s):
    # Kapitalisiere jedes Wort korrekt
    result = ' '.join(word.capitalize() for word in s.split(' '))
    return result

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = solve(s)

    fptr.write(result + '\n')

    fptr.close()
