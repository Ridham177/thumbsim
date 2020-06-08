#include <iostream>
#include <bitset>
using namespace std;
unsigned int signExtend16to32ui(short i) {                                      
     return static_cast<unsigned int>(static_cast<int>(i));                        
}
unsigned int signExtend11to32ui(short i) {                                      
     if (i & 0x0400)                                                               
     {       i = i + 0xf800;}                                                             
     i = i + 0x0000;                                                              
          return signExtend16to32ui(static_cast<unsigned int>(static_cast<int>(i)));    
}

int main()
{
   short i = 0b10001000001;
   unsigned int j = signExtend11to32ui(i);
   cout << bitset<32>(j) << endl;
}
