/**
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
 * 0===========================================================================0
 */

#ifndef  DRAGONSTONE_RESULT_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_RESULT_H_		//  if not, define it

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