#ifndef  DRAGONSTONE_RESULTS_H_	// Check to see if this .h is defined
#define  DRAGONSTONE_RESULTS_H_	//  if not, define it

#include <string>

typedef enum
{
	DS_OK = 0,							/* No errors. */

	//Errors
	//{
		//Error codes for the creation of the game window
		DS_ERROR_FAILEDTOLOADRESOURCE_ICON,
	//}

	//Results
	//{
		RJ_RESULT_REFERENCE_DECREMENTED,
		RJ_RESULT_REFERENCE_DELETED,
	//}

	RJ_RESULT_UNKNOWN,
	RJ_RESULT_FORCEINT = 65536			/* Makes sure this enum is signed 32bit. */
} DS_RESULT;

static const std::string DS_ErrorString(DS_RESULT _errorCode)
{
	switch(_errorCode)
	{
		case DS_OK									:	return "No errors.";

		case DS_ERROR_FAILEDTOLOADRESOURCE_ICON		:	return "Failed to load game resource: ICON.";

		case RJ_RESULT_UNKNOWN						:	return "Unknown error.";
		default										:	return "Unknown error.";
	};
}

#endif //DRAGONSTONE_RESULTS_H_