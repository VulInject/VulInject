static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6, int VAR7, int VAR8)
{
    unsigned int VAR9;
    unsigned int VAR10;
    uint32_t VAR11, VAR12, VAR13;
    uint32_t VAR14, VAR15 = 0;
    int VAR16, VAR17, VAR18, VAR19, VAR20, VAR21;
    int VAR22, VAR23, VAR24, VAR25;
    int VAR26, VAR27 = 0;
    uint32_t VAR28;
    uint32_t VAR29;
    int VAR30;
    int VAR31 = 1;
    int VAR32;
    VAR28 = VAR4->VAR33[VAR34];
    VAR29 = VAR4->VAR33[VAR35];
    VAR11 = VAR4->VAR36[VAR37] & 0xff;
    switch (VAR6)
    {
    case 2:
        VAR30 = VAR38;
        VAR31 = 0;
        break;
    case 1:
        VAR30 = VAR39;
        break;
    default:
    case 0:
        VAR30 = VAR40;
        break;
    }
    VAR32 = (VAR31 + 1) * 4;
    VAR9 = VAR5 >> 13;
    for (VAR26 = 0; VAR26 < 4; VAR26++)
    {
        for (VAR10 = 0; VAR10 < 16; VAR10++)
        {
            VAR12 = VAR4->VAR41[VAR31][VAR26][VAR10].VAR12;
            VAR13 = VAR4->VAR41[VAR31][VAR26][VAR10].VAR13;
            VAR14 = FUN2(VAR13, 13, 31);
            VAR15 = FUN2(VAR12, 13, 31);
            FUN3("", VAR26, VAR10, VAR13, VAR12, VAR14, VAR15);
        }
    }
    VAR10 = VAR9 & 15;
    for (VAR26 = 0; VAR26 < 4; VAR26++)
    {
        VAR12 = VAR4->VAR41[VAR31][VAR26][VAR10].VAR12;
        VAR13 = VAR4->VAR41[VAR31][VAR26][VAR10].VAR13;
        VAR14 = VAR13 >> 13;
        VAR16 = FUN2(VAR13, 0, 7);
        VAR17 = FUN2(VAR12, 4, 4);
        FUN4("", VAR31, VAR26, VAR10, VAR14, VAR9, VAR12, VAR13);
        if ((VAR17 || (VAR16 == VAR11)) && VAR14 == VAR9)
        {
            VAR27 = 1;
            break;
        }
    }
    VAR2->VAR42 = VAR32;
    if (VAR27)
    {
        VAR24 = FUN2(VAR29, 19, 19);
        VAR23 = FUN2(VAR29, 18, 18);
        VAR25 = FUN2(VAR29, 17, 17);
        VAR22 = FUN2(VAR29, 16, 16);
        VAR15 = FUN2(VAR12, 13, 31);
        VAR18 = FUN2(VAR12, 3, 3);
        VAR19 = FUN2(VAR12, 2, 2);
        VAR20 = FUN2(VAR12, 1, 1);
        VAR21 = FUN2(VAR12, 0, 0);
        if (VAR23 && VAR19 && VAR7)
        {
            FUN5(FUN3("", VAR5, VAR12, VAR4->VAR43));
            VAR27 = 0;
            VAR2->VAR42 = VAR32 + 2;
        }
        else if (VAR6 == 1 && VAR24 && !VAR20)
        {
            FUN5(FUN3("", VAR5, VAR12, VAR4->VAR43));
            VAR27 = 0;
            VAR2->VAR42 = VAR32 + 3;
        }
        else if (VAR6 == 2 && VAR25 && !VAR21)
        {
            FUN5(FUN3("", VAR5, VAR12, VAR4->VAR43));
            VAR27 = 0;
            VAR2->VAR42 = VAR32 + 3;
        }
        else if (VAR22 && !VAR18)
        {
            FUN5(FUN3("", VAR5));
            VAR27 = 0;
            VAR2->VAR42 = VAR32 + 1;
        }
        VAR2->VAR44 = 0;
        if (VAR27)
        {
            VAR2->VAR44 |= VAR45;
            if (VAR20)
                VAR2->VAR44 |= VAR46;
            if (VAR31 == 0 && (VAR25 || VAR21))
                VAR2->VAR44 |= VAR47;
        }
        else
            FUN5(FUN6(VAR4, VAR31));
    }
    else
    {
        VAR26 = VAR4->VAR48 & 3;
    }
    if (!VAR27 && !VAR8)
    {
        FUN7(VAR4);
        VAR10 = VAR9 & 15;
        VAR4->VAR33[VAR49] = 0;
        FUN8(&VAR4->VAR33[VAR49], VAR10, 0, 4);
        FUN8(&VAR4->VAR33[VAR49], VAR26, 4, 2);
        FUN8(&VAR28, VAR30, 8, 2);
        FUN8(&VAR28, VAR9, 13, 19);
        FUN8(&VAR28, VAR11, 0, 8);
        VAR4->VAR33[VAR34] = VAR28;
        FUN5(FUN3("", VAR5, VAR4->VAR43));
    }
    FUN5(FUN3(""
             "",
             VAR50, VAR6, VAR27, VAR4->VAR43, VAR5, VAR9, VAR14, VAR15, VAR16, VAR11, VAR28, VAR4->VAR33[VAR49], VAR4->VAR51[VAR52], VAR4->VAR36[VAR53], VAR4->VAR54));
    VAR2->VAR55 = VAR15 << VAR56;
    return !VAR27;
}