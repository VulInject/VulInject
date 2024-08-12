static int FUN1(VAR1 *VAR2)
{
    int VAR3;
    int VAR4;
    if (FUN2(&VAR2->VAR5) < 36)
        return FUN3(VAR6);
    VAR2->VAR7->VAR8 = FUN4(&VAR2->VAR5);
    VAR2->VAR9 = FUN5(&VAR2->VAR5);
    VAR2->VAR10 = FUN5(&VAR2->VAR5);
    VAR2->VAR11 = FUN5(&VAR2->VAR5);
    VAR2->VAR12 = FUN5(&VAR2->VAR5);
    VAR2->VAR13 = FUN5(&VAR2->VAR5);
    VAR2->VAR14 = FUN5(&VAR2->VAR5);
    VAR2->VAR15 = FUN5(&VAR2->VAR5);
    VAR2->VAR16 = FUN5(&VAR2->VAR5);
    VAR4 = FUN4(&VAR2->VAR5);
    if (VAR4 <= 0 || VAR4 > 4)
    {
        FUN6(VAR2->VAR7, VAR17, "", VAR4);
        return FUN3(VAR6);
    }
    VAR2->VAR4 = VAR4;
    if (VAR2->VAR13 <= 0 || VAR2->VAR14 <= 0)
        return FUN3(VAR6);
    if (FUN2(&VAR2->VAR5) < 3 * VAR2->VAR4)
        return FUN3(VAR6);
    for (VAR3 = 0; VAR3 < VAR2->VAR4; VAR3++)
    {
        uint8_t VAR18 = FUN7(&VAR2->VAR5);
        VAR2->VAR19[VAR3] = (VAR18 & 0x7f) + 1;
        VAR2->VAR20 = FUN8(VAR2->VAR19[VAR3], VAR2->VAR20);
        VAR2->VAR21[VAR3] = !!(VAR18 & 0x80);
        VAR2->VAR22[VAR3] = FUN7(&VAR2->VAR5);
        VAR2->VAR23[VAR3] = FUN7(&VAR2->VAR5);
        if (VAR2->VAR22[VAR3] != 1 || VAR2->VAR23[VAR3] != 1)
        {
            FUN6(VAR2->VAR7, VAR17, "", VAR2->VAR22[VAR3], VAR2->VAR23[VAR3], VAR3);
            if (!VAR2->VAR22[VAR3] || !VAR2->VAR23[VAR3])
                return VAR24;
        }
    }
    VAR2->VAR25 = FUN9(VAR2->VAR9 - VAR2->VAR15, VAR2->VAR13);
    VAR2->VAR26 = FUN9(VAR2->VAR10 - VAR2->VAR16, VAR2->VAR14);
    if (VAR2->VAR25 * (VAR27)VAR2->VAR26 > VAR28 / sizeof(VAR29))
        return FUN3(VAR6);
    VAR2->VAR30 = FUN10(VAR2->VAR25 * VAR2->VAR26 * sizeof(*VAR2->VAR30));
    if (!VAR2->VAR30)
        return FUN3(VAR31);
    for (VAR3 = 0; VAR3 < VAR2->VAR25 * VAR2->VAR26; VAR3++)
    {
        VAR29 *VAR30 = VAR2->VAR30 + VAR3;
        VAR30->VAR32 = FUN10(VAR2->VAR4 * sizeof(*VAR30->VAR32));
        if (!VAR30->VAR32)
            return FUN3(VAR31);
    }
    VAR2->VAR7->VAR9 = FUN11(VAR2->VAR9 - VAR2->VAR11, VAR2->VAR33);
    VAR2->VAR7->VAR10 = FUN11(VAR2->VAR10 - VAR2->VAR12, VAR2->VAR33);
    switch (VAR2->VAR4)
    {
    case 1:
        if (VAR2->VAR20 > 8)
            VAR2->VAR7->VAR34 = VAR35;
        else
            VAR2->VAR7->VAR34 = VAR36;
        break;
    case 3:
        switch (VAR2->VAR7->VAR8)
        {
        case VAR37:
        case VAR38:
            VAR2->VAR7->VAR34 = VAR39;
            break;
        default:
            if (VAR2->VAR20 > 8)
                VAR2->VAR7->VAR34 = VAR40;
            else
                VAR2->VAR7->VAR34 = VAR41;
            break;
        }
        break;
    case 4:
        VAR2->VAR7->VAR34 = VAR42;
        break;
    default:
        VAR2->VAR7->VAR34 = VAR43;
        break;
    }
    return 0;
}