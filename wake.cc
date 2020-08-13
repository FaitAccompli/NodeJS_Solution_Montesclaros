#include <nan.h>
#include <windows.h>
#include <iostream>

#include "wake.h"

using namespace std; 

using Nan::AsyncQueueWorker; 
using Nan::SetMethod; 

//front-end of our C++ module
NAN_METHOD(reqDisplayToWake) {

//macro-nan method, Grab the arguments to the function from the 'info' array
	// auto number = Nan::To<int>(info[0]).FromJust(); 
	// auto *callback = new Nan::Callback(info[1].As<v8::Function>()); 


      /*
      Workaround for wake problem: When the display attachments are turned
      off, the only way to turn it back on is to move the mouse. A simple
      mouse_event call using the MOUSEEVENTF_MOVE dwFlag with an overall
      displacement of 6 (dy = 6) can turn the displays back ON. 
      */
  Sleep(500);
  mouse_event(MOUSEEVENTF_MOVE, 0, 1, 0, GetMessageExtraInfo());
  Sleep(40); //no user intervention for 40 ms
  mouse_event(MOUSEEVENTF_MOVE, 0, -1, 0, GetMessageExtraInfo());
  info.GetReturnValue().Set(MOUSEEVENTF_MOVE);

}


