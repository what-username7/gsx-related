#ifndef IENGINEGSX_H
#define IENGINEGSX_H
#ifdef _WIN32
#pragma once
#endif

#include "interface.h"

class IEngineGSX : public IBaseInterface
{
public:
	// Returns current MP3 trackname
	virtual const char* GetCurrentTrack( void ) = 0;

	// Prints a colored, printf-style message to VGUI2 game console
	virtual void ConsoleColorPrintf( int r, int g, int b, const char* fmt, ... ) = 0;

	// gEngfuncs.pfnDrawSetTextColor, but with an alpha component
	// NOTE: All arguments are in [0...1] range
	virtual void DrawSetTextColor( float r, float g, float b, float a ) = 0;
};

#define ENGINE_GSXAPI_INTERFACE_VERSION "GSXEngine001"

#endif // IENGINEGSX_H
