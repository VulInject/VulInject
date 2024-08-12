int
FUN1(const char *VAR1)
{
int VAR2, VAR3 = -1;
VAR4 *VAR5;
struct VAR6 *VAR7;
struct stat VAR8;
char VAR9[VAR10];

if (VAR11 == 0)
FUN2(VAR12, "", VAR1);

if (VAR13 == 1 && VAR14 != 0)
return (0);

if ((VAR5 = FUN3(VAR1)) == NULL) {
FUN2(VAR15, "", VAR1);
return (-1);
}

while ((VAR7 = FUN4(VAR5)) != NULL) {
if (!strcmp(VAR7->VAR16, "") ||
!strcmp(VAR7->VAR16, ""))
continue;

(void)FUN5(VAR9, sizeof(VAR9), "",
VAR1, VAR7->VAR16);

if (VAR7->VAR17 == VAR18) {
if (FUN6(VAR9, &VAR8) == -1)
FUN7("", VAR9, strerror(VAR19));

switch (VAR8.VAR20 & VAR21) {
case VAR22:
VAR2 = VAR23;
break;
case VAR24:
VAR2 = VAR25;
break;
default:
FUN7("",
VAR9);
}
} else {
switch (VAR7->VAR17) {
case VAR26:
VAR2 = VAR23;
break;
case VAR27:
VAR2 = VAR25;
break;
default:
FUN7("",
VAR9);
}
}
switch (VAR2) {
case VAR23:
if (FUN1(VAR9) == -1)
goto VAR28;
break;
case VAR25:
if (FUN8(VAR9) == -1 && VAR19 != VAR29)
goto VAR28;
break;
default:
FUN7("", VAR2);
}
}


if (FUN9(VAR1) == -1 && VAR19 != VAR29) {
FUN2(VAR30, "", VAR1);
goto VAR28;
}

VAR3 = 0;
VAR28:
FUN10(VAR5);
return (VAR3);
}