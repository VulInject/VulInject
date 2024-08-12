VAR1
FUN1(struct VAR2 *VAR3,
uint8_t VAR4)
{
switch (VAR4) {
case 1:
return 0;
case 2:
return FUN2(2) | FUN2(0);
case 4:
return FUN2(3) | FUN2(2) | FUN2(0);
default:
FUN3(VAR4);

return 0;
}
}