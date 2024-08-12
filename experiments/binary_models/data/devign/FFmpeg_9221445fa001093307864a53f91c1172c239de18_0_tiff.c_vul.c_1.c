static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5, const VAR3 *VAR6, int VAR7, int VAR8, int VAR9)
{
    int VAR10, VAR11 = 0;
    int VAR12;
    VAR3 *VAR13 = FUN2((unsigned)VAR7 + VAR14);
    if (!VAR13)
    {
        FUN3(VAR2->VAR15, VAR16, "");
        return FUN4(VAR17);
    }
    if (!VAR2->VAR18)
    {
        memcpy(VAR13, VAR6, VAR7);
    }
    else
    {
        for (VAR10 = 0; VAR10 < VAR7; VAR10++)
            VAR13[VAR10] = VAR19[VAR6[VAR10]];
    }
    memset(VAR13 + VAR7, 0, VAR14);
    VAR11 = FUN5(VAR2->VAR15, VAR13, VAR7, VAR4, VAR9, VAR5, VAR2->VAR20, VAR2->VAR21);
    if (VAR2->VAR22 < 8 && VAR2->VAR15->VAR23 == VAR24)
        for (VAR12 = 0; VAR12 < VAR9; VAR12++)
        {
            FUN6(VAR2->VAR22, VAR4, 1, VAR4, 0, VAR8, 0);
            VAR4 += VAR5;
        }
    FUN7(VAR13);
    return VAR11;
}