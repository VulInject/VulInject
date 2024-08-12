static int FUN1(int VAR1, char *VAR2, int VAR3, char *VAR4,
int VAR5, char *VAR6)
{
struct VAR7 *VAR8;
int VAR9 = 0;

FUN2(VAR10, "", VAR2);

VAR8 = FUN3(sizeof(*VAR8), VAR11);
if (!VAR8)
return -VAR12;
FUN4(&VAR8->VAR13);

FUN5(VAR1 == (strlen(VAR2) + 1));
VAR8->VAR14 = FUN6(VAR2, VAR1, VAR11);
if (!VAR8->VAR14) {
VAR9 = -VAR12;
goto VAR15;
}

FUN5(VAR3 == (strlen(VAR4) + 1));
VAR8->VAR16 = FUN6(VAR4, VAR3, VAR11);
if (!VAR8->VAR16) {
VAR9 = -VAR12;
goto VAR17;
}

if (VAR5 > 0) {
FUN5(VAR5 == (strlen(VAR6) + 1));
VAR8->VAR18 = FUN6(VAR6, VAR5, VAR11);
if (!VAR8->VAR18) {
VAR9 = -VAR12;
goto VAR19;
}
}

FUN7(&VAR20);
VAR8->VAR21 = 1;
VAR8->VAR22 = false;
FUN8(&VAR8->VAR13, &VAR23);
FUN9(&VAR20);
return VAR9;

VAR19:
FUN10(VAR8->VAR16);
VAR17:
FUN10(VAR8->VAR14);
VAR15:
FUN10(VAR8);
return VAR9;
}