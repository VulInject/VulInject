static bool FUN1(struct VAR1 *VAR2)
{
if (VAR2->VAR3 == VAR4) {
switch (VAR2->VAR5[VAR6][0]) {
case FUN2(13, 0, 0):
case FUN2(13, 0, 10):
return true;
default:
return false;
}
}

return  VAR2->VAR3 == VAR7 ||
VAR2->VAR3 == VAR8 ||
VAR2->VAR3 == VAR9 ||
VAR2->VAR3 == VAR10;
}