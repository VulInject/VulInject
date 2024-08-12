static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int VAR5)
{
    VAR6 *VAR7 = VAR2->VAR8;
    const char *VAR9;
    int VAR10;
    int64_t VAR11;
VAR12:
    if (VAR7->VAR13)
    {
        VAR10 = FUN2(VAR7->VAR13, VAR4, VAR5);
        if (VAR10 > 0)
            return VAR10;
    }
    if (VAR7->VAR13)
    {
        FUN3(VAR7->VAR13);
        VAR7->VAR13 = NULL;
        VAR7->VAR14++;
    }
    VAR11 = VAR7->VAR15 > 0 ? VAR7->VAR16[VAR7->VAR15 - 1]->VAR17 : VAR7->VAR18;
    VAR11 *= 1000000;
VAR19:
    if (!VAR7->VAR20)
    {
        int64_t VAR21 = FUN4();
        if (VAR21 - VAR7->VAR22 >= VAR11)
        {
            if ((VAR10 = FUN5(VAR2, VAR7->VAR23)) < 0)
                return VAR10;
            VAR11 = VAR7->VAR18 * 500000;
        }
    }
    if (VAR7->VAR14 < VAR7->VAR24)
    {
        FUN6(VAR2, VAR25, "", VAR7->VAR24 - VAR7->VAR14);
        VAR7->VAR14 = VAR7->VAR24;
    }
    if (VAR7->VAR14 - VAR7->VAR24 >= VAR7->VAR15)
    {
        if (VAR7->VAR20)
            return VAR26;
        while (FUN4() - VAR7->VAR22 < VAR11)
        {
            if (FUN7(&VAR2->VAR27))
                return VAR28;
            FUN8(100 * 1000);
        }
        goto VAR19;
    }
    VAR9 = VAR7->VAR16[VAR7->VAR14 - VAR7->VAR24]->VAR9, FUN6(VAR2, VAR29, "", VAR9);
    VAR10 = FUN9(&VAR7->VAR13, VAR9, VAR30, &VAR2->VAR27, NULL);
    if (VAR10 < 0)
    {
        if (FUN7(&VAR2->VAR27))
            return VAR28;
        FUN6(VAR2, VAR25, "", VAR9);
        VAR7->VAR14++;
        goto VAR19;
    }
    goto VAR12;
}