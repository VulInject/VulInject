int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    VAR9 *VAR10 = VAR2->VAR11;
    VAR12 *const VAR13 = VAR10->VAR14[VAR15];
    int VAR16 = VAR6->VAR17;
    int FUN2(VAR18);
    int VAR19, VAR20;
    int VAR21;
    if (VAR10->VAR22)
    {
        if (VAR16 < 3)
            return -1;
        VAR18 = FUN3(&VAR8);
        VAR16 -= 3;
        if (VAR16 < VAR18)
            return -1;
    }
    VAR20 = VAR10->FUN4(VAR10, VAR8, VAR16);
    if (VAR20 < 0)
        return VAR20;
    if (VAR20 == VAR23)
    {
        for (VAR19 = 0; VAR19 < 4; VAR19++)
        {
            FUN5(VAR10->VAR14[VAR19]);
            if (VAR10->VAR24)
                FUN5(VAR10->VAR24->VAR14[VAR19]);
        }
    }
    if (FUN6(VAR2, VAR13, VAR25) < 0)
        return -1;
    if (VAR10->VAR22)
    {
        FUN5(VAR10->VAR24->VAR14[VAR15]);
        if ((VAR21 = FUN7(VAR10->VAR24->VAR14[VAR15], VAR13)) < 0)
        {
            FUN5(VAR13);
            return VAR21;
        }
    }
    if (VAR20 == VAR23)
    {
        if (FUN8(VAR10))
        {
            FUN5(VAR13);
            return -1;
        }
    }
    if (VAR10->VAR22)
    {
        int VAR26 = VAR2->VAR27;
        int VAR28 = VAR2->VAR29;
        int VAR30 = VAR2->VAR31;
        int VAR32 = VAR2->VAR33;
        VAR8 += VAR18;
        VAR16 -= VAR18;
        VAR20 = VAR10->VAR24->FUN4(VAR10->VAR24, VAR8, VAR16);
        if (VAR20 != 0)
        {
            if (VAR20 == VAR23)
            {
                FUN9(VAR2, VAR34, "");
                VAR2->VAR27 = VAR26;
                VAR2->VAR29 = VAR28;
                VAR2->VAR31 = VAR30;
                VAR2->VAR33 = VAR32;
            }
            FUN5(VAR13);
            return -1;
        }
    }
    VAR2->FUN10(VAR2, VAR35, 0, 0, VAR10->VAR22 + 1);
    if ((VAR20 = FUN7(VAR3, VAR13)) < 0)
        return VAR20;
    *VAR4 = 1;
    return VAR6->VAR17;
}