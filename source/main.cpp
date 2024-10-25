#include "headers.hpp"

typedef void(*logprintf_t)(char* format, ...);
logprintf_t logprintf;
void **ppPluginData;
extern void *pAMXFunctions;
PLUGIN_EXPORT bool PLUGIN_CALL Load(void **ppData)
{
    pAMXFunctions = ppData[PLUGIN_DATA_AMX_EXPORTS];
    logprintf = (logprintf_t)ppData[PLUGIN_DATA_LOGPRINTF];

		logprintf("  test plugin loaded");
    return 1;
}
PLUGIN_EXPORT void PLUGIN_CALL Unload()
{
    
}
AMX_NATIVE_INFO NATIVES_LIST[] =
{
    { 0, 0 }
};
PLUGIN_EXPORT unsigned int PLUGIN_CALL Supports()
{
    return SUPPORTS_VERSION | SUPPORTS_AMX_NATIVES;
}
PLUGIN_EXPORT int PLUGIN_CALL AmxLoad(AMX *amx)
{
    return amx_Register(amx, NATIVES_LIST, -1);
}
PLUGIN_EXPORT int PLUGIN_CALL AmxUnload(AMX *amx)
{
    return AMX_ERR_NONE;
} 