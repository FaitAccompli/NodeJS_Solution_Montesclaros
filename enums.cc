#include <nan.h>
#include <windows.h>
#include <iostream>
#include "enums.h"

using namespace std; 

using Nan::New; 

//front-end of our C++ module
NAN_METHOD(enumAttachedDisplays) { 
    info.GetReturnValue().Set(GetSystemMetrics(SM_CMONITORS));
}

