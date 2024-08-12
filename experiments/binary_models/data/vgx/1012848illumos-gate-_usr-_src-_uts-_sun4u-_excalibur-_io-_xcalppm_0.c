static int
FUN1(VAR1 *VAR2, ddi_attach_cmd_t VAR3)
{
char *VAR4 = "";
VAR5 *VAR6;
VAR7 **VAR8;
int VAR9;

FUN2(VAR10, ("", VAR4, VAR3));
VAR9 = VAR11;

switch (VAR3) {
case VAR12:
if (VAR13 != -1) {
FUN2(VAR14,
("", VAR4));
return (VAR15);
}
VAR13 = FUN3(VAR2);


if (FUN4(VAR16, VAR13) != 0)
return (VAR15);
VAR6 = FUN5(VAR16, VAR13);
FUN6(&VAR6->VAR17, NULL, VAR18, NULL);
FUN6(&VAR6->VAR19, NULL, VAR18, NULL);

if (FUN7(VAR2, "", VAR20,
VAR13, "", 0) == VAR15) {
FUN8(VAR16, VAR13);
FUN2(VAR14,
("", VAR4,
(void *)VAR2));
return (VAR15);
}
FUN9(VAR2);
VAR6->VAR2 = VAR2;

if (VAR9 = FUN10(VAR2))
return (VAR9);


if (FUN11(VAR2) != VAR11)
return (VAR15);

if ((VAR9 =
FUN12(VAR21, VAR2)) != VAR11) {
FUN2(VAR14,
("", VAR4));
return (VAR9);
}

for (VAR8 = VAR22; *VAR8; VAR8++)
FUN6(&(*VAR8)->VAR23, NULL, VAR18, NULL);

break;

case VAR24:
VAR6 = FUN5(VAR16, VAR13);
FUN13(&VAR6->VAR17);
VAR6->VAR25 &= ~VAR26;
FUN14(&VAR6->VAR17);
break;

default:
FUN15(VAR27, ""
"", VAR3, (void *)VAR2);
VAR9 = VAR15;
}

return (VAR9);
}