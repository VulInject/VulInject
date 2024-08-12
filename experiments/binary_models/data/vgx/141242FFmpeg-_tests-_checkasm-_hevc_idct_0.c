static void FUN1(HEVCDSPContext VAR1, int VAR2)
{
int VAR3;
FUN2(32, VAR4, VAR5, [32 * 32]);
FUN2(32, VAR4, VAR6, [32 * 32]);

for (VAR3 = 2; VAR3 <= 5; VAR3++) {
int VAR7 = 1 << VAR3;
int VAR8 = VAR7 * VAR7;
int VAR9 = VAR7;
FUN3(void, VAR4 *VAR10, int VAR9);

FUN4(VAR5, VAR8);
memcpy(VAR6, VAR5, sizeof(*VAR5) * VAR8);
if (FUN5(VAR1.VAR11[VAR3 - 2], "", VAR7, VAR7, VAR2)) {
FUN6(VAR5, VAR9);
FUN7(VAR6, VAR9);
if (memcmp(VAR5, VAR6, sizeof(*VAR5) * VAR8))
FUN8();
FUN9(VAR6, VAR9);
}
}
}