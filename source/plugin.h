#ifndef SAMPPLUGIN_PLUGIN_H_
#define SAMPPLUGIN_PLUGIN_H_

#include "main.h"

class Plugin : public ptl::AbstractPlugin<Plugin, Script> {
	public:
   const char *Name() { return "SampPluginTemplate"; }

	 bool OnLoad();
};

#endif