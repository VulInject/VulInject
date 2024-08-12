static void FUN1(unsigned int VAR1,
unsigned int *VAR2,
unsigned int *VAR3,
unsigned int *VAR4)
{
unsigned int VAR5, VAR6 = 0, VAR7 = 0;
unsigned int VAR8, VAR9, VAR10, VAR11, VAR12 = ~0U;

if (VAR1 < 625000 / VAR13)
VAR1 = 625000 / VAR13;
if (VAR1 > 150000000 / VAR13)
VAR1 = 150000000 / VAR13;

for (VAR5 = 0; VAR1 < 75000000 / VAR13; VAR5 += 0x20, VAR1 <<= 1);
for (VAR9 = 3; VAR9 < 33; VAR9++)	
for (VAR8 = 3; VAR8 < 257; VAR8++) {
VAR10 = ((VAR14 / VAR13) * VAR8) / VAR9;
if (VAR10 >= VAR1)
VAR11 = VAR10 - VAR1;
else
VAR11 = VAR1 - VAR10;
if (VAR11 < VAR12) {
VAR12 = VAR11;
VAR6 = VAR8 - 2;
VAR7 = VAR9 - 2;
}
}
*VAR2 = VAR5;
*VAR3 = VAR6;
*VAR4 = VAR7;
FUN2(VAR15->VAR16->VAR17,
"", VAR12, VAR8, VAR9);
FUN2(VAR15->VAR16->VAR17,
"", VAR18, VAR6, VAR5, VAR7);
}