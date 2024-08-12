static int FUN1(struct VAR1 *VAR2)
{
struct VAR3 *VAR4 = &VAR2->VAR4;
u32 VAR5, VAR6;

switch (VAR4->VAR7.VAR8) {
case VAR9:
case VAR10:
case VAR11:

if (VAR2->VAR12->VAR13 & VAR14)
break;
VAR15;
case VAR16:
case VAR17:
case VAR18:

if (VAR2->VAR19)
break;
VAR15;
default:
return 1;
}


if (VAR2->VAR20 & VAR21)
return 0;

if (!VAR2->VAR19)
goto VAR22;


VAR6 = VAR2->VAR19 + VAR23;

for (VAR5 = VAR24; --VAR5;) {
u32 VAR25 = FUN2(FUN3(VAR5));

VAR25 |= FUN4(VAR6);
FUN5(FUN3(VAR5), VAR25);
}

VAR22:

for (VAR5 = VAR26; VAR5--;)
VAR4->VAR7.VAR27.FUN6(VAR4, VAR5, ~0U);


VAR2->VAR20 |= VAR21;

return 0;
}