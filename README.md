# Cat Programm

Dieses Programm ist eine einfache Implementierung des Unix-Befehls `cat` in C++. Es liest eine oder mehrere Dateien und gibt deren Inhalt auf dem Terminal aus. Zusätzlich unterstützt es die Option `-n`, um die Zeilen zu nummerieren.

## Verwendung

```bash
./programmname [Option(en)] [Dateien...]
```
### Option(en)
- `-n`: Nummeriert die Ausgabezeile

### Beispiele
- Inhalt einer Datei anzeigen
  ```bash
  ./programmname datei.txt
  ```
- Inhalt mehrerer Dateien anzeigen:
  ```bash
  ./programmname datei1.txt datei2.txt
  ```
- Inhalt mit Zeilennummern anzeigen:
  ```bash
  ./programmname -n datei.txt
  ```
- Von der Standardeingabe lesen und Zeilennummern hinzufügen:
  ```bash
  ./programmname -n
  ```
## Funktionen
- Dateiausgabe: Gibt den Inhalt von Dateien auf dem Terminal aus.
- Zeilennummerierung: Mit der Option `-n` werden die Zeilen nummeriert und die Ausrichtung passt sich automatisch der Anzahl der Zeilen an.
- Standardeingabe: Wenn keine Dateien angegeben sind, liest das Programm von der Standardeingabe (stdin).
