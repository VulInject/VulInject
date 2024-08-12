static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    VAR11 *VAR12 = (VAR11 *)VAR3;
    int VAR13, VAR14, VAR15, VAR16;
    if (VAR9->VAR17)
    {
        memcpy(VAR9->VAR17, VAR6, FUN2(VAR7, VAR18));
        FUN3(&VAR9->VAR19, VAR9->VAR17, VAR7 * 8);
    }
    else
    {
        FUN3(&VAR9->VAR19, VAR6, VAR7 * 8);
    }
    *VAR4 = 0;
    VAR16 = FUN4(VAR9);
    if (VAR9->VAR20 > VAR7)
    {
        FUN5(VAR2, VAR21, "");
        VAR16 = VAR22;
    }
    if (VAR16 != VAR22 && VAR2->VAR23 >= VAR24)
    {
        if (FUN6(FUN7(VAR25), 0, &VAR6[2], VAR9->VAR20 - 2))
        {
            FUN5(VAR2, VAR21, "");
            VAR16 = 1;
        }
    }
    if (VAR16 && VAR16 != 1)
    {
        switch (VAR16)
        {
        case VAR26:
            FUN5(VAR2, VAR21, "");
            break;
        case VAR27:
            FUN5(VAR2, VAR21, "");
            break;
        case VAR28:
            FUN5(VAR2, VAR21, "");
            break;
        case VAR22:
            FUN5(VAR2, VAR21, "");
            break;
        case VAR29:
            FUN5(VAR2, VAR21, "");
            break;
        default:
            FUN5(VAR2, VAR21, "");
            break;
        }
    }
    if (!VAR16)
    {
        VAR2->VAR30 = VAR9->VAR30;
        VAR2->VAR31 = VAR9->VAR31;
        VAR9->VAR32 = VAR9->VAR33;
        VAR9->VAR34 = VAR9->VAR35;
        if (VAR9->VAR36)
            VAR9->VAR34 |= VAR37;
        if (VAR2->VAR38 > 0 && VAR2->VAR38 <= 2 && VAR2->VAR38 < VAR9->VAR33)
        {
            VAR9->VAR32 = VAR2->VAR38;
            VAR9->VAR34 = VAR2->VAR38 == 1 ? VAR39 : VAR40;
        }
        VAR2->VAR33 = VAR9->VAR32;
        if (VAR9->VAR33 != VAR9->VAR32 && !((VAR9->VAR34 & VAR37) && VAR9->VAR41 == VAR9->VAR32))
        {
            FUN8(VAR9);
        }
    }
    else if (!VAR9->VAR32)
    {
        VAR9->VAR32 = VAR2->VAR33;
        if (VAR9->VAR32 < VAR9->VAR33)
            VAR9->VAR34 = VAR9->VAR32 == 1 ? VAR39 : VAR40;
    }
    for (VAR14 = 0; VAR14 < VAR42; VAR14++)
    {
        if (!VAR16 && FUN9(VAR9, VAR14))
        {
            FUN5(VAR2, VAR21, "");
        }
        for (VAR13 = 0; VAR13 < 256; VAR13++)
            for (VAR15 = 0; VAR15 < VAR9->VAR32; VAR15++)
                *(VAR12++) = VAR9->VAR43[VAR15][VAR13];
    }
    *VAR4 = VAR42 * 256 * VAR2->VAR33 * sizeof(VAR11);
    return VAR9->VAR20;
}