int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
int VAR6, VAR7, VAR8;
u32 VAR9[VAR10];
VAR3 *VAR11 = &VAR9[1];
u32 VAR12 = 0;


int VAR13 = VAR14 / 16;


switch (VAR2->VAR15) {
case VAR16:
case VAR17:
if (VAR2->VAR18.VAR19 < VAR20)
break;
default:
return -VAR21;
}

VAR9[0] = VAR22;

VAR6 = VAR2->VAR23.VAR24.FUN2(VAR2, VAR9, 1);

if (VAR6)
return VAR6;

VAR6 = VAR2->VAR23.VAR24.FUN3(VAR2, VAR9, VAR13 + 1);

if (VAR6)
return VAR6;

VAR9[0] &= ~VAR25;


if (VAR9[0] == (VAR22 | VAR26))
return -VAR27;


if (VAR9[0] != (VAR22 | VAR28))
return VAR29;


if (VAR5 > 1)
VAR12 = 0x1;

for (VAR7 = 0; VAR7 < VAR13; VAR7++)
for (VAR8 = 0; VAR8 < 16; VAR8++)
VAR4[VAR7 * 16 + VAR8] = (VAR11[VAR7] >> (2 * VAR8)) & VAR12;

return 0;
}