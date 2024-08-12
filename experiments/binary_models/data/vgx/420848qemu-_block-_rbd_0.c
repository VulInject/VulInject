static int FUN1(VAR1 *VAR2, VAR3 *VAR4,
VAR5 *VAR6, bool VAR7,
const char *VAR8, const char *VAR9,
VAR10 **VAR11)
{
char *VAR12 = NULL;
VAR10 *VAR13 = NULL;
int VAR14;

if (VAR9) {
if (VAR6->VAR15) {
FUN2(VAR11,
"");
return -VAR16;
}
VAR6->VAR15 = FUN3(VAR9);
VAR6->VAR17 = true;
}

VAR12 = FUN4(VAR6, &VAR13);
if (VAR13) {
FUN5(VAR11, VAR13);
VAR14 = -VAR16;
goto VAR18;
}

VAR14 = FUN6(VAR2, VAR6->VAR19);
if (VAR14 < 0) {
FUN7(VAR11, -VAR14, "");
goto VAR18;
}


VAR14 = FUN8(*VAR2, VAR6->VAR20);
if (VAR6->VAR21 && VAR14 < 0) {
FUN7(VAR11, -VAR14, "", VAR6->VAR20);
goto VAR22;
}

VAR14 = FUN9(*VAR2, VAR8, VAR11);
if (VAR14 < 0) {
goto VAR22;
}

if (VAR12) {
VAR14 = FUN10(*VAR2, "", VAR12);
if (VAR14 < 0) {
goto VAR22;
}
}

VAR14 = FUN11(*VAR2, VAR6, VAR11);
if (VAR14 < 0) {
goto VAR22;
}


if (VAR7) {
FUN10(*VAR2, "", "");
} else {
FUN10(*VAR2, "", "");
}

VAR14 = FUN12(*VAR2);
if (VAR14 < 0) {
FUN7(VAR11, -VAR14, "");
goto VAR22;
}

VAR14 = FUN13(*VAR2, VAR6->VAR23, VAR4);
if (VAR14 < 0) {
FUN7(VAR11, -VAR14, "", VAR6->VAR23);
goto VAR22;
}

FUN14(*VAR4, VAR6->VAR24);

VAR14 = 0;
goto VAR18;

VAR22:
FUN15(*VAR2);
VAR18:
FUN16(VAR12);
return VAR14;
}