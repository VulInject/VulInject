static int FUN1(u_int VAR1, u_long VAR2)
{
int VAR3;
switch (VAR1) {
case VAR4:
return FUN2(VAR2, VAR5 | VAR6);
case VAR7:
return FUN2(VAR2, 0);
case VAR8:
return FUN2(VAR2, VAR5);
case VAR9:
return FUN2(VAR2,
FUN3(VAR10.VAR11) |
FUN3(VAR10.VAR12) << 8);
case VAR13:
FUN4(VAR2, VAR3);
return FUN2(VAR2, FUN5(VAR3));
case VAR14:
return FUN2(VAR2, VAR10.VAR15);
case VAR16:
FUN4(VAR2, VAR3);
return FUN2(VAR2, FUN6(VAR3));
}
return -VAR17;
}