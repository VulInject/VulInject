static void FUN1(struct VAR1 *VAR2, u32 VAR3,
u32 VAR4)
{
if (VAR2->VAR5 & VAR6) {
if (VAR2->VAR5 & VAR7)
FUN2(VAR4, VAR2->VAR8 + (VAR3 << 2));
else
FUN3(VAR4, VAR2->VAR8 + (VAR3 << 2));
}
else
FUN4(VAR2->VAR9, VAR3, VAR4);
}