static void FUN1(HEVCDSPContext VAR1, int VAR2)
{
    int VAR3;
    FUN2(VAR4, VAR5, [32 * 32]);
    FUN2(VAR4, VAR6, [32 * 32]);
    FUN2(VAR7, VAR8, [32 * 32 * 2]);
    FUN2(VAR7, VAR9, [32 * 32 * 2]);
    for (VAR3 = 2; VAR3 <= 5; VAR3++)
    {
        int VAR10 = 1 << VAR3;
        int VAR11 = VAR10 * VAR10;
        ptrdiff_t VAR12 = VAR10 << (VAR2 > 8);
        FUN3(VAR13, void, VAR7 *VAR14, VAR4 *VAR15, ptrdiff_t VAR12);
        FUN4(VAR5, VAR11);
        FUN5(VAR8, VAR11);
        memcpy(VAR6, VAR5, sizeof(*VAR5) * VAR11);
        memcpy(VAR9, VAR8, VAR11);
        if (FUN6(VAR1.VAR16[VAR3 - 2], "", VAR10, VAR10, VAR2))
        {
            FUN7(VAR8, VAR5, VAR12);
            FUN8(VAR9, VAR6, VAR12);
            if (memcmp(VAR8, VAR9, VAR11))
                FUN9();
            FUN10(VAR9, VAR6, VAR12);
        }
    }
}