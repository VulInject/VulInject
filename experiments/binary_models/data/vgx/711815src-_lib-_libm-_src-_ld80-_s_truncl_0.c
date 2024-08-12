static const long double VAR1 = 1.0e300;
static const float VAR2[] = { 0.0, -0.0 };

long double
FUN1(long double VAR3)
{
int VAR4, VAR5;
uint32_t VAR6, VAR7;

FUN2(VAR5,VAR6,VAR7,VAR3);
VAR4 = (VAR5&0x7fff) - VAR8 + 1;

if (VAR4 < VAR9 - 1) {
if (VAR4 < 0) {			
if (VAR1 + VAR3 > 0.0)
return (VAR2[(VAR5&0x8000)!=0]);
} else {
uint64_t VAR10 = ((1llu << VAR9) - 1) >> (VAR4 + 1);
if (((VAR6 & VAR10) | VAR7) == 0)
return (VAR3);	
if (VAR1 + VAR3 > 0.0) {	
VAR6 &= ~VAR10;
VAR7 = 0;
}
}
} else if (VAR4 < VAR11 - 1) {
uint64_t VAR10 = (VAR12)-1 >> (64 - VAR11 + VAR4 + 1);
if ((VAR7 & VAR10) == 0)
return (VAR3);	
if (VAR1 + VAR3 > 0.0)		
VAR7 &= ~VAR10;
}
FUN3(VAR3,VAR5,VAR6,VAR7);
return (VAR3);
}