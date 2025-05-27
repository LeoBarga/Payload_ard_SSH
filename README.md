# Arduino Pro Micro - Payload Dimostrativo per Automazione Accesso Remoto

> ⚠️ **DISCLAIMER LEGALE E ETICO**  
> Questo progetto è fornito **esclusivamente a scopo educativo e dimostrativo**.  
> **Non deve essere utilizzato su sistemi di terze parti senza autorizzazione esplicita.**  
> L'uso improprio può violare la legge e comportare conseguenze penali.  
> L'autore **non è responsabile** per eventuali usi illeciti.

## Descrizione

Questo progetto utilizza un Arduino Pro Micro per emulare una tastiera e automatizzare una serie di comandi su un sistema Windows:

- Apre il terminale (`cmd`)
- Cambia la password dell'utente `Administrator`
- Installa e configura il server SSH integrato di Windows
- Apre la porta 22 nel firewall
- Visualizza l'indirizzo IP della macchina

Tutti i comandi vengono inviati tramite l'interfaccia USB-HID, simulando input da tastiera.

## Requisiti

- Arduino Pro Micro o compatibile con supporto HID (`Keyboard.h`)
- Sistema operativo: **Windows 10 o superiore**
- Privilegi amministrativi sul computer target
- IDE Arduino

## Avvertenze

- Usare **solo in ambienti controllati**, come test di laboratorio, sandbox o VM.
- Verificare che l'esecuzione automatica dei comandi non violi policy aziendali o scolastiche.
- L'utente deve accedere fisicamente al dispositivo target.
- Questo progetto se avviato senza essere ricontrollato può **cambiare la password di amministratore**.

## Come usarlo

1. Apri l'IDE Arduino e carica lo sketch sul tuo Arduino Pro Micro.
2. Inserisci il dispositivo nella macchina di test (Windows).
3. Dopo ~2 secondi, lo script inizierà automaticamente.
4. Verrà cambiata la password dell'utente `Administrator` e attivato il server SSH.

### Importante:
Lo script imposta la password `Nuova.pw` per l'account `Administrator`.  
Modifica lo sketch per usare una password o un account diverso prima dell'uso.

## Codice
 Il codice è basato sulla libreria [`Keyboard`](https://www.arduino.cc/reference/en/language/functions/usb/keyboard/), inclusa di default nelle board compatibili HID.

## Etica e legalità

Questo progetto intende mostrare:

- Le potenzialità di dispositivi HID per la sicurezza informatica
- Come possono essere sfruttati anche in contesti malevoli (awareness)
- L'importanza di limitare l'accesso fisico ai dispositivi

**Non si promuove l'uso per scopi offensivi.**

**L'autore declina ogni responsabilità per usi impropri di questo codice.**