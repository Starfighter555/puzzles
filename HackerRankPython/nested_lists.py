def second_lowest_grade_name(records):
    # Sortiert die Liste records basierend auf der Note 
    # (zweites Element der inneren Listen).
    records.sort(key=lambda x: x[1]) #
    lowest_grade = records[0][1] #Speichert die niedrigste Note (erste Note der sortierten Liste)
    for record in records:  # Iteriert über die Liste records
        if record[1] > lowest_grade: # Sucht die erste Note, die größer als die niedrigste Note ist, also die zweitniedrigste Note
            second_lowest = record[1] # Speichert diese Note in der Variable second_lowest und bricht die Schleife.
            break
    # Erstellt eine Liste mit den Namen aller Schüler, die die zweitniedrigste Note haben.
    second_lowest_names = [record[0] for record in records if record[1] == second_lowest]
    # Sortiert die Namen alphabetisch 
    # (falls es mehrere Schüler mit der zweitniedrigsten Note gibt).
    second_lowest_names.sort()
    # Gibt die Namen der Schüler, getrennt durch Zeilenumbrüche, als String zurück.
    return "\n".join(second_lowest_names) 

def main():
    records = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        records.append([name, score])
    second_lowest_names = second_lowest_grade_name(records)
    print(second_lowest_names)

if __name__ == "__main__":
    main()  