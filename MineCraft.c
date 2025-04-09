#include "math.h"
void MC(){
short XYZ(small,middle,big,n){
    int small = 3;
    int middle = 4;
    int big = 5;
    small.X = for{{n,0,n},
                  {0,n,0},
                  {n,0,n}}
    return [1,2,3,4,5,6,7,8,9]
    
    middle.X = for{{n,0,0,n},
                   {0,n,n,0},
                   {0,n,n,0},
                   {n,0,0,n}}
    return [1,2,3,4,5,6,7,8,9]

    big.X = for{{n,0,0,0,n},
                {0,n,0,n,0},
                {0,0,n,0,0},
                {0,n,0,n,0},
                {n,0,0,0,n}}
    return [1,2,3,4,5,6,7,8,9]
    
    small.Y = for{{n, 0, n},
                  {0, n, 0},
                  {0, n, n}}
    return [1,2,3,4,5,6,7,8,9]
    
    middle.Y = for{{n,0,0,n},
                   {0,n,n,0},
                   {0,n,n,0},
                   {n,0,0,n}}
    return [1,2,3,4,5,6,7,8,9]

    big.Y = for{{n,0,0,0,n},
                {0,n,0,n,0},
                {0,0,n,0,0},
                {0,0,n,0,0},
                {0,0,n,0,0}}
    return [1,2,3,4,5,6,7,8,9]

    small.Z = for{{n, n, n},
                  {0, n, 0},
                  {n, n, n}}
    return [1,2,3,4,5,6,7,8,9]
    
    middle.Z = for{{n,n,n,n},
                   {0,0,n,0},
                   {0,n,0,0},
                   {n,n,n,n}}
    return [1,2,3,4,5,6,7,8,9]

    big.Z = for{{n,n,n,n,n},
                {0,0,0,n,0},
                {0,0,n,0,0},
                {0,n,0,0,0},
                {n,n,n,n,n}}
    return [1,2,3,4,5,6,7,8,9]    
}

int vertices(x, y, z, n){
    return [
        x-n,y+n,z-n, x-n,y+n,z+n, x+n,y+n,z+n, x+n,y+n,z-n; #a
        x-n,y-n,z-n, x+n,y-n,z-n, x+n,y-n,z+n, x-n,y-n,z+n; #b
        x-n,y-n,z-n, x-n,y-n,z+n, x-n,y+n,z+n, x-n,y+n,z-n; #c
        x+n,y-n,z+n, x+n,y-n,z-n, x+n,y+n,z-n, x+n,y+n,z+n; #d
        x-n,y-n,z+n, x+n,y-n,z+n, x+n,y+n,z+n, x-n,y+n,z+n; #e
        x+n,y-n,z-n, x-n,y-n,z-n, x-n,y+n,z-n, x+n,y+n,z-n; #f
        ]
}
typedef struct {
float sphere(x , y , z , r){
    return [r^2 === x^2 + y^2 + z^2]
        }
double +coordinate(x, y, z , N):
    N = 1 / n
    dx = x * N
    dy = y * N
    dz = z * N
    return [ dx, dy, dz , dx + N, dy + N, dz + N ]
    }
double -coordinate(x, y, z , N){
    N = 2 / n
    dx = x % N
    dy = y % N
    dz = z % N
    return [ dx, dy, dz , dx - N, dy - N, dz - N ]
    } 
}
signed Surface(){
       this.Edges = 1
       const Tetrahedron = 8 * math.sqrt(3) / 3 * [Edges]
     
       const Hexhedron = 8 * [Edges]
    
       const Octahedron = 4 * math.sqrt(3) * [Edges]
    
       const Dodecahedron = 3 * math.sqrt(25 + 10 * math.sqrt(5)) * [Edges]
    
       const Icosahedron = [30 * math.sqrt(3) - 10 * math.sqrt(15)] * [Edges]
}
unsinged Volume(){
       this.Radius = 1
       const Tetrahedron = 8 * math.sqrt(3) * [Radius]/27

       const Hexhedron = 8 * math.sqrt(3) * [Radius]/9

       const Octahedron = (4/3) * [Radius]

       const Dodecahedron = [15 + 7 * math.sqrt(5)]/4 * [Radius]

       const Tetrahedron = math.sqrt[25 + 10 * math.sqrt(5)]/4 * [Radius]
}
  char a = "00001011",
  char b = "00001100",
  char c = "00001101",
  char d = "00001110",
  char e = "00001111",
  char f = "00010000",
  return [
     a * sin(x + t1) + b * cos(x - t1) + c * sin(y + t2) + d * cos(y - t2) + e * sin(z + t3) + f * cos(z - t3),            #t123
     a * asin(x + t1) + b * acos(x - t1) + c * asin(y + t2) + d * acos(y - t2) + e * asin(z + t3) + f * acos(z - t3),      #t123
     a * sinh(x + t4) + b * cosh(x - t4) + c * sinh(y + t5) + d * cosh(y - t5) + e * sinh(z + t6) + f * cos(z - t6), #t456
     a * asinh(x + t7) + b * acosh(x - t7) + c * asinh(y + t8) + d * acosh(y - t8) + e * asinh(z + t9) + f * acosh(z - t9),      #t789
     a * tan(x + t10) + b * atan(x - t10) + c * tan(y + t11) + d * atan(y - t11) + e * tan(z + t12) + f * atan(z - t12)    #t101112
         ]
return [vertice - edge + face = 2]
}
