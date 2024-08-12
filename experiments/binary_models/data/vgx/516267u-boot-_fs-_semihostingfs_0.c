static int FUN1(const char *VAR1, loff_t VAR2, void *VAR3,
loff_t VAR4, VAR5 *VAR6)
{
long VAR7, VAR8, VAR9;

VAR7 = FUN2(VAR1, VAR10 | VAR11 | VAR12);
if (VAR7 < 0)
return VAR7;
VAR9 = FUN3(VAR7, VAR2);
if (VAR9 < 0) {
FUN4(VAR7);
return VAR9;
}

VAR9 = FUN5(VAR7, VAR3, VAR4, &VAR8);
FUN4(VAR7);
*VAR6 = VAR8;
return VAR9;
}