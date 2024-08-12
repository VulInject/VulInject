static int FUN1(void)
{
int VAR1;

VAR1 = FUN2(VAR2->VAR3);
if (VAR1)
goto VAR4;

VAR1 = FUN2(VAR2->VAR5);
if (VAR1)
goto VAR6;

VAR1 = FUN2(VAR2->VAR7);
if (VAR1)
goto VAR8;

return 0;

VAR8:
FUN3(VAR2->VAR5);
VAR6:
FUN3(VAR2->VAR3);
VAR4:
return VAR1;
}