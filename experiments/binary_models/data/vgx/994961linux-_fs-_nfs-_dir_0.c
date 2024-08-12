static void FUN1(struct VAR1 *VAR1, u64 VAR2,
u64 VAR3)
{
if (FUN2(VAR1)) {
if (FUN3(VAR1, VAR2, VAR3))
return;
FUN4(VAR1);
}
FUN5(VAR1, VAR2, VAR3);
FUN6(VAR1);
}