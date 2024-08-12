static int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, const VAR5 *VAR6, int VAR7)
{
    VAR8 *VAR9 = VAR2->VAR10;
    int VAR11;
    unsigned int VAR12;
    int VAR13;
    int VAR14;
    int VAR15;
    int VAR16;
    uint8_t VAR17;
    uint8_t VAR18;
    if (!VAR6 || !VAR7)
        return VAR7;
    if (!VAR9->VAR19)
    {
        if (VAR9->VAR2->VAR20 != VAR21)
        {
            FUN2(VAR2, VAR22, "", VAR21);
            return VAR7;
        }
        if (FUN3(VAR9))
        {
            FUN2(VAR2, VAR22, "");
            return VAR7;
        }
        VAR9->VAR19 = 1;
    }
    FUN4(&VAR9->VAR23, VAR6, VAR7 * 8);
    VAR11 = FUN5(&VAR9->VAR23, 3) + 1;
    if (VAR11 > VAR24)
    {
        FUN2(VAR2, VAR22, "", VAR24);
        return VAR7;
    }
    FUN6(&VAR9->VAR23, 4);
    FUN6(&VAR9->VAR23, 12);
    VAR13 = FUN7(&VAR9->VAR23);
    VAR15 = FUN5(&VAR9->VAR23, 2);
    VAR16 = FUN7(&VAR9->VAR23);
    if (VAR13)
    {
        VAR12 = FUN8(&VAR9->VAR23, 32);
        if (VAR12 > VAR9->VAR25)
        {
            FUN2(VAR2, VAR22, "", VAR12, VAR9->VAR25);
            return -1;
        }
    }
    else
        VAR12 = VAR9->VAR25;
    if (VAR12 > *VAR4 / VAR9->VAR26)
    {
        FUN2(VAR2, VAR22, "");
        return -1;
    }
    *VAR4 = VAR12 * VAR9->VAR26;
    VAR14 = VAR9->VAR27 - (VAR15 * 8) + VAR11 - 1;
    if (!VAR16)
    {
        int16_t VAR28[VAR11][32];
        int VAR29[VAR11];
        int VAR30[VAR11];
        int VAR31[VAR11];
        int VAR32[VAR11];
        int VAR33, VAR34;
        VAR17 = FUN5(&VAR9->VAR23, 8);
        VAR18 = FUN5(&VAR9->VAR23, 8);
        for (VAR34 = 0; VAR34 < VAR11; VAR34++)
        {
            VAR30[VAR34] = FUN5(&VAR9->VAR23, 4);
            VAR31[VAR34] = FUN5(&VAR9->VAR23, 4);
            VAR32[VAR34] = FUN5(&VAR9->VAR23, 3);
            VAR29[VAR34] = FUN5(&VAR9->VAR23, 5);
            for (VAR33 = 0; VAR33 < VAR29[VAR34]; VAR33++)
                VAR28[VAR34][VAR33] = (VAR35)FUN5(&VAR9->VAR23, 16);
        }
        if (VAR15)
            FUN2(VAR2, VAR22, "");
        for (VAR34 = 0; VAR34 < VAR11; VAR34++)
        {
            FUN9(VAR9, VAR9->VAR36[VAR34], VAR12, VAR14, VAR9->VAR37, VAR9->VAR38, VAR32[VAR34] * VAR9->VAR39 / 4, (1 << VAR9->VAR38) - 1);
            if (VAR30[VAR34] == 0)
            {
                FUN10(VAR9->VAR36[VAR34], VAR9->VAR40[VAR34], VAR12, VAR14, VAR28[VAR34], VAR29[VAR34], VAR31[VAR34]);
            }
            else
            {
                FUN2(VAR2, VAR22, "", VAR30[VAR34]);
            }
        }
    }
    else
    {
        int VAR33, VAR34;
        for (VAR33 = 0; VAR33 < VAR12; VAR33++)
            for (VAR34 = 0; VAR34 < VAR11; VAR34++)
            {
                int32_t VAR41;
                VAR41 = FUN8(&VAR9->VAR23, VAR9->VAR27);
                VAR41 = FUN11(VAR41, VAR9->VAR27);
                VAR9->VAR40[VAR34][VAR33] = VAR41;
            }
        VAR17 = 0;
        VAR18 = 0;
    }
    if (FUN5(&VAR9->VAR23, 3) != 7)
        FUN2(VAR2, VAR22, "");
    switch (VAR9->VAR27)
    {
    case 16:
        if (VAR11 == 2)
        {
            FUN12(VAR9->VAR40, (VAR35 *)VAR3, VAR9->VAR42, VAR12, VAR17, VAR18);
        }
        else
        {
            int VAR33;
            for (VAR33 = 0; VAR33 < VAR12; VAR33++)
            {
                int16_t VAR43 = VAR9->VAR40[0][VAR33];
                ((VAR35 *)VAR3)[VAR33 * VAR9->VAR42] = VAR43;
            }
        }
        break;
    case 20:
    case 24:
    case 32:
        FUN2(VAR2, VAR22, "", VAR9->VAR27);
        break;
    default:
        break;
    }
    if (VAR7 * 8 - FUN13(&VAR9->VAR23) > 8)
        FUN2(VAR2, VAR22, "", VAR7 * 8 - FUN13(&VAR9->VAR23));
    return VAR7;
}