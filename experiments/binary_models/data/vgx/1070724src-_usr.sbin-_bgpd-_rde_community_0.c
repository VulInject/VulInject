int
FUN1(struct VAR1 *VAR2, int VAR3, void *VAR4,
uint16_t VAR5)
{
struct VAR6 *VAR7;
VAR8 *VAR9 = VAR4;
uint64_t VAR10;
size_t VAR11 = 0;
int VAR12, VAR13, VAR14 = VAR15 | VAR16;

if (VAR2->VAR14 & VAR17)
VAR14 |= VAR18;


for (VAR12 = 0; VAR12 < VAR2->VAR19; VAR12++)
if ((VAR8)VAR2->VAR20[VAR12].VAR14 ==
VAR21 && !(VAR3 &&
FUN2(&VAR2->VAR20[VAR12])))
VAR11++;

if (VAR11 == 0)
return 0;


VAR13 = FUN3(VAR9, VAR5, VAR14, VAR22, NULL, VAR11 * 8);
if (VAR13 == -1)
return -1;
VAR9 += VAR13;


for (VAR12 = 0; VAR12 < VAR2->VAR19; VAR12++) {
VAR7 = VAR2->VAR20 + VAR12;
if ((VAR8)VAR7->VAR14 == VAR21 && !(VAR3 &&
FUN2(VAR7))) {
VAR10 = (VAR23)VAR7->VAR24 << 48;
switch ((VAR7->VAR24 >> 8) & VAR25) {
case VAR26:
case VAR27:
case VAR28:
VAR10 |= ((VAR23)VAR7->VAR29 & 0xffff) << 32;
VAR10 |= (VAR23)VAR7->VAR30;
break;
case VAR31:
case VAR32:
VAR10 |= (VAR23)VAR7->VAR29 << 16;
VAR10 |= (VAR23)VAR7->VAR30 & 0xffff;
break;
}
VAR10 = FUN4(VAR10);
memcpy(VAR9, &VAR10, sizeof(VAR10));
VAR9 += sizeof(VAR10);
VAR13 += sizeof(VAR10);
}
}

return VAR13;
}