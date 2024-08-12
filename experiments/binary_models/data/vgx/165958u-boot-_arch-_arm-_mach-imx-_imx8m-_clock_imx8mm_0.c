VAR1 FUN1(enum mxc_clock VAR2)
{
u32 VAR3;

switch (VAR2) {
case VAR4:
return FUN2();
case VAR5:
FUN3(VAR6, &VAR3);
VAR3 = VAR3 & 0x3;
return FUN4(VAR7) / 2 / (VAR3 + 1);
case VAR8:
return FUN4(VAR9);
case VAR10:
return FUN4(VAR11);
case VAR12:
return FUN4(VAR13);
case VAR14:
return FUN4(VAR15);
case VAR16:
return FUN4(VAR17);
case VAR18:
return FUN4(VAR19);
case VAR20:
return FUN4(VAR21);
default:
FUN5("", VAR2);
break;
}

return 0;
}