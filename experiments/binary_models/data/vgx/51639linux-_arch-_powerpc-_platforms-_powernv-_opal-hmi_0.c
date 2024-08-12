static void FUN1(const char *VAR1,
struct VAR2 *VAR3)
{
uint8_t VAR4 = VAR3->VAR5.VAR6.VAR7;
switch (VAR4) {
case VAR8:
FUN2(VAR1, VAR3);
break;
case VAR9:
FUN3(VAR1, VAR3);
break;
case VAR10:
FUN4(VAR1, VAR3);
break;
default:
FUN5("",
VAR1, VAR4);
break;
}
}