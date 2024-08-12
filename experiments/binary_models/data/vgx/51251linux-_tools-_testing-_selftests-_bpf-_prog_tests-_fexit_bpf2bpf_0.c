static int FUN1(struct VAR1 *VAR2)
{
const char *VAR3 = "";
const char *VAR4 = "";
const char *VAR5 = "";
struct VAR6 *VAR7 = NULL;
struct VAR1 *VAR8;
struct VAR9 *VAR10;
int VAR11 = 0, VAR12;
FUN2(VAR13, VAR14,
.VAR15 = &VAR16,
.VAR17 = sizeof(VAR16),
.VAR18 = 1,
);

VAR7 = FUN3(VAR2, VAR3);
if (!FUN4(VAR7, ""))
return -VAR19;

VAR11 = FUN5(VAR5, VAR20,
&VAR8, &VAR12);
if (!FUN6(VAR11, ""))
return VAR11;

VAR10 = FUN7(VAR7, VAR12, VAR4);
if (!FUN4(VAR10, ""))
goto VAR21;

VAR11 = FUN8(VAR12, &VAR14);
if (!FUN6(VAR11, ""))
goto VAR21;
if (!FUN6(VAR14.VAR22, ""))
goto VAR21;

VAR11 = FUN9(VAR2, 1, true);
if (VAR11)
goto VAR21;

VAR21:
FUN10(VAR10);
FUN11(VAR8);
return VAR11;
}