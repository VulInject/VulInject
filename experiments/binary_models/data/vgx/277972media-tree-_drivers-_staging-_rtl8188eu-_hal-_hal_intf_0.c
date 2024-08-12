void FUN1(struct VAR1 *VAR2, u32 VAR3, u8 VAR4)
{
struct VAR5 *VAR6 = &(VAR2->VAR7);

if (FUN2(VAR6, VAR8) == true) {
struct VAR9 *VAR10 = NULL;
struct VAR11 *VAR12 = &VAR2->VAR13;

if ((VAR3-1) > 0)
VAR10 = VAR12->VAR14[(VAR3-1) - 1];
if (VAR10)
FUN3(VAR2, VAR10, 0);
} else {
FUN4(VAR2, VAR3, VAR4);
}
}