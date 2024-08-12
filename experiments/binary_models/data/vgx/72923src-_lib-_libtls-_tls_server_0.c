static int
FUN1(VAR1 *VAR2, unsigned char *VAR3, unsigned char *VAR4,
VAR5 *VAR6, VAR7 *VAR8, int VAR9)
{
struct VAR10 *VAR11;
struct VAR12 *VAR13;

if ((VAR13 = FUN2(VAR2)) == NULL)
return (-1);

if (VAR9 == 1) {

VAR11 = FUN3(VAR13->VAR14, NULL);
if (VAR11 == NULL) {
FUN4(VAR13, "");
return (-1);
}

memcpy(VAR3, VAR11->VAR15, sizeof(VAR11->VAR15));
FUN5(VAR4, VAR16);
if (!FUN6(VAR6, FUN7(), NULL,
VAR11->VAR17, VAR4)) {
FUN4(VAR13, "");
return (-1);
}
if (!FUN8(VAR8, VAR11->VAR18, sizeof(VAR11->VAR18),
FUN9(), NULL)) {
FUN4(VAR13, "");
return (-1);
}
return (0);
} else {

VAR11 = FUN3(VAR13->VAR14, VAR3);
if (VAR11 == NULL)
return (0);

if (!FUN10(VAR6, FUN7(), NULL,
VAR11->VAR17, VAR4)) {
FUN4(VAR13, "");
return (-1);
}
if (!FUN8(VAR8, VAR11->VAR18, sizeof(VAR11->VAR18),
FUN9(), NULL)) {
FUN4(VAR13, "");
return (-1);
}


if (VAR11 != &VAR13->VAR14->VAR19[0])
return (2);
return (1);
}
}