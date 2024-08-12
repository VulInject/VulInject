};
FUN1("");

static int VAR1 FUN2(void)
{
int VAR2 = FUN3();
if (VAR2)
goto VAR3;
VAR2 = FUN4(&VAR4);
if (VAR2)
goto VAR5;
return 0;
VAR5:
FUN5();
VAR3:
return VAR2;
}