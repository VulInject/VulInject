static int
FUN1(VAR1* VAR2, VAR3* VAR4, tmsize_t VAR5, uint16 VAR6)
{
static const char VAR7[] = "";
unsigned char *VAR8, *VAR9;
tmsize_t VAR10;
VAR3* VAR11;
tmsize_t VAR12, VAR13;

(void) VAR6;

for (VAR9 = (unsigned char*) VAR4, VAR10 = VAR5; VAR10-- > 0;)
*VAR9++ = 0xff;

VAR8 = (unsigned char *)VAR2->VAR14;
VAR10 = VAR2->VAR15;
VAR12 = VAR2->VAR16;
if (VAR5 % VAR12)
{
FUN2(VAR2->VAR17, VAR7, "");
return (0);
}
for (VAR11 = VAR4; VAR10 > 0 && VAR5 > 0; VAR5 -= VAR12, VAR11 += VAR12) {
VAR13 = *VAR8++, VAR10--;
switch (VAR13) {
case VAR18:

if (VAR10 < VAR12)
goto VAR19;
FUN3(VAR11, VAR8, VAR12);
VAR8 += VAR12;
VAR10 -= VAR12;
break;
case VAR20: {
tmsize_t VAR21;

if( VAR10 < 4 )
goto VAR19;
VAR21 = (VAR8[0] * 256) + VAR8[1];
VAR13 = (VAR8[2] * 256) + VAR8[3];
if (VAR10 < 4+VAR13 || VAR21+VAR13 > VAR12)
goto VAR19;
FUN3(VAR11+VAR21, VAR8+4, VAR13);
VAR8 += 4+VAR13;
VAR10 -= 4+VAR13;
break;
}
default: {
uint32 VAR22 = 0, VAR23;
uint32 VAR24 = VAR2->VAR25.VAR26;
if( FUN4(VAR2) )
VAR24 = VAR2->VAR25.VAR27;


VAR9 = VAR11;
for (;;) {
VAR23 = (VAR28)((VAR13>>6) & 0x3);
VAR13 &= 0x3f;

while (VAR13-- > 0 && VAR22 < VAR24)
FUN5(VAR9, VAR23);
if (VAR22 >= VAR24)
break;
if (VAR10 == 0)
goto VAR19;
VAR13 = *VAR8++, VAR10--;
}
break;
}
}
}
VAR2->VAR14 = (VAR3*) VAR8;
VAR2->VAR15 = VAR10;
return (1);
VAR19:
FUN2(VAR2->VAR17, VAR7, "",
(long) VAR2->VAR29);
return (0);
}