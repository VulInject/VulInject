void FUN1(struct VAR1 *VAR1,
const void *VAR2, size_t VAR3)
{
struct VAR4 *VAR5 = FUN2(VAR1);
char VAR6[64];
const VAR7 *VAR8 = VAR2;
FUN3(VAR5, ""
"", FUN4(*VAR8), VAR3);
snprintf(VAR6, sizeof(VAR6), "",
FUN5(VAR5), FUN6(VAR5));
if (VAR3 > 64) {
FUN7(VAR9, VAR6, VAR10,
8, 4, VAR2, 64, 0);
FUN8(VAR9 ""
"", VAR6);
} else
FUN7(VAR9, VAR6, VAR10,
8, 4, VAR2, VAR3, 0);
}