long double
FUN1(long double VAR1) {
union {
unsigned VAR2[4];
long double VAR3;
} VAR4;
unsigned VAR5, VAR6;
int VAR7;

VAR4.VAR3 = VAR1;
VAR6 = VAR4.VAR2[0] & 0x80000000;
VAR5 = VAR4.VAR2[0] & ~0x80000000;


if (VAR5 >= 0x406f0000) 
return (VAR5 >= 0x7fff0000 ? VAR1 + VAR1 : VAR1);


if (VAR5 < 0x3fff0000)
return (VAR6 ? -0.0L : 0.0L);

VAR7 = 0x406f - (VAR5 >> 16);		
VAR4.VAR2[0] = VAR5;
if (VAR7 >= 96) {				
VAR4.VAR2[0] &= ~((1 << (VAR7 - 96)) - 1);
VAR4.VAR2[1] = VAR4.VAR2[2] = VAR4.VAR2[3] = 0;
} else if (VAR7 >= 64) {			
VAR4.VAR2[1] &= ~((1 << (VAR7 - 64)) - 1);
VAR4.VAR2[2] = VAR4.VAR2[3] = 0;
} else if (VAR7 >= 32) {			
VAR4.VAR2[2] &= ~((1 << (VAR7 - 32)) - 1);
VAR4.VAR2[3] = 0;
} else					
VAR4.VAR2[3] &= ~((1 << VAR7) - 1);


if (VAR6)
VAR4.VAR2[0] |= 0x80000000;
return (VAR4.VAR3);
}