#include "main.h"

bool Plugin::OnLoad() {

  RegisterNative<&Script::Test>("ExampleNative");
  
  return true;
}