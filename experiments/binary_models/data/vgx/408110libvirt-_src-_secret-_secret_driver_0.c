static VAR1
FUN1(virConnectPtr VAR2,
const unsigned char *VAR3)
{
virSecretPtr VAR4 = NULL;
VAR5 *VAR6;
VAR7 *VAR8;
char VAR9[VAR10];

FUN2(VAR3, VAR9);
if (!(VAR6 = FUN3(VAR11->VAR12, VAR9))) {
FUN4(VAR13,
FUN5(""), VAR9);
goto VAR14;
}

VAR8 = FUN6(VAR6);
if (FUN7(VAR2, VAR8) < 0)
goto VAR14;

VAR4 = FUN8(VAR2,
VAR8->VAR3,
VAR8->VAR15,
VAR8->VAR16);

VAR14:
FUN9(&VAR6);
return VAR4;
}