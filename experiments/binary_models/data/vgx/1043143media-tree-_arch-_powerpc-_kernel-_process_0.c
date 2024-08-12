void FUN1(struct VAR1 *VAR2)
{
unsigned long VAR3;

if (!FUN2(VAR2->VAR3) &&
!VAR4->VAR5.VAR6 && !FUN3(VAR4->VAR5))
return;

VAR3 = VAR2->VAR3;
FUN4(VAR7);


if ((!(VAR3 & VAR8)) && FUN5(VAR4))
VAR3 |= VAR8 | VAR4->VAR5.VAR9;

if ((!(VAR3 & VAR10)) && FUN6(VAR4))
VAR3 |= VAR10;

if ((VAR3 & (VAR8 | VAR10)) == (VAR8 | VAR10) &&
FUN7(VAR4)) {
VAR3 |= VAR11;
}

FUN8(VAR7);

VAR2->VAR3 = VAR3;
}