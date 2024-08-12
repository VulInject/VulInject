FUN1 (void* VAR1, size_t VAR2,
const short* VAR3, unsigned VAR4, unsigned VAR5,
unsigned VAR6)
{
VAR7* const VAR8 = (VAR7*) VAR1;
VAR7* VAR9 = VAR8;
VAR7* const VAR10 = VAR8 + VAR2;
int VAR11;
const int VAR12 = 1 << VAR5;
int VAR13;
int VAR14;
U32 VAR15 = 0;
int VAR16 = 0;
unsigned VAR17 = 0;
unsigned const VAR18 = VAR4 + 1;
int VAR19 = 0;


VAR15 += (VAR5-VAR20) << VAR16;
VAR16  += 4;


VAR13 = VAR12+1;   
VAR14 = VAR12;
VAR11 = VAR5+1;

while ((VAR17 < VAR18) && (VAR13>1)) {  
if (VAR19) {
unsigned VAR21 = VAR17;
while ((VAR17 < VAR18) && !VAR3[VAR17]) VAR17++;
if (VAR17 == VAR18) break;   
while (VAR17 >= VAR21+24) {
VAR21+=24;
VAR15 += 0xFFFFU << VAR16;
if ((!VAR6) && (VAR9 > VAR10-2))
return FUN2(VAR22);   
VAR9[0] = (VAR7) VAR15;
VAR9[1] = (VAR7)(VAR15>>8);
VAR9+=2;
VAR15>>=16;
}
while (VAR17 >= VAR21+3) {
VAR21+=3;
VAR15 += 3 << VAR16;
VAR16 += 2;
}
VAR15 += (VAR17-VAR21) << VAR16;
VAR16 += 2;
if (VAR16>16) {
if ((!VAR6) && (VAR9 > VAR10 - 2))
return FUN2(VAR22);   
VAR9[0] = (VAR7)VAR15;
VAR9[1] = (VAR7)(VAR15>>8);
VAR9 += 2;
VAR15 >>= 16;
VAR16 -= 16;
}   }
{   int VAR23 = VAR3[VAR17++];
int const VAR24 = (2*VAR14-1) - VAR13;
VAR13 -= VAR23 < 0 ? -VAR23 : VAR23;
VAR23++;   
if (VAR23>=VAR14)
VAR23 += VAR24;   
VAR15 += VAR23 << VAR16;
VAR16  += VAR11;
VAR16  -= (VAR23<VAR24);
VAR19  = (VAR23==1);
if (VAR13<1) return FUN2(VAR25);
while (VAR13<VAR14) { VAR11--; VAR14>>=1; }
}
if (VAR16>16) {
if ((!VAR6) && (VAR9 > VAR10 - 2))
return FUN2(VAR22);   
VAR9[0] = (VAR7)VAR15;
VAR9[1] = (VAR7)(VAR15>>8);
VAR9 += 2;
VAR15 >>= 16;
VAR16 -= 16;
}   }

if (VAR13 != 1)
return FUN2(VAR25);  
assert(VAR17 <= VAR18);


if ((!VAR6) && (VAR9 > VAR10 - 2))
return FUN2(VAR22);   
VAR9[0] = (VAR7)VAR15;
VAR9[1] = (VAR7)(VAR15>>8);
VAR9+= (VAR16+7) /8;

return (VAR9-VAR8);
}