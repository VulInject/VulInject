int FUN1(VAR1 *VAR2, u_char VAR3, short VAR4 *VAR5)
{
FPU_REG VAR6;
int VAR7;

if (VAR3 == VAR8) {

FUN2(VAR9);
goto VAR10;
} else if (VAR3 == VAR11) {
VAR3 = FUN3(VAR2);
if ((VAR3 == VAR12) || (VAR3 == VAR13)) {
FUN2(VAR14);
goto VAR10;
}
}

FUN4(VAR2, &VAR6);
VAR7 = FUN5(&VAR6, VAR3);
if (VAR6.VAR15 ||
((VAR6.VAR16 & 0xffff8000) &&
!((VAR6.VAR16 == 0x8000) && FUN6(&VAR6)))) {
FUN2(VAR14);

VAR10:
if (VAR17 & VAR14) {

VAR6.VAR16 = 0x8000;
} else
return 0;
} else {
if (VAR7)
FUN7(VAR7);
if (FUN6(&VAR6))
VAR6.VAR16 = -VAR6.VAR16;
}

VAR18;
FUN8(VAR5, 2);
FUN9((short)VAR6.VAR16, VAR5);
VAR19;

return 1;
}