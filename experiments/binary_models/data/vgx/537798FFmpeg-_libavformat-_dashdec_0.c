static int FUN1(VAR1 *VAR2, const char *VAR3,
xmlNodePtr VAR4,
xmlNodePtr VAR5,
xmlNodePtr VAR6,
xmlNodePtr VAR7,
xmlNodePtr VAR8)
{
int VAR9 = 0;
VAR10 *VAR11 = VAR2->VAR12;
xmlNodePtr VAR13 = NULL;
xmlNodePtr VAR14 = NULL;
xmlNodePtr VAR15 = NULL;
xmlNodePtr VAR16 = NULL;
xmlNodePtr VAR17 = NULL;
xmlNodePtr VAR18 = NULL;

VAR9 = FUN2(VAR2, VAR4);
if (VAR9 < 0)
return VAR9;

VAR18 = FUN3(VAR4);
while (VAR18) {
if (!FUN4(VAR18->VAR19, "")) {
VAR13 = VAR18;
} else if (!FUN4(VAR18->VAR19, "")) {
VAR14 = VAR18;
} else if (!FUN4(VAR18->VAR19, "")) {
VAR15 = VAR18;
} else if (!FUN4(VAR18->VAR19, "")) {
VAR16 = VAR18;
} else if (!FUN4(VAR18->VAR19, "")) {
VAR17 = VAR18;
} else if (!FUN4(VAR18->VAR19, "")) {
VAR9 = FUN5(VAR2, VAR3, VAR18,
VAR4,
VAR5,
VAR6,
VAR7,
VAR8,
VAR13,
VAR14,
VAR15,
VAR16,
VAR17);
if (VAR9 < 0)
goto VAR20;
}
VAR18 = FUN6(VAR18);
}

VAR20:
FUN7(VAR11->VAR21);
VAR11->VAR21 = NULL;
return VAR9;
}