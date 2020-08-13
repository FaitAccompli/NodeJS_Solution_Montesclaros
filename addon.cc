//addon.cc
#include <nan.h>
#include "enums.h"
#include "sleep.h"
#include "wake.h"
#include "inputTime.h"


using v8::FunctionTemplate;
using v8::Object;
using v8::String;
using Nan::GetFunction;
using Nan::New;
using Nan::Set;



NAN_MODULE_INIT(InitAll) {
	Set(target, New<String>("enumAttachedDisplays").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(enumAttachedDisplays)).ToLocalChecked());

  Set(target, New<String>("reqDisplayToSleep").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(reqDisplayToSleep)).ToLocalChecked());

  Set(target, New<String>("reqDisplayToWake").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(reqDisplayToWake)).ToLocalChecked());

  Set(target, New<String>("getLastInputTime").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(getLastInputTime)).ToLocalChecked());
}
NODE_MODULE(addon, InitAll)