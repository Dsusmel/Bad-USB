#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function to simulate typing a key
void typeKey(int key){
  Keyboard.press(key); // Press the key
  delay(50); // Wait for 50 milliseconds
  Keyboard.release(key); // Release the key
}

void setup()
{
  // Initialize the Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  delay(1000); // Wait for 1 second

  Keyboard.press(KEY_LEFT_GUI); // Press the Windows key
  Keyboard.press('r'); // Press the 'r' key
  Keyboard.release('r'); // Release the 'r' key
  Keyboard.releaseAll(); // Release all keys

  delay(500); // Wait for 500 milliseconds

  Keyboard.print("notepad"); // Type "notepad"

  delay(500); // Wait for 500 milliseconds

  Keyboard.press(KEY_RETURN); // Press the Enter key
  Keyboard.release(KEY_RETURN); // Release the Enter key

  delay(1000); // Wait for 1 second

  Keyboard.print("Tvoje racunalo je hakirano!"); // Type the message "Tvoje racunalo je hakirano!"

  // End Payload

  // Stop the Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused loop function
void loop() {}
