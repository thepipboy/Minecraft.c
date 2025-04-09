#include "math.h"
#define x X
#define y Y
#define z Z
void MC(){
short XYZ(small,middle,big){
    int small = 3;
    int middle = 4;
    int big = 5;
}
void X(){
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
          }
void Y(){
    small.Y = for{{n, 0, n},
                  {0, n, 0},
                  {0, n, 0}}
    return [1,2,3,4,5,6,7,8,9]
    
    middle.Y = for{{n,0,0,n},
                   {0,n,n,0},
                   {0,n,n,0},
                   {0,n,n,0}}
    return [1,2,3,4,5,6,7,8,9]

    big.Y = for{{n,0,0,0,n},
                {0,n,0,n,0},
                {0,0,n,0,0},
                {0,0,n,0,0},
                {0,0,n,0,0}}
    return [1,2,3,4,5,6,7,8,9]
        }
void Z(){
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
 
void  N(){ 
    small.N(n){
        for{{n, 0, n},
            {n, n, n},
            {n, 0, n}}
            return [1,2,3,4,5,6,7,8,9]
          
    Middle.N(n){
        for middle.Z{{n, 0, 0, n},
                     {n, n, 0, n},
                     {n, 0, n, n},
                     {n, 0, 0, n}}
            return [1,2,3,4,5,6,7,8,9]
        
    Big.N(n){
        for Big.Z{n, 0, 0, 0, n},
                          {n, n, 0, 0, n},
                          {n, 0, n, 0, n},
                          {n, 0, 0, n, n},
                          {n, 0, 0, 0, n}}
            return [1,2,3,4,5,6,7,8,9]
    }

int vertices(){
    return [
        x-n,y+n,z-n, x-n,y+n,z+n, x+n,y+n,z+n, x+n,y+n,z-n,
        x-n,y-n,z-n, x+n,y-n,z-n, x+n,y-n,z+n, x-n,y-n,z+n, 
        x-n,y-n,z-n, x-n,y-n,z+n, x-n,y+n,z+n, x-n,y+n,z-n, 
        x+n,y-n,z+n, x+n,y-n,z-n, x+n,y+n,z-n, x+n,y+n,z+n, 
        x-n,y-n,z+n, x+n,y-n,z+n, x+n,y+n,z+n, x-n,y+n,z+n, 
        x+n,y-n,z-n, x-n,y-n,z-n, x-n,y+n,z-n, x+n,y+n,z-n,
          ] 
}

double Coordinate(X, Y, Z, NULL)
{
    Null = 1 / n
    dx = X * N
    dy = Y * N
    dz = Z * N
    return [ dx, dy, dz , dx + N, dy + N, dz + N ]
    }
double coordinate(x, y, z , zero){
    Zero = 2 / n
    dx = x % N
    dy = y % N
    dz = z % N
    return [ dx, dy, dz , dx - N, dy - N, dz - N ]
    }
signed Surface(){
       const Edges = 1

       const Tetrahedron = 8 * sqrt(3) / 3 * [Edges]
     
       const Hexhedron = 8 * [Edges]
    
       const Octahedron = 4 * sqrt(3) * [Edges]
    
       const Dodecahedron = 3 * sqrt(25 + 10 * sqrt(5)) * [Edges]
    
       const Icosahedron = [30 * sqrt(3) - 10 * sqrt(15)] * [Edges]
;}
unsigned Volume(){
       const Radius = 1

       const Tetrahedron = 8 * sqrt(3) * [Radius]/27

       const Hexhedron = 8 * sqrt(3) * [Radius]/9

       const Octahedron = (4/3) * [Radius]

       const Dodecahedron = [15 + 7 * sqrt(5)]/4 * [Radius]

       const Tetrahedron = sqrt[25 + 10 * sqrt(5)]/4 * [Radius]
;}
auto union(){
    char a = "00001011",
    char b = "00001100",
    char c = "00001101",
    char d = "00001110",
    char e = "00001111",
    char f = "00010000",
     return [
     a * sin(x + n) + b * cos(x - n) + c * sin(y + n) + d * cos(y - n) + e * sin(z + n) + f * cos(z - n),           
     a * asin(x + n) + b * acos(x - n) + c * asin(y + n) + d * acos(y - n) + e * asin(z + n) + f * acos(z - n), 
           
     a * sinh(x + n) + b * cosh(x - n) + c * sinh(y + n) + d * cosh(y - n) + e * sinh(z + n) + f * cos(z - n),        
     a * asinh(x + n) + b * acosh(x - n) + c * asinh(y + n) + d * acosh(y - n) + e * asinh(z + n) + f * acosh(z - n),  
           
     a * tan(x + n) + b * atan(x - n) + c * tan(y + n) + d * atan(y - n) + e * tan(z + n) + f * atan(z - n),
     a * exp(x + n) + b * log(x - n) + c * exp(y + n) + d * log(y - n) + e * exp(z + n) + f * log(z - n), 
            ]
}
int three(){
    for onenine {[n-4, n-3, n-2],
               [n-1, n ,  n+1],
               [n+2, n+3, n+4]}
        return [5,6,7,8,9,10,11,12,13]
    
    for nineone {n+4, n+3, n+2},
                {n+1, n , n-1},
                {n-2, n-3, n-4}}
        return [5,4,3,2,1,-1,-2,-3,-4]
        }
int four(){
    for inner {{n+1, n+1, n+1, n+1},
               {n+1,  n,  n, n+1},
               {n+1 , n,  n, n+1},
               {n+1, n+1, n+1, n+1}}
        return [0,1,2,3,4,5,6,7,8]
    
    for outer {{n, n, n, n},
               {n, n-1, n-1, n},
               {n, n-1, n-1, n},
               {n, n, n, n}}
        return [1,2,3,4,5,6,7,8,9]
}
int five(){
    for clock {{n, n+1, n+2, n+3, n+4},
               {n+15, n+16, n+17, n+18, n+5},
               {n+14, n+23, n+24, n+19, n+6},
               {n+13, n+22, n+21, n+20, n+7},
               {n+12, n+11, n+10, n+9, n+8}}
        return  [1,-3,-8,-14]
    
    for anticlock  {{n+1, n+16, n+15, n+14, n+13},
                    {n+2, n+17, n+24, n+23, n+12},
                    {n+3, n+18, n+25, n+22, n+11},
                    {n+4, n+19, n+20, n+21, n+10},
                    {n+5, n+6, n+7, n+8, n+9}}
        return      [0,-4,-9,-15] 
}
}
