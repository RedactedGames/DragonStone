/*
 * 0===========================================================================0
 * | Point2D.cpp                                                               |
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
 * | DragonStone - Copyright (c) 2014 [Redacted] Games. All rights reserved.   |
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

#include "Point2D.h"
#include "math.h"

DragonStone::Point2D::Point2D(void)
{
    this->m_X = 0.0f;
    this->m_Y = 0.0f;
}

DragonStone::Point2D::Point2D(float _x, float _y)
{
    this->m_X = _x;
    this->m_Y = _y;
}

DragonStone::Point2D::Point2D(const Point2D& _ref)
{
    this->m_X = _ref.getX();
    this->m_Y = _ref.getY();
}

DragonStone::Point2D& DragonStone::Point2D::operator=(const Point2D& _ref)
{
    this->m_X = _ref.getX();
    this->m_Y = _ref.getY();

    return *this;
}

DragonStone::Point2D::~Point2D(void)
{

}

const bool DragonStone::Point2D::equals(const float _x, const float _y) const
{
    if (this->m_X == _x && this->m_Y == _y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

const bool DragonStone::Point2D::equals(const DragonStone::Point2D& _point) const
{
    if (this->m_X == _point.getX() && this->m_Y == _point.getY())
    {
        return true;
    }
    else
    {
        return false;
    }
}

const float DragonStone::Point2D::getDistance(const float _x, const float _y) const
{
    return sqrt(this->getDistanceSq(_x, _y));
}

const float DragonStone::Point2D::getDistance(const DragonStone::Point2D& _point) const
{
    return sqrt(this->getDistanceSq(_point));
}

const float DragonStone::Point2D::getDistanceSq(const float _x, const float _y) const
{
    //(x2 - x1)^2 + (y2 - y1)^2
    float newX = _x - this->m_X;
    float newY = _y - this->m_Y;

    newX = (newX * newX);
    newY = (newY * newY);

    float distance = (newX + newY);
    return distance;
}

const float DragonStone::Point2D::getDistanceSq(const DragonStone::Point2D& _point) const
{
    //(x2 - x1)^2 + (y2 - y1)^2
    float newX = _point.getX() - this->m_X;
    float newY = _point.getY() - this->m_Y;

    newX = (newX * newX);
    newY = (newY * newY);

    float distance = (newX + newY);
    return distance;
}

const bool DragonStone::Point2D::intersects(const float _x, const float _y) const
{
    if (this->m_X == _x && this->m_Y == _y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

const bool DragonStone::Point2D::intersects(const DragonStone::Point2D& _point) const
{
    if (this->m_X == _point.getX() && this->m_Y == _point.getY())
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*      0======================================================================0
 *      | Getters                                                              |
 *      0======================================================================0
 */
const float DragonStone::Point2D::getX(void) const
{
    return this->m_X;
}

const float DragonStone::Point2D::getY(void) const
{
    return this->m_Y;
}

const std::string DragonStone::Point2D::toString(void) const
{
    return "Point - X: " + std::to_string(this->m_X) + " Y: " + std::to_string(this->m_Y);
}

/*      0======================================================================0
 *      | Setters                                                              |
 *      0======================================================================0
 */
void DragonStone::Point2D::setX(const float _x)
{
    this->m_X = _x;
}

void DragonStone::Point2D::setY(const float _y)
{
    this->m_Y = _y;
}