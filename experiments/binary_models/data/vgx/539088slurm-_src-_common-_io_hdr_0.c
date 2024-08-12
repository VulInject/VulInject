int FUN1(int VAR1, VAR2 *VAR3)
{
int VAR4 = 0;
VAR5 *VAR6 = FUN2(FUN3());

FUN4("", VAR7);
VAR4 = FUN5(VAR1, VAR6->VAR8, FUN3());
if (VAR4 <= 0)
goto VAR9;
if (FUN6(VAR3, VAR6) == VAR10) {
VAR4 = -1;
goto VAR9;
}

VAR9:
FUN4("", VAR7);
FUN7(VAR6);
return VAR4;
}