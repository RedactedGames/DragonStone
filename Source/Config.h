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
 * | DragonStone - Copyright (c) 2015 [Redacted] Games. All rights reserved.   |
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

/* 0===========================================================================0
 * | Namespace                                                                 |
 * 0===========================================================================0
 */
namespace DragonStone
{
	//Engine defines
	#define DS_PACKAGE				"DragonStone"
	#define DS_PACKAGE_AUTHOR		"[Redacted] Games"
	#define DS_PACKAGE_VERSION		0.1
    #define DS_IN_DEVELOPMENT       //Comment this line when building for final build.
	
	//OS defines
    #if defined(_WIN32) || defined(__WIN32__)
		#define DS_PLATFORM_WINDOWS
    #elif defined(__APPLE__) || defined(MACOSX) || defined(macintosh) || defined(Macintosh)
		#define DS_PLATFORM_MACOS
    #elif defined(linux) || defined(__linux)
		#define DS_PLATFORM_LINUX
    #elif defined(__FreeBSD__) || defined(__FreeBSD_kernel__)
        #define DS_PLATFORM_FREEBSD
    #else
        #define DS_PLATFORM_UNKNOWN
	#endif
	
	//Debug defines
    #if !defined(NDEBUG)
		#define DS_DEBUG
	#else
		#define DS_RELEASE
	#endif
	
	//DLL Exports
	//#define DS_DLL_RENDERER
}

#endif //DRAGONSTONE_CONFIG_H_