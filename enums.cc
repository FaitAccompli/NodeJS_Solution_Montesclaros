#include <nan.h>
#include <windows.h>

#include "enums.h"



using Nan::New; 

//front-end of our C++ module
NAN_METHOD(enumAttachedDisplays) { 
    info.GetReturnValue().Set(GetSystemMetrics(SM_CMONITORS));
}

