#include <badUSB.h>

char payload[] PROGMEM = "Enter your powershell payload here!! ";
char powershell[] PROGMEM = "powershell";
char cmd[] PROGMEM = "cmd";

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
