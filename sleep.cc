#include <nan.h>
#include <windows.h>
#include <iostream>

#include "sleep.h"


using namespace std; 



using Nan::AsyncQueueWorker; 
using Nan::SetMethod; 

const int MONITOR_OFF = 2;

//front-end of our C++ module
NAN_METHOD(reqDisplayToSleep) {

 
/*
LRESULT SendMessage (
  HWND   hWnd, handle to the window whose window will receive the message
  UINT   Msg, specifies the message to be sent, in our case a WM_SYSCOMMAND
  WPARAM wParam, additional message-specific information, in our case SC_MONITORPOWER
  LPARAM lParam, additional message-specific information, in our casee: 
  1 (the display is going to low power state)
);
*/ 
  Sleep(500); //no human intervention for half a second. 
  int returnValue = SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, MONITOR_OFF);
  info.GetReturnValue().Set(returnValue); 



}




