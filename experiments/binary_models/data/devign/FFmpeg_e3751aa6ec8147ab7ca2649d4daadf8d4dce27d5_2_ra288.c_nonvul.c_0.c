static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR3;
    int VAR10, VAR11;
    VAR12 *VAR13 = VAR2->VAR14;
    GetBitContext VAR15;
    if (VAR7 < VAR2->VAR16)
    {
        FUN2(VAR2, VAR17, "", VAR7, VAR2->VAR16);
        return 0;
    }
    FUN3(&VAR15, VAR6, VAR2->VAR16 * 8);
    for (VAR10 = 0; VAR10 < 32; VAR10++)
    {
        float VAR18 = VAR19[FUN4(&VAR15, 3)];
        int VAR20 = FUN4(&VAR15, 6 + (VAR10 & 1));
        FUN5(VAR13, VAR18, VAR20);
        for (VAR11 = 0; VAR11 < 5; VAR11++)
            *(VAR9++) = 8 * VAR13->VAR21[36 + VAR11];
        if ((VAR10 & 7) == 3)
            FUN6(VAR13);
    }
    *VAR4 = (char *)VAR9 - (char *)VAR3;
    return VAR2->VAR16;
}