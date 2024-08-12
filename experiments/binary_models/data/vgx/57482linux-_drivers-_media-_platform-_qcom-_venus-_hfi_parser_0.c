VAR1 FUN1(struct VAR2 *VAR3, struct VAR4 *VAR5, void *VAR6,
u32 VAR7)
{
unsigned int VAR8 = VAR7 >> 2;
VAR1 *VAR9 = VAR6, *VAR10, VAR11 = 0, VAR12 = 0;
int VAR13;

VAR13 = FUN2(VAR3, VAR5);
if (!VAR13)
return VAR14;

if (VAR7 % 4)
return VAR15;

FUN3(VAR5, &VAR11, &VAR12);

if (VAR3->VAR16->VAR17 > VAR18) {
VAR3->VAR19 = 0;
memset(VAR3->VAR20, 0, sizeof(VAR3->VAR20));
}

while (VAR8) {
VAR10 = VAR9 + 1;

switch (*VAR9) {
case VAR21:
FUN4(VAR3, VAR10);
FUN5(VAR3);
break;
case VAR22:
FUN6(VAR3, VAR10);
break;
case VAR23:
FUN7(&VAR11, &VAR12, VAR10);
break;
case VAR24:
FUN8(VAR3, VAR11, VAR12, VAR10);
break;
case VAR25:
FUN9(VAR3, VAR11, VAR12, VAR10);
break;
case VAR26:
FUN10(VAR3, VAR11, VAR12, VAR10);
break;
case VAR27:
FUN11(VAR3, VAR11, VAR12, VAR10);
break;
default:
break;
}

VAR9++;
VAR8--;
}

if (!VAR3->VAR28)
VAR3->VAR28 = VAR29;

FUN12(VAR5, VAR11, VAR12);

return VAR14;
}