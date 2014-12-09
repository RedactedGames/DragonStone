#include "ResourcePath.h"
#include "../../../Config.h"

std::string resourcePath(void)
{
    #ifdef DS_IN_DEVELOPMENT
        return "../../../Resources/";
    #else
        return "Resources/";
    #endif
}