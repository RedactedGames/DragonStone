/*
 * 0===========================================================================0
 * | Result.h                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Author        : Joseph Stuhr                                            |
 * |   E-mail        : JpDeathBlade@gmail.com                                  |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | Code Description:                                                         |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Result type for function returns.                                       |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | License:                                                                  |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * | DragonStone - Copyright (c) 2013 [Redacted] Games. All rights reserved.   |
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

#ifndef  DRAGONSTONE_RESULT_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_RESULT_H_		//  if not, define it

/* 0===========================================================================0
 * | Namespace                                                                 |
 * 0===========================================================================0
 */
namespace DragonStone
{
	typedef enum
	{
		OK = 0,								/* No errors. */

		ERROR_UNKNOWN,						/* Unknown error. */
		ERROR_FAILEDTOLOADRESOURCE_ICON,	/* Failed to load icon. */
		
		RESULT_UNKNOWN,						/* Unknown result, no error. */
		RESULT_REFERENCE_DECREMENTED,		/* Temp */
		RESULT_REFERENCE_DELETED,			/* Temp */

		RESULT_FORCEINT = 65536				/* Makes sure this enum is signed 32bit. */
	} RESULT;

	static const std::string ErrorString(DragonStone::RESULT _errorCode)
	{
		switch(_errorCode)
		{
			case OK									:	return "No errors.";

			case ERROR_UNKNOWN						:	return "Unknown error.";
			case ERROR_FAILEDTOLOADRESOURCE_ICON	:	return "Failed to load game resource: ICON.";
			
			case RESULT_UNKNOWN						:	return "Unknown result, no error.";

			case RESULT_FORCEINT					:	return "Force Int: You shouldn't get this.";
			default									:	return "No error string.";
		};
	}
}

#endif //DRAGONSTONE_RESULT_H_