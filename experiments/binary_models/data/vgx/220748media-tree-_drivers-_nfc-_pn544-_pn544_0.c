static int FUN1(struct VAR1 *VAR2, u8 VAR3, u8 VAR4,
struct VAR5 *VAR6)
{
struct VAR5 *VAR7 = NULL;
u8 VAR8 = VAR2->VAR9[VAR3].VAR8;
int VAR10;

FUN2("", VAR4);
switch (VAR4) {
case VAR11:
if (VAR8 == VAR12) {
VAR10 = FUN3(VAR2, VAR8);
} else if (VAR8 == VAR13) {
VAR10 = FUN4(VAR2, VAR8, VAR14,
&VAR7);
if (VAR10 < 0)
goto VAR15;

VAR10 = FUN5(VAR2->VAR16, VAR17,
VAR18, VAR7->VAR19,
VAR7->VAR20);

FUN6(VAR7);
} else {
VAR10 = -VAR21;
}
break;
case VAR22:
VAR10 = FUN7(VAR2, VAR8, VAR23,
NULL, 0);
break;
case VAR24:
if (VAR6->VAR20 < 2) {
VAR10 = -VAR25;
goto VAR15;
}

if (VAR6->VAR19[0] != 0) {
FUN2("", VAR6->VAR19[0]);
VAR10 = -VAR25;
goto VAR15;
}

FUN8(VAR6, 2);
return FUN9(VAR2->VAR16, VAR6);
default:
return 1;
}

VAR15:
FUN6(VAR6);

return VAR10;
}