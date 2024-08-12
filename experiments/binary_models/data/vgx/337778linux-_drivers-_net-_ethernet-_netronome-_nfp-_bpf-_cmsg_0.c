static void
FUN1(struct VAR1 *VAR2, enum nfp_ccm_type VAR3,
struct VAR4 *VAR5, u32 VAR6)
{
bool VAR7, VAR8;

VAR7 = FUN2(VAR3);
VAR8 = FUN3(VAR3);
if (VAR7 || VAR8) {
u64 VAR9 = 0;

if (VAR8)
VAR9 = FUN4() + VAR10;

FUN5(&VAR2->VAR11);
if (VAR7) {
VAR2->VAR12--;
VAR2->VAR6++;
}
if (VAR8 && !VAR2->VAR12 &&
VAR2->VAR6 == VAR6) {
VAR2->VAR13 = VAR9;
FUN6(VAR2->VAR14, VAR5);
}
FUN7(&VAR2->VAR11);
}

FUN8(VAR5);
}