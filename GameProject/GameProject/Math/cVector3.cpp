#include "cVector3.h"

cVector3::cVector3(float x, float y, float z)
:mX(x),mY(y),mZ(z)
{

}

cVector3::cVector3(const cVector3& rhs)
:mX(rhs.mX),mY(rhs.mY),mZ(rhs.mZ)
{

}

cVector3::~cVector3()
{

}

void cVector3::vSetX(float x)
{
	mX = x;
}

void cVector3::vSetY(float y)
{
	mY = y;
}

void cVector3::vSetZ(float z)
{
	mZ = z;
}

float cVector3::fGetX()
{
	return mX;
}

float cVector3::fGetY()
{
	return mY;
}

float cVector3::fGetZ()
{
	return mZ;
}


const cVector3 cVector3::operator+(const cVector3& rhs)
{
	float resultX = mX + rhs.mX;
	float resultY = mY + rhs.mY;
	float resultZ = mZ + rhs.mZ;

	return cVector3(resultX, resultY, resultZ);
}

const cVector3 cVector3::operator-(const cVector3& rhs)
{
	float resultX = mX - rhs.mX;
	float resultY = mY - rhs.mY;
	float resultZ = mZ - rhs.mZ;

	return cVector3(resultX, resultY, resultZ);
}

cVector3& cVector3::operator=(const cVector3&rhs)
{
	if(&rhs == this)
		return *this;

	mX = rhs.mX;
	mY = rhs.mY;
	mZ = rhs.mZ;

	return *this;
}