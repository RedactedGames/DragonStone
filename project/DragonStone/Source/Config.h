/**
 * 0===========================================================================0
 * | Config.h                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Author        : Joseph Stuhr                                            |
 * |   E-mail        : JpDeathBlade@gmail.com                                  |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | Code Description:                                                         |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Internal Config file for default variables.                             |
 * 0===========================================================================0
 */

#ifndef  DRAGONSTONE_CONFIG_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_CONFIG_H_		//  if not, define it

namespace DragonStone
{
	//Engine defines
	#define DS_PACKAGE				"DragonStone"
	#define DS_PACKAGE_AUTHOR		"[Redacted] Games"
	#define DS_PACKAGE_VERSION		0.1
	
	//OS defines
	#ifdef SFML_SYSTEM_WINDOWS
		#define DS_PLATFORM_WINDOWS
	#endif
	
	#ifdef SFML_SYSTEM_MACOS
		#define DS_PLATFORM_MACOS
	#endif
	
	#ifdef SFML_SYSTEM_LINUX
		#define DS_PLATFORM_LINUX
	#endif
	
	//Debug defines
	#ifdef SFML_DEBUG
		#define DS_DEBUG
	#elif
		#define DS_RELEASE
	#endif
	
	//DLL Exports
	//#define DS_DLL_RENDERER
}

#endif //DRAGONSTONE_CONFIG_H_