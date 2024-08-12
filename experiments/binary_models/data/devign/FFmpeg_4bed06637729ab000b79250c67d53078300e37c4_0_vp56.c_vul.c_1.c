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
            return VAR23;
        VAR18 = FUN3(&VAR8);
        VAR16 -= 3;
        if (VAR16 < VAR18)
            return VAR23;
    }
    VAR20 = VAR10->FUN4(VAR10, VAR8, VAR16);
    if (VAR20 < 0)
        return VAR20;
    if (VAR20 == VAR24)
    {
        for (VAR19 = 0; VAR19 < 4; VAR19++)
        {
            FUN5(VAR10->VAR14[VAR19]);
            if (VAR10->VAR25)
                FUN5(VAR10->VAR25->VAR14[VAR19]);
        }
    }
    VAR21 = FUN6(VAR2, VAR13, VAR26);
    if (VAR21 < 0)
        return VAR21;
    if (VAR2->VAR27 == VAR28)
    {
        FUN5(VAR10->VAR25->VAR14[VAR15]);
        if ((VAR21 = FUN7(VAR10->VAR25->VAR14[VAR15], VAR13)) < 0)
        {
            FUN5(VAR13);
            return VAR21;
        }
    }
    if (VAR20 == VAR24)
    {
        if (FUN8(VAR10))
        {
            FUN5(VAR13);
            return VAR23;
        }
    }
    if (VAR2->VAR27 == VAR28)
    {
        int VAR29 = VAR2->VAR30;
        int VAR31 = VAR2->VAR32;
        int VAR33 = VAR2->VAR34;
        int VAR35 = VAR2->VAR36;
        VAR8 += VAR18;
        VAR16 -= VAR18;
        VAR20 = VAR10->VAR25->FUN4(VAR10->VAR25, VAR8, VAR16);
        if (VAR20 != 0)
        {
            if (VAR20 == VAR24)
            {
                FUN9(VAR2, VAR37, "");
                VAR2->VAR30 = VAR29;
                VAR2->VAR32 = VAR31;
                VAR2->VAR34 = VAR33;
                VAR2->VAR36 = VAR35;
            }
            FUN5(VAR13);
            return VAR23;
        }
    }
    VAR2->FUN10(VAR2, VAR38, 0, 0, (VAR2->VAR27 == VAR28) + 1);
    if ((VAR20 = FUN7(VAR3, VAR13)) < 0)
        return VAR20;
    *VAR4 = 1;
    return VAR6->VAR17;
}