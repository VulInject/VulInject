int FUN1(u32 VAR1)
{
int VAR2, VAR3;

VAR3 = FUN2(FUN3(""), 2, 2, &VAR2,
VAR4, VAR1);
if (VAR3 || VAR2 != VAR5)
return -1;

VAR3 = FUN4(VAR6, VAR1, VAR7);
if (VAR3)
return VAR3;

VAR3 = FUN4(VAR8, VAR1, VAR9);
if (VAR3) {
FUN4(VAR6, VAR1, VAR10);
return VAR3;
}

return 0;
}