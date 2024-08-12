static void FUN1(void *VAR1, hwaddr VAR2,
uint64_t VAR3, unsigned VAR4)
{
VAR5 *VAR6 = FUN2(VAR1);
uint32_t VAR7 = VAR2 >> 3;

switch (VAR7) {
case VAR8:
FUN3(VAR6, VAR6->VAR9 & VAR3);
break;
case VAR10:
FUN3(VAR6, VAR6->VAR9 | VAR3);
break;
case VAR11:
FUN3(VAR6, VAR3);
break;
default:
FUN4(VAR12, ""
VAR13 "", VAR2 >> 3);
}
}