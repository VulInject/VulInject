static void FUN1(void)
{
u8 VAR1;

FUN2(0);


VAR1 = 0x20;
if (FUN3(VAR2,
VAR3, 1, &VAR1, 1) != 0)
goto VAR4;
VAR1 = 0;
if (FUN3(VAR2,
VAR5, 1, &VAR1, 1) != 0)
goto VAR4;

VAR1 = 0x08;
if (FUN3(VAR2,
VAR6, 1, &VAR1, 1) != 0)
goto VAR4;

return;
VAR4:
FUN4("",
VAR2);
}