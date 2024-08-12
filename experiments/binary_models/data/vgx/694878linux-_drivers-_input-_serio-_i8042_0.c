static int FUN1(void)
{
int VAR1;

VAR1 = FUN2();
if (VAR1)
return VAR1;

VAR1 = FUN3(VAR2, VAR3, VAR4,
"", VAR5);
if (VAR1)
goto VAR6;

VAR1 = FUN4();
if (VAR1)
goto VAR7;

VAR8 = true;
return 0;

VAR7:
FUN5(VAR2, VAR5);
VAR6:
FUN6();
return VAR1;
}