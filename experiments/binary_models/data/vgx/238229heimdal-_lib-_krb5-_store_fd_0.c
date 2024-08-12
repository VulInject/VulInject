static int
FUN1(VAR1 * VAR2, off_t VAR3)
{
off_t VAR4;

if (FUN2(FUN3(VAR2), VAR3) == -1)
return VAR5;

VAR4 = FUN4(FUN3(VAR2), 0, VAR6);
if (VAR4 == -1)
return VAR5;

if (VAR4 > VAR3) {
VAR4 = FUN4(FUN3(VAR2), VAR3, VAR7);
if (VAR4 == -1)
return VAR5;
}

return 0;
}