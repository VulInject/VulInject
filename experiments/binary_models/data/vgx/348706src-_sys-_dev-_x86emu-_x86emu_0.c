void 
FUN1(struct VAR1 *VAR2)
{
VAR2->VAR3.VAR4 = 0;

if (FUN2(&VAR2->VAR5))
return;
if (FUN2(VAR2->VAR5))
return;

for (;;) {
if (VAR2->VAR3.VAR4) {
if (((VAR2->VAR3.VAR4 & VAR6) &&
(VAR2->VAR3.VAR7 == 0 || VAR2->VAR3.VAR7 == 2)) ||
!FUN3(VAR8)) {
FUN4(VAR2);
}
}
if (VAR2->VAR3.VAR9 == 0 && VAR2->VAR3.VAR10 == 0)
return;
FUN5(VAR2);
++VAR2->VAR11;
}
}