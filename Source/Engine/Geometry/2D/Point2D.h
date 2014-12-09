/*
 * 0===========================================================================0
 * | Point2D.h                                                                 |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Author        : Joseph Stuhr                                            |
 * |   E-mail        : JpDeathBlade@gmail.com                                  |
 * 0=====0===============================================================0=====0
 *       |                                                               |
 * 0=====0===============================================================0=====0
 * | Code Description:                                                         |
 * |  ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |
 * |   Defines a point in 2D space.                                            |
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

#ifndef  DRAGONSTONE_POINT2D_H_		// Check to see if this .h is defined
#define  DRAGONSTONE_POINT2D_H_		//  if not, define it

/*
 * 0===========================================================================0
 * | Includes                                                                  |
 * 0===========================================================================0
 */
#include <string>

namespace DragonStone
{
    class Point2D
    {
        private:
            float m_X;
            float m_Y;

        public:
            Point2D(void);
            Point2D(const Point2D& _ref);
            Point2D& operator=(const Point2D& _ref);
            ~Point2D(void);

            Point2D(float _x, float _y);

            const bool equals(const float _x, const float _y) const;
            const bool equals(const Point2D& _point) const;
            const float getDistance(const float _x, const float _y) const;
            const float getDistance(const Point2D& _point) const;
            const float getDistanceSq(const float _x, const float _y) const;
            const float getDistanceSq(const Point2D& _point) const;

            const bool intersects(const float _x, const float _y) const;
            const bool intersects(const Point2D& _point) const;

/*
 *      0======================================================================0
 *      | Overloads                                                            |
 *      0======================================================================0
 */
            bool operator==(const Point2D& _ref);
            bool operator!=(const Point2D& _ref);
            Point2D& operator+(const Point2D& _ref);
            Point2D& operator+=(const Point2D& _ref);
            Point2D& operator-(const Point2D& _ref);
            Point2D& operator-=(const Point2D& _ref);
		
/*
 *      0======================================================================0
 *      | Getters                                                              |
 *      0======================================================================0
 */

            const float getX(void) const;
            const float getY(void) const;
            const std::string toString(void) const;

/*
 *      0======================================================================0
 *      | Setters                                                              |
 *      0======================================================================0
 */
            void setX(const float _x);
            void setY(const float _y);
    };
}

#endif //DRAGONSTONE_POINT2D_H_