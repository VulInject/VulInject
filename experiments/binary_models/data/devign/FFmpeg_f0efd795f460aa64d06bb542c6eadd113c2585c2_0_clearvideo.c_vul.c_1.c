static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    GetByteContext VAR14;
    uint32_t VAR15;
    int VAR16, VAR17;
    int VAR18;
    int VAR19 = 0;
    FUN2(&VAR14, VAR8, VAR9);
    if (VAR2->VAR20 == FUN3('', '', '', ''))
    {
        int VAR21 = FUN4(&VAR14);
        FUN5(&VAR14, (VAR21 + 1) * 8);
    }
    VAR15 = FUN4(&VAR14);
    if ((VAR18 = FUN6(VAR2, VAR12->VAR22)) < 0)
        return VAR18;
    VAR12->VAR22->VAR23 = VAR15 & 0x20 ? 1 : 0;
    VAR12->VAR22->VAR24 = VAR15 & 0x20 ? VAR25 : VAR26;
    if (VAR15 & 0x2)
    {
        if (VAR9 < VAR12->VAR27 * VAR12->VAR28)
        {
            FUN7(VAR2, VAR29, "");
            return VAR30;
        }
        FUN8(&VAR14);
        VAR12->VAR31 = FUN4(&VAR14);
        VAR12->VAR32 = 32;
        VAR12->VAR33 = 32;
        if ((VAR18 = FUN9(&VAR12->VAR14, VAR8 + FUN10(&VAR14), (VAR9 - FUN10(&VAR14)))) < 0)
            return VAR18;
        for (VAR16 = 0; VAR16 < 3; VAR16++)
            VAR12->VAR34[VAR16] = 32;
        for (VAR16 = 0; VAR16 < 4; VAR16++)
            VAR12->VAR35[VAR16] = 32;
        for (VAR17 = 0; VAR17 < VAR12->VAR28; VAR17++)
        {
            for (VAR16 = 0; VAR16 < VAR12->VAR27; VAR16++)
            {
                VAR18 = FUN11(VAR12, VAR16, VAR17);
                if (VAR18 < 0)
                    VAR19 = VAR18;
            }
        }
    }
    else
    {
    }
    if ((VAR18 = FUN12(VAR3, VAR12->VAR22)) < 0)
        return VAR18;
    *VAR4 = 1;
    return VAR19 < 0 ? VAR19 : VAR9;
}