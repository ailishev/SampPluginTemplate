#include "main.h"

PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports() {
  return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES | SUPPORTS_PROCESS_TICK;
}

PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData) {
  return Plugin::DoLoad(ppData);
}

PLUGIN_EXPORT void PLUGIN_CALL Unload() { Plugin::DoUnload(); }

PLUGIN_EXPORT void PLUGIN_CALL AmxLoad(AMX *amx) { Plugin::DoAmxLoad(amx); }

PLUGIN_EXPORT void PLUGIN_CALL ProcessTick() { Plugin::DoProcessTick(); }