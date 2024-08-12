static int
FUN1(struct VAR1 *VAR2, const struct VAR3 *VAR4,
u64 VAR5, u64 VAR6)
{
if ((VAR4->VAR7 & VAR8)) {
u64 VAR9 = FUN2(VAR2, VAR4, VAR5, VAR6, "",
true, false, VAR10,
NULL, NULL, VAR4->VAR11->VAR12->VAR13);
if (VAR9 != ~0ULL) {
if ((VAR6 = VAR9 - VAR5))
FUN3(VAR2, VAR4, VAR5, VAR6);
return -VAR14;
}
return 0;
}
return -VAR15;
}