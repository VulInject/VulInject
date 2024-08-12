VAR1 FUN1(uintn VAR2, uintn VAR3)
{
switch (VAR4) {
case VAR5:

return VAR6;
break;

case VAR7:
{
uint32 VAR8 = FUN2();
uintn VAR9 = FUN3(VAR2,VAR8);
uintn VAR10 = VAR3 + VAR2 - VAR9;
VAR10 = FUN4(VAR10, VAR8);
return FUN5(VAR9, VAR10);
break;
}

default:

return VAR11;
}
}