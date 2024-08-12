static enum VAR1 FUN1(struct VAR2 *VAR3)
{
u8 VAR4, VAR5;

VAR4 = FUN2(VAR3, VAR6);
if ((VAR4 & VAR7) == VAR8)

VAR5 = FUN2(VAR3, VAR9);
else

VAR5 = VAR4;

switch (VAR5 & VAR7) {
case VAR10:
return VAR11;

case VAR12:
return VAR13;

default:
return VAR14;
}

return VAR14;
}