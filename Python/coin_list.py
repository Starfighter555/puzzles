import requests
import json

def to_json():
    # JSON-Datei laden
    with open("coins_list.json", "r", encoding="utf-8") as f:
        coins = json.load(f)

    # Beispiel: Zugriff auf den Namen des ersten Coins
    print(coins[0]["name"])


def get_coins():
    # API-Endpunkt
    url = "https://api.coingecko.com/api/v3/coins/list"

    # HTTP GET-Anfrage senden
    response = requests.get(url)

    # Überprüfen, ob die Anfrage erfolgreich war
    if response.status_code == 200:
        coins = response.json()
        
        # Daten in eine JSON-Datei speichern
        with open("coins_list.json", "w", encoding="utf-8") as f:
            json.dump(coins, f, ensure_ascii=False, indent=4)
        
        print(f"Erfolgreich {len(coins)} Coins abgerufen und in 'coins_list.json' gespeichert.")
    else:
        print(f"Fehler beim Abrufen der Daten: {response.status_code}")

def main():# API-Endpunkt
    get_coins()
    to_json()

if __name__ == "__main__":
    main()