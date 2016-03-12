#pragma once

class cVector3
{
	float mX;
	float mY;
	float mZ;
public:
	cVector3(float x, float y, float z);
	cVector3(const cVector3& rhs);
	~cVector3();
	void vSetX(float x);
	void vSetY(float x);
	void vSetZ(float x);
	float fGetX();
	float fGetY();
	float fGetZ();

	const cVector3 operator+(const cVector3& rhs);
	const cVector3 operator-(const cVector3& rhs);
	cVector3& operator=(const cVector3&rhs);
};