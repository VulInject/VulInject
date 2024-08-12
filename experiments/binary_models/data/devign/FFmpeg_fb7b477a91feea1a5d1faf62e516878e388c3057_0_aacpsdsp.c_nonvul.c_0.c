static void FUN1(void)
{
    FUN2(VAR1, VAR2, [VAR3], [2]);
    FUN2(VAR1, VAR4, [VAR3], [2]);
    FUN2(VAR1, VAR5, [13], [2]);
    FUN2(VAR1, VAR6, [VAR7], [8][2]);
    FUN3(void, FUN4(*VAR8)[2], FUN4(*VAR5)[2], const FUN4(*VAR6)[8][2], ptrdiff_t VAR9, int VAR10);
    FUN5((VAR1 *)VAR5, 12 * 2);
    FUN5((VAR1 *)VAR6, VAR7 * 8 * 2);
    FUN5((VAR1 *)VAR2, VAR3 * 2);
    memcpy(VAR4, VAR2, VAR3 * 2 * sizeof(VAR1));
    FUN6(VAR2, VAR5, VAR6, VAR11, VAR7);
    FUN7(VAR4, VAR5, VAR6, VAR11, VAR7);
    if (!FUN8((float *)VAR2, (float *)VAR4, VAR12, VAR3 * 2))
        FUN9();
    FUN10(VAR4, VAR5, VAR6, VAR11, VAR7);
}