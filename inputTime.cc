#include <nan.h>
#include <windows.h>
#include <iostream>

#include "inputTime.h"

using namespace std; 

using Nan::New; 


//front-end of our C++ module
NAN_METHOD(getLastInputTime) {


/*
typedef struct tagLASTINPUTINFO {
  UINT  cbSize;
  DWORD dwTime;
} LASTINPUTINFO, *PLASTINPUTINFO;

From MSDN;
  A single tick represents one hundred nanoseconds 
  or one ten-millionth of a second. There are 10,000 ticks in a millisecond.
*/
  LASTINPUTINFO li; 
  li.cbSize = sizeof(LASTINPUTINFO);
  double lastInput_ticks = li.dwTime;
  info.GetReturnValue().Set(lastInput_ticks);
  


   

}




