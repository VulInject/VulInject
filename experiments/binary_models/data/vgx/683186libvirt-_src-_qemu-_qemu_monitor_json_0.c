static void
FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
VAR3 *VAR5;
const char *VAR6;
const char *VAR7;
const char *VAR8;
unsigned int VAR9;
unsigned int VAR10;

if (!(VAR5 = FUN2(VAR4, "")))
goto VAR11;


VAR6 = FUN3(VAR5, "");

if (!(VAR7 = FUN3(VAR5, "")))
goto VAR11;

if (!(VAR8 = FUN3(VAR5, "")))
goto VAR11;

if (FUN4(VAR5, "", &VAR9) < 0)
goto VAR11;

if (FUN4(VAR5, "", &VAR10) < 0)
goto VAR11;

FUN5(VAR2, VAR6, VAR7, VAR8, VAR9, VAR10);
return;

VAR11:
FUN6("");
return;
}