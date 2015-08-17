#include <badUSB.h>

PROGMEM char payload[] = "Enter your powershell payload here!! ";
PROGMEM char powershell[] = "powershell";
PROGMEM char cmd[] = "cmd";

void setup()
{
  // disable timer 0 overflow interrupt (used for millis)
  TIMSK0&=!(1<<TOIE0); // ++
  usbDelay(5000);
  minimize();
  runCommand(cmd);
  usbPrint(payload);
  execute();
  closeWindow();
  maximize();
}

void loop()
{
  usbDelay(100);
}
