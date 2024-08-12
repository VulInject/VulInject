static void
FUN1(const struct VAR1 *VAR2, u32 VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR2->VAR5);
struct VAR6 *VAR7 = &VAR5->VAR7;

if (VAR7->VAR8.VAR9.VAR10.VAR11) {
FUN3(VAR2, VAR3);
} else {
const u32 VAR12 = FUN4(VAR5, VAR3);

FUN5(VAR2, VAR12);
}
}