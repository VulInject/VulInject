static int FUN1(struct VAR1 *VAR2, long *VAR3, uint32_t VAR4)
{
int VAR5 = 0;
int VAR6 = 0;

if (VAR3[VAR4] > VAR7) {
FUN2("", VAR3[VAR4]);
return -VAR8;
}
if (VAR2->VAR9 == VAR3[VAR4])
return 0;


VAR5 =
FUN3(VAR3[VAR4]);
if (VAR5 &&
FUN4(VAR2) &&
!VAR2->VAR10) {
FUN5(VAR2, false);
VAR2->VAR10 = true;
}
VAR6 = FUN6(VAR2, VAR11,
1 << VAR5,
NULL);
if (!VAR6)
VAR2->VAR9 = VAR3[VAR4];
if (VAR5 && VAR2->VAR10) {
FUN5(VAR2, true);
VAR2->VAR10 = false;
}

return 0;
}