static int FUN1(const VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    VAR7 *VAR8, *VAR9 = NULL;
    unsigned long *VAR10, *VAR11;
    int VAR12, VAR13, VAR14, VAR15, VAR16, VAR17;
    long VAR18, VAR19;
    int VAR20 = 0;
    VAR14 = VAR2->VAR14;
    VAR15 = VAR2->VAR15;
    VAR16 = VAR2->VAR16;
    VAR9 = FUN2(VAR14);
    FUN3(VAR6, VAR21, VAR22);
    VAR17 = VAR15 * VAR16 * sizeof(long);
    VAR10 = (unsigned long *)FUN2(VAR17);
    VAR11 = (unsigned long *)FUN2(VAR17);
    if (!FUN4(VAR6, (VAR7 *)VAR10, VAR17))
    {
        VAR20 = -1;
        goto VAR23;
    }
    if (!FUN4(VAR6, (VAR7 *)VAR11, VAR17))
    {
        VAR20 = -1;
        goto VAR23;
    }
    for (VAR13 = 0; VAR13 < VAR16; VAR13++)
    {
        for (VAR12 = 0; VAR12 < VAR15; VAR12++)
        {
            VAR8 = VAR4->VAR24[0] + (VAR15 - 1 - VAR12) * (VAR14 * VAR16);
            VAR18 = FUN5(&VAR10[VAR12 + VAR13 * VAR15]);
            VAR19 = FUN5(&VAR11[VAR12 + VAR13 * VAR15]);
            if (FUN6(VAR6) != VAR18)
            {
                FUN3(VAR6, VAR18, VAR22);
            }
            FUN4(VAR6, VAR9, VAR19);
            FUN7(VAR8, VAR9, VAR13, VAR16);
        }
    }
VAR23:
    FUN8(VAR10);
    FUN8(VAR11);
    FUN8(VAR9);
    return VAR20;
}