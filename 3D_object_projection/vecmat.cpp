#include "vecmat.h"
#include <cmath>

Vector4::Vector4()
{
 data[0]=0.0; data[1]=0.0; data[2]=0.0; data[3]=1.0;
}

void Vector4::Set(double x,double y,double z)
{
 data[0]=x; data[1]=y; data[2]=z;
}

double Vector4::GetX() const
{
	return data[0];
}

double Vector4::GetY() const
{
	return data[1];
}

double Vector4::GetZ() const
{
	return data[2];
}

double Vector4::GetLength() const
{
    return sqrt(GetX() * GetX() + GetY() * GetY() + GetZ() * GetZ());
}

void  Vector4::Normalize()
{
    Set(GetX() / GetLength(), GetY() / GetLength(), GetZ() / GetLength());
}

double Vector4::ScalarMultiplication(const Vector4& vec_b) const
{
    double product;
    product = (GetX() * vec_b.GetX() + GetY() * vec_b.GetY() + GetZ() * vec_b.GetZ());
    return product;
}

Vector4 Vector4::VectorMultiplication(const Vector4& vec_b) const
{
    Vector4 product;
    product.Set(GetY() * vec_b.GetZ() - GetZ() * vec_b.GetY(), GetZ() * vec_b.GetX() - GetX() * vec_b.GetZ(), GetX() * vec_b.GetY() - GetY() * vec_b.GetX());
    return product;
}

Vector4 Vector4::operator- (const Vector4 &gVector) const
{
 unsigned int i;
 Vector4 Result;
 for (i=0;i<4;i++) Result.data[i]=data[i]-gVector.data[i];
 return Result;
}

Vector4 operator* (const Vector4 &gVector,double val)
{
 unsigned int i;
 Vector4 Result;
 for (i=0;i<4;i++) Result.data[i]=gVector.data[i]*val;
 return Result;
}

Matrix4::Matrix4()
{
 data[0][0]=0.0; data[0][1]=0.0; data[0][2]=0.0; data[0][3]=0.0;
 data[1][0]=0.0; data[1][1]=0.0; data[1][2]=0.0; data[1][3]=0.0;
 data[2][0]=0.0; data[2][1]=0.0; data[2][2]=0.0; data[2][3]=0.0;
 data[3][0]=0.0; data[3][1]=0.0; data[3][2]=0.0; data[3][3]=1.0;
}

Matrix4 Matrix4::operator* (const Matrix4 gMatrix)
{
 int i,j,k;
 Matrix4 tmp;

 for (i=0;i<4;i++)
    for (j=0;j<4;j++)
     {
      tmp.data[i][j]=0.0;
      for (k=0;k<4;k++)
       tmp.data[i][j]=tmp.data[i][j]+(data[i][k]*gMatrix.data[k][j]);
     }
 return tmp;
}

Vector4 operator* (const Matrix4 gMatrix,const Vector4 gVector)
{
 unsigned int i,j;
 Vector4 tmp;

 for (i=0;i<4;i++)
  {
   tmp.data[i]=0.0;
   for (j=0;j<4;j++) tmp.data[i]=tmp.data[i]+(gMatrix.data[i][j]*gVector.data[j]);
  }
 return tmp;
}
