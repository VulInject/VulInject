FUN1(VAR1, "");
FUN2(VAR2, int, 0644);
FUN1(VAR2, "");
FUN2(VAR3, int, 0644);
FUN1(VAR3, "");

FUN3(VAR4, VAR5);
FUN4("");



static int VAR6 FUN5(void)
{
int VAR7;

VAR7 = FUN6();
if (VAR7 < 0)
goto VAR8;


VAR7 = FUN7();
if (VAR7 < 0)
goto VAR8;


VAR7 = FUN8();
if (VAR7 < 0)
goto VAR9;


VAR7 = FUN9();
if (VAR7 < 0)
goto VAR10;

FUN10();
return 0;

VAR10:
FUN11();
VAR9:
FUN12();
VAR8:
return VAR7;
}