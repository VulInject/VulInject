int
FUN1(VAR1 *VAR2, int VAR3, int VAR4)
{
VAR5 *VAR6;
int VAR7;

if (VAR3 == -1)
return 1;

if (VAR3 == 0) {
int VAR8;
VAR8 = FUN2(VAR9, VAR2, 0);
if (VAR8 != VAR10)
return VAR8;
return FUN3(NULL, VAR2, 0);
}
VAR7 = FUN4(VAR3);
if (VAR7 == -1)
return FUN5(VAR3, VAR2, VAR4);
VAR6 = FUN6(VAR7);
return VAR6->FUN7(VAR6, VAR2, VAR4);
}