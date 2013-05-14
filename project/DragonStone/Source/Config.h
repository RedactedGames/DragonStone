/*
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
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | License:                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * | DragonStone - Copyright (c) [Redacted Games]                              |
 * |                                                                           |
 * | This software is provided 'as-is', without any express or implied warranty|
 * | In no event will the authors be held liable for any damages arising from  |
 * | the use of this software.                                                 |
 * |                                                                           |
 * | Permission is granted to anyone to use this software for any purpose,     |
 * | including commercial applications, and to alter it and redistribute it    |
 * | freely, subject to the following restrictions:                            |
 * |                                                                           |
 * | 1. The origin of this software must not be misrepresented; you must not   |
 * |  claim that you wrote the original software. If you use this software in  |
 * |  a product, an acknowledgment in the product documentation would be       |
 * |  appreciated but is not required.                                         |
 * |                                                                           |
 * | 2. Altered source versions must be plainly marked as such, and must not   |
 * |  be misrepresented as being the original software.                        |
 * |                                                                           |
 * | 3. This notice may not be removed or altered from any source distribution.|
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