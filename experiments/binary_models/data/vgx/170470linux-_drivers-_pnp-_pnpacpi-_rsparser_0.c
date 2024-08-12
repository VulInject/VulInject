static void FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
struct VAR4 *VAR5)
{
struct VAR6 *VAR7 = &VAR4->VAR8.VAR7;

if (!FUN2(VAR5)) {
VAR7->VAR9 = 0;
FUN3(&VAR2->VAR2, "",
VAR5 ? "" : "");
return;
}


switch (VAR5->VAR10 & VAR11) {
case VAR12:
VAR7->VAR13 = VAR14;
break;
case VAR15:
VAR7->VAR13 = VAR16;
break;
case VAR17:
VAR7->VAR13 = VAR18;
break;
default:
VAR7->VAR13 = VAR19;
}

switch (VAR5->VAR10 & VAR20) {
case VAR21:
VAR7->VAR22 = VAR23;
break;
case VAR24:
VAR7->VAR22 = VAR25;
break;
default:
VAR7->VAR22 = VAR26;
}

VAR7->VAR27 = !!(VAR5->VAR10 & VAR28);
VAR7->VAR9 = 1;
VAR7->VAR29[0] = VAR5->VAR30;

FUN3(&VAR2->VAR2, ""
"",
(int) VAR5->VAR30, VAR7->VAR13, VAR7->VAR22, VAR7->VAR27);
}