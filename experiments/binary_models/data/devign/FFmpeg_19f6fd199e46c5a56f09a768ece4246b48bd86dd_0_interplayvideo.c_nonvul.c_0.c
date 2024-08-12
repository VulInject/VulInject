static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = VAR3;
    int VAR16;
    int VAR17;
    int VAR18;
    int VAR19;
    if (FUN2(VAR6, VAR20, NULL))
    {
        FUN3(VAR12->VAR21);
        FUN3(VAR12->VAR22);
    }
    if (VAR9 < 6)
        return VAR23;
    VAR18 = FUN4(VAR8);
    VAR17 = FUN4(VAR8 + 1);
    VAR19 = FUN5(VAR8 + 2);
    VAR12->VAR24 = FUN5(VAR8 + 4);
    switch (VAR18)
    {
    case 0x06:
        if (VAR12->VAR24)
        {
            FUN6(VAR2, VAR25, "");
            return VAR23;
        }
        if (VAR12->VAR26)
        {
            FUN6(VAR2, VAR25, "");
            return VAR23;
        }
        VAR12->VAR24 = ((VAR12->VAR2->VAR27 / 8) * (VAR12->VAR2->VAR28 / 8)) * 2;
        VAR12->VAR29 = VAR8 + 6 + 14;
        VAR19 -= VAR12->VAR24 + 14;
        FUN7(&VAR12->VAR30, VAR8 + 6 + VAR12->VAR24 + 14, VAR19);
        break;
    case 0x11:
        if (!VAR12->VAR24)
        {
            FUN6(VAR2, VAR25, "");
            return VAR23;
        }
        FUN7(&VAR12->VAR30, VAR8 + 6, VAR19);
        VAR12->VAR29 = VAR8 + 6 + VAR19;
        break;
    default:
        FUN6(VAR2, VAR25, "", VAR18);
    }
    if (VAR9 < 6 + VAR12->VAR24 + VAR19)
    {
        FUN6(VAR2, VAR25, "");
        return VAR23;
    }
    if ((VAR16 = FUN8(VAR2, VAR15, VAR31)) < 0)
        return VAR16;
    if (!VAR12->VAR26)
    {
        int VAR10;
        const VAR7 *VAR32 = FUN2(VAR6, VAR33, &VAR10);
        if (VAR32 && VAR10 == VAR34)
        {
            VAR15->VAR35 = 1;
            memcpy(VAR12->VAR32, VAR32, VAR34);
        }
        else if (VAR32)
        {
            FUN6(VAR2, VAR25, "", VAR10);
        }
    }
    switch (VAR18)
    {
    case 0x06:
        FUN9(VAR12, VAR15);
        break;
    case 0x11:
        FUN10(VAR12, VAR15);
        break;
    }
    *VAR4 = VAR17;
    FUN3(VAR12->VAR22);
    FUN11(VAR14 *, VAR12->VAR22, VAR12->VAR21);
    if ((VAR16 = FUN12(VAR12->VAR21, VAR15)) < 0)
        return VAR16;
    return VAR9;
}