static int FUN1(struct VAR1 *VAR2,
const struct VAR3 *VAR4, u32 VAR5)
{
const struct VAR6 *VAR7;
u8 VAR8;
int VAR9;

switch (VAR5) {
case VAR10:
FUN2(&VAR2->VAR11, "", VAR12);
VAR7 = VAR13;
break;
case VAR14:
FUN2(&VAR2->VAR11, "", VAR12);
VAR7 = VAR15;
break;
case VAR16:
FUN2(&VAR2->VAR11, "", VAR12);
VAR7 = VAR17;
break;
case VAR18:
default:
FUN2(&VAR2->VAR11, "", VAR12);
VAR7 = VAR19;
break;
case VAR20:
FUN2(&VAR2->VAR11, "", VAR12);
VAR7 = VAR17;
break;
case VAR21:
FUN2(&VAR2->VAR11, "", VAR12);
VAR7 = VAR19;
break;
}


FUN3(VAR2);


FUN2(&VAR2->VAR11, "", VAR12);
VAR9 = FUN4(VAR2, VAR22);
if (VAR9 < 0)
goto VAR23;


FUN2(&VAR2->VAR11, "", VAR12, VAR4->VAR24);
VAR9 = FUN4(VAR2, VAR25);
if (VAR9 < 0)
goto VAR23;


VAR9 = FUN4(VAR2, VAR4->VAR26);
if (VAR9 < 0)
goto VAR23;


FUN2(&VAR2->VAR11, "", VAR12);
VAR9 = FUN4(VAR2, VAR27);
if (VAR9 < 0)
goto VAR23;


VAR9 = FUN4(VAR2, VAR7);
if (VAR9 < 0)
goto VAR23;
VAR8 = (VAR5 == VAR20)
|| (VAR5 == VAR21) ? VAR28 : 0x00;
VAR9 = FUN5(VAR2, VAR29, VAR28, VAR8);
if (VAR9 < 0)
goto VAR23;

return 0;

VAR23:
FUN6(&VAR2->VAR11, "", VAR12, VAR9);
FUN3(VAR2);

return VAR9;
}