#include "math.h"
short XYZ(small,middle,big,n){
    int small = 3;
    int middle = 4;
    int big = 5;
    small.X = for{{n, 0, n},
                  {0, n, 0},
                  {n, 0, n}}
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
        x-n,y+n,z-n, x-n,y+n,z+n, x+n,y+n,z+n, x+n,y+n,z-n;
        x-n,y-n,z-n, x+n,y-n,z-n, x+n,y-n,z+n, x-n,y-n,z+n;  
        x-n,y-n,z-n, x-n,y-n,z+n, x-n,y+n,z+n, x-n,y+n,z-n;  
        x+n,y-n,z+n, x+n,y-n,z-n, x+n,y+n,z-n, x+n,y+n,z+n;  
        x-n,y-n,z+n, x+n,y-n,z+n, x+n,y+n,z+n, x-n,y+n,z+n; 
        x+n,y-n,z-n, x-n,y-n,z-n, x-n,y+n,z-n, x+n,y+n,z-n;  
        ]
}
float sphere(x , y , z , r):
    return [r^2 = x^2 + y^2 + z^2]
    
double coordinate(x, y, z , n):
    N = 1 / n
    dx = x * N
    dy = y * N
    dz = z * N
    return [ dx, dy, dz , dx + N, dy + N, dz + N ]
    
signed edge(){
    
}
unsigned face(){
    
}
