static int FUN1(VAR1 *VAR2, VAR3 *VAR4, VAR5 *VAR6)
{
    int VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    VAR13 *VAR14;
    VAR4->VAR15 = VAR4->VAR16[VAR2->VAR17];
    if (!VAR4->VAR15)
    {
        FUN2(VAR6, VAR18, "");
        return VAR19;
    }
    VAR4->VAR20 = VAR4->VAR16[VAR2->VAR20];
    VAR4->VAR21 = VAR2->VAR22 + (FUN3(&VAR2->VAR23) >> 3);
    VAR7 = VAR2->FUN4(VAR2, VAR4, VAR6);
    if (VAR7)
    {
        FUN2(VAR6, VAR18, "", VAR7);
        return VAR7;
    }
    if (VAR4->VAR24)
    {
        FUN2(VAR6, VAR18, "");
        return VAR19;
    }
    VAR4->VAR25 = &VAR2->VAR26[VAR4->VAR27];
    for (VAR8 = 0; VAR8 < VAR4->VAR28; VAR8++)
    {
        VAR10 = VAR4->VAR29[VAR8 * 2];
        VAR11 = VAR4->VAR29[VAR8 * 2 + 1];
        FUN5(VAR30, VAR4->VAR25->VAR31[VAR10], VAR4->VAR25->VAR31[VAR11]);
        FUN5(VAR32, VAR4->VAR25->VAR33[VAR10], VAR4->VAR25->VAR33[VAR11]);
    }
    VAR12 = FUN3(&VAR2->VAR23);
    for (VAR9 = 0; VAR9 < VAR4->VAR34; VAR9++)
    {
        VAR14 = &VAR4->VAR35[VAR9];
        if (VAR14->VAR36 != VAR4->VAR36)
        {
            FUN2(VAR6, VAR18, "", VAR4->VAR36, VAR14->VAR36);
            return VAR19;
        }
        VAR14->VAR24 = FUN6(&VAR2->VAR23);
        if (VAR14->VAR24)
        {
            VAR7 = FUN7(VAR6, VAR4, VAR14, (VAR2->VAR37[0].VAR38[0].VAR36 >> 3) - (VAR4->VAR36 >> 3));
            if (VAR7 < 0)
                break;
            FUN8(VAR6, "");
        }
        else
        {
            VAR14->VAR39 = FUN9(&VAR2->VAR23);
            if (!VAR14->VAR39)
            {
                FUN2(VAR6, VAR18, "");
                return VAR19;
            }
            VAR7 = VAR2->FUN10(VAR2, VAR4, VAR14, VAR6);
            if (VAR7 < 0)
                break;
            VAR7 = FUN11(&VAR2->VAR23, VAR4, VAR14, VAR6);
            if (VAR7 < 0 || ((FUN3(&VAR2->VAR23) - VAR12) >> 3) != VAR14->VAR39)
            {
                FUN2(VAR6, VAR18, "");
                break;
            }
            VAR12 += VAR14->VAR39 << 3;
        }
    }
    for (VAR8 = VAR4->VAR28 - 1; VAR8 >= 0; VAR8--)
    {
        VAR10 = VAR4->VAR29[VAR8 * 2];
        VAR11 = VAR4->VAR29[VAR8 * 2 + 1];
        FUN5(VAR30, VAR4->VAR25->VAR31[VAR10], VAR4->VAR25->VAR31[VAR11]);
        FUN5(VAR32, VAR4->VAR25->VAR33[VAR10], VAR4->VAR25->VAR33[VAR11]);
    }
    if (VAR4->VAR40)
    {
        uint16_t VAR41 = FUN12(VAR4);
        if (VAR41 != VAR4->VAR42)
        {
            FUN2(VAR6, VAR18, "", VAR4->VAR43, VAR4->VAR44, VAR4->VAR42, VAR41);
        }
    }
    FUN13(&VAR2->VAR23);
    return VAR7;
}