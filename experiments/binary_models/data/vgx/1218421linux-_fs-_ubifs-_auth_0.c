void FUN1(const struct VAR1 *VAR2, const void *VAR3, const VAR4 *VAR5,
int VAR6, int VAR7)
{
int VAR8 = FUN2(VAR2->VAR9, 20);
int VAR10 = VAR8 != VAR2->VAR9;
const char *VAR11 = VAR10 ? "" : "";

u8 VAR12[VAR13];

FUN3(VAR2, VAR3, VAR12);

FUN4(VAR2, "", VAR6, VAR7);
FUN4(VAR2, "", VAR8, VAR5, VAR11);
FUN4(VAR2, "", VAR8, VAR12, VAR11);
}