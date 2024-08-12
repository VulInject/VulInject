void FUN1(struct VAR1 *VAR2, u32 VAR3,
unsigned int VAR4, const void *VAR5)
{
u32 VAR6, VAR7;
const VAR8 *VAR9 = VAR5;
unsigned int VAR10;

VAR6 = VAR3 & VAR11;
VAR3 &= ~VAR11;
FUN2(VAR3 > 0xFFFF);

FUN3(VAR2, VAR12, VAR3);

for (VAR10 = 0; VAR10 < VAR4; VAR10++) {
switch (VAR6) {
case VAR13:
VAR7 = *VAR9;
VAR9++;
FUN2(VAR7 & ~0xFF);
FUN3(VAR2, VAR14, VAR7);
break;
case VAR15:
VAR7 = *((VAR16 *)VAR9);
VAR9 += 2;
FUN2(VAR7 & ~0xFFFF);
FUN3(VAR2, VAR14, VAR7);
break;
case VAR17:
VAR7 = *((VAR18 *)VAR9);
VAR9 += 4;
FUN3(VAR2, VAR19,
VAR7 >> 16);
FUN3(VAR2, VAR14,
VAR7 & 0xFFFF);
break;
default:
FUN2(1);
}
}
}