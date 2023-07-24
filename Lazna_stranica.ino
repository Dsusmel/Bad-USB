#include <HID-Project.h>
#include <HID-Settings.h>

void setup()
{
  // Initialize the Keyboard and Mouse
  Keyboard.begin();

  // Start Payload
  delay(1000); // Wait for 1 second

  Keyboard.press(KEY_LEFT_GUI); // Press the Windows key
  Keyboard.press('r'); // Press the 'r' key
  Keyboard.release('r'); // Release the 'r' key
  Keyboard.releaseAll(); // Release all keys

  delay(500); // Wait for 500 milliseconds

  Keyboard.print("chrome"); // Type "chrome"

  delay(500); // Wait for 500 milliseconds

  Keyboard.press(KEY_RETURN); // Press the Enter key
  Keyboard.release(KEY_RETURN); // Release the Enter key

  delay(5000); // Wait for 5 seconds for Chrome to open

  // Type "pranx" in the search bar and press Enter
  Keyboard.print("pranx.com");
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(5000); // Wait for 5 seconds for the website to load

  // Use Tab key to navigate 
  for (int i = 0; i < 5; i++) { 
    Keyboard.press(KEY_TAB);
    Keyboard.release(KEY_TAB);
    delay(100); // wait for 500 milliseconds after each press
  }

  // Press Enter key to select 
  delay(500); // Wait for 500 milliseconds
  Keyboard.press(KEY_RETURN);
  Keyboard.release(KEY_RETURN);

  delay(5000); // Wait for 5 seconds for the website to load

  // Send the F11 key to enter full screen mode
  Keyboard.press(KEY_F11);
  Keyboard.release(KEY_F11);

  delay(1000); // Wait for 1 second

  // End Payload

  // Stop the Keyboard 
  Keyboard.end();
}

// Unused loop function
void loop() {}
