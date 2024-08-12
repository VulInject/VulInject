static void FUN1(VAR1 *VAR2, bool VAR3, uintptr_t VAR4)
{
unsigned VAR5, VAR6;


VAR6 = VAR2->VAR7.VAR8;
if (VAR6 == 0) {
return;
}
VAR2->VAR7.VAR8 = 0;
VAR5 = FUN2(VAR6);


if (!(VAR5 & VAR9) &&
!((VAR2->VAR10 >> 24) & VAR11)) {
VAR5 &= ~VAR11;
}




if (VAR5 & ~VAR9) {
if (VAR5 & ~VAR9 & VAR2->VAR10 >> 24) {

FUN3(VAR2, VAR5, VAR4);
}

VAR2->VAR10 |= (VAR5 & ~VAR9) << 16;
}


if (VAR5 & VAR9 && !VAR3) {

if (VAR5 & VAR9 & VAR2->VAR10 >> 24) {
FUN3(VAR2, VAR5 & VAR9,
VAR4);
}

VAR2->VAR10 |= (VAR5 & VAR9) << 16;
}
}