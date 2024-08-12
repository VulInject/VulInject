static int FUN1(struct VAR1 *VAR2, u32 VAR3,
u32 VAR4, u32 VAR5, VAR6 *VAR7)
{
const struct VAR8 *VAR9 = NULL;
const struct VAR8 *VAR10;
uint32_t VAR11, VAR12;

*VAR7 = 0;
switch (VAR2->VAR13) {
case VAR14:
VAR9 = VAR15;
VAR11 = FUN2(VAR15);
break;
case VAR16:
case VAR17:
case VAR18:
case VAR19:
case VAR20:
case VAR21:
case VAR22:
VAR9 = VAR23;
VAR11 = FUN2(VAR23);
break;
default:
return -VAR24;
}

if (VAR9) {
for (VAR12 = 0; VAR12 < VAR11; VAR12++) {
VAR10 = VAR9 + VAR12;
if (VAR5 != VAR10->VAR5)
continue;
if (!VAR10->VAR25)
*VAR7 = FUN3(VAR2,
VAR10->VAR26,
VAR3, VAR4, VAR5);
return 0;
}
}

for (VAR12 = 0; VAR12 < FUN2(VAR27); VAR12++) {
if (VAR5 != VAR27[VAR12].VAR5)
continue;

if (!VAR27[VAR12].VAR25)
*VAR7 = FUN3(VAR2,
VAR27[VAR12].VAR26,
VAR3, VAR4, VAR5);
return 0;
}
return -VAR24;
}