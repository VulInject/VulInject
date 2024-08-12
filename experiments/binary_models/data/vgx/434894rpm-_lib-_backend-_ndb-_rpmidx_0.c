static unsigned int FUN1(const unsigned char *VAR1, unsigned int VAR2)
{
unsigned int VAR3 =  VAR2 * VAR4;

while (VAR2 >= 4) {
VAR3 += VAR1[0] | VAR1[1] << 8 | VAR1[2] << 16 | VAR1[3] << 24;
VAR3 *= VAR4;
VAR3 ^= VAR3 >> 16;
VAR1 += 4;
VAR2 -= 4;
}
switch (VAR2) {
case 3:
VAR3 += VAR1[2] << 16; 
case 2:
VAR3 += VAR1[1] << 8;
case 1:
VAR3 += VAR1[0];
VAR3 *= VAR4;
VAR3 ^= VAR3 >> 16;
default:
break;
}
VAR3 *= VAR4;
VAR3 ^= VAR3 >> 10; 
VAR3 *= VAR4;
VAR3 ^= VAR3 >> 17; 
return VAR3;
}