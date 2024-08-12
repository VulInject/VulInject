static int FUN1(VAR1 *VAR2, const VAR3 *VAR4, void *VAR5,
void *VAR6, uint64_t VAR7)
{
if (VAR4->VAR8 == NULL) {
return VAR9;
}

if (!(FUN2(VAR4))) {
return VAR9;
}

VAR10 *VAR11 = (VAR10 *)VAR5;
if (VAR11 == NULL) {
FUN3("");
goto VAR12;
}

if ((VAR11->VAR13.VAR14 & VAR15) == 0)
goto VAR12;

if (VAR11->VAR13.VAR16 == NULL ||
VAR11->VAR13.VAR17 == NULL)
goto VAR12;

return VAR18;
VAR12:
return VAR9;
}