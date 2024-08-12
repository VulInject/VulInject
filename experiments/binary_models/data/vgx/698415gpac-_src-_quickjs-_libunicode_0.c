static int FUN1(VAR1 *VAR2, uint32_t VAR3,
int VAR4, uint32_t VAR5, uint32_t VAR6,
uint32_t VAR7)
{
uint32_t VAR8;
int VAR9, VAR10, VAR11;
const VAR12 *VAR13;

if (VAR7 == VAR14) {
VAR2[0] = VAR15[VAR4];
return 1;
} else {
VAR13 = VAR16 + VAR15[VAR4];
switch(VAR7) {
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
case VAR23:
VAR9 = VAR7 - VAR17 + 1;
VAR13 += (VAR3 - VAR5) * VAR9 * 2;
for(VAR10 = 0; VAR10 < VAR9; VAR10++) {
if ((VAR2[VAR10] = FUN2(VAR13 + 2 * VAR10)) == 0)
return 0;
}
return VAR9;
case VAR24:
case VAR25:
{
uint32_t VAR26, VAR11;
VAR9 = VAR7 - VAR24 + 1;
VAR26 = (VAR3 - VAR5) * VAR9;
VAR11 = VAR6 * VAR9 * 2;
for(VAR10 = 0; VAR10 < VAR9; VAR10++) {
VAR8 = FUN2(VAR13 + 2 * VAR26) |
(((VAR13[VAR11 + (VAR26 / 4)] >> ((VAR26 % 4) * 2)) & 3) << 16);
if (!VAR8)
return 0;
VAR2[VAR10] = VAR8;
VAR26++;
}
}
return VAR9;
case VAR27:
case VAR28:
case VAR29:
case VAR30:
case VAR31:
VAR9 = VAR7 - VAR27 + 1;
VAR13 += (VAR3 - VAR5) * VAR9;
for(VAR10 = 0; VAR10 < VAR9; VAR10++) {
if ((VAR2[VAR10] = FUN3(VAR13[VAR10])) == 0)
return 0;
}
return VAR9;
case VAR32:
VAR9 = 1;
VAR11 = 0;
goto VAR33;
case VAR34:
case VAR35:
case VAR36:
case VAR37:
case VAR38:
case VAR39:
VAR9 = 2 + ((VAR7 - VAR34) >> 1);
VAR11 = ((VAR7 - VAR34) & 1) + (VAR9 > 2);
VAR33:
for(VAR10 = 0; VAR10 < VAR9; VAR10++) {
VAR8 = FUN2(VAR13 + 2 * VAR10);
if (VAR10 == VAR11)
VAR8 += VAR3 - VAR5;
VAR2[VAR10] = VAR8;
}
return VAR9;
case VAR40:
VAR9 = 18;
goto VAR41;
case VAR42:
case VAR43:
case VAR44:
case VAR45:
case VAR46:
case VAR47:
case VAR48:
case VAR49:
VAR9 = VAR7 - VAR42 + 1;
VAR41:
{
uint32_t VAR50;
VAR50 = FUN2(VAR13);
VAR13 += 2 + (VAR3 - VAR5) * VAR9;
for(VAR10 = 0; VAR10 < VAR9; VAR10++) {
VAR8 = VAR13[VAR10];
if (VAR8 == 0xff)
VAR8 = 0x20;
else
VAR8 += VAR50;
VAR2[VAR10] = VAR8;
}
}
return VAR9;
case VAR51:
VAR13 += (VAR3 - VAR5) * 3;
if (!(VAR2[0] = FUN2(VAR13)))
return 0;
VAR2[1] = FUN3(VAR13[2]);
return 2;
case VAR52:
VAR2[0] = FUN2(VAR13);
VAR2[2] = FUN2(VAR13 + 2);
VAR13 += 4 + (VAR3 - VAR5) * 2;
VAR2[1] = FUN2(VAR13);
return 3;
case VAR53:
case VAR54:
VAR8 = VAR3 - VAR5;
if (VAR7 == VAR53) {
VAR13 += VAR8 & ~1;
VAR3 = FUN3(*VAR13);
VAR13++;
} else {
VAR13 += (VAR8 >> 1) * 3;
VAR3 = FUN2(VAR13);
VAR13 += 2;
}
if (VAR8 & 1)
VAR3 = FUN4(VAR3);
VAR2[0] = VAR3;
VAR2[1] = FUN3(*VAR13);
return 2;
}
}
return 0;
}