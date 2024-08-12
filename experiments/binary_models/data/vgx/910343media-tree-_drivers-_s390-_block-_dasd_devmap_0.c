static VAR1 FUN1(struct VAR2 *VAR3,
struct VAR4 *VAR5, char *VAR6)
{
struct VAR7 *VAR2;
struct dasd_uid VAR8;

VAR2 = FUN2(FUN3(VAR3));
if (FUN4(VAR2))
return sprintf(VAR6, "");

if (VAR2->VAR9 && VAR2->VAR9->VAR10 &&
!VAR2->VAR9->FUN5(VAR2, &VAR8)) {
if (VAR8.VAR11 == VAR12 ||
VAR8.VAR11 == VAR13) {
FUN6(VAR2);
return sprintf(VAR6, "");
}
}
FUN6(VAR2);

return sprintf(VAR6, "");
}