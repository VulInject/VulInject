static void FUN1(void)
{
    FUN2(VAR1, VAR2, [VAR3]);
    FUN2(VAR1, VAR4, [VAR3]);
    FUN2(VAR1, VAR5, [VAR3]);
    FUN2(VAR1, VAR6, [VAR3]);
    FUN2(VAR1, VAR7, [VAR3]);
    FUN2(VAR1, VAR8, [VAR3]);
    ptrdiff_t VAR9 = VAR3;
    int VAR10 = VAR11;
    FUN3(void, const VAR1 *VAR2, const VAR1 *VAR4, const VAR1 *VAR5, const VAR1 *VAR6, VAR1 *VAR12, ptrdiff_t VAR13, ptrdiff_t VAR14, ptrdiff_t VAR15, ptrdiff_t VAR16, ptrdiff_t VAR17, int VAR10, int VAR18);
    ThresholdContext VAR19;
    VAR19.VAR20 = 8;
    FUN4(&VAR19);
    memset(VAR2, 0, VAR3);
    memset(VAR4, 0, VAR3);
    memset(VAR5, 0, VAR3);
    memset(VAR6, 0, VAR3);
    memset(VAR7, 0, VAR3);
    memset(VAR8, 0, VAR3);
    FUN5(VAR2, VAR11);
    FUN5(VAR4, VAR11);
    FUN5(VAR5, VAR11);
    FUN5(VAR6, VAR11);
    if (FUN6(VAR19.VAR4, ""))
    {
        FUN7(VAR2, VAR4, VAR5, VAR6, VAR7, VAR9, VAR9, VAR9, VAR9, VAR9, VAR10, 1);
        FUN8(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR9, VAR9, VAR9, VAR9, VAR10, 1);
        if (memcmp(VAR7, VAR8, VAR10))
            FUN9();
        FUN10(VAR2, VAR4, VAR5, VAR6, VAR8, VAR9, VAR9, VAR9, VAR9, VAR9, VAR10, 1);
    }
}