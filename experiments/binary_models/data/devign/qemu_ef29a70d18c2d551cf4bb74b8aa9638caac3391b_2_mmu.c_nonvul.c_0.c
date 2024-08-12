static int FUN1(struct VAR1 *VAR2, VAR3 *VAR4, uint32_t VAR5, int VAR6, int VAR7)
{
    unsigned int VAR8;
    unsigned int VAR9;
    uint32_t VAR10, VAR11;
    uint32_t VAR12, VAR13 = 0;
    int VAR14, VAR15, VAR16, VAR17, VAR18, VAR19;
    int VAR20, VAR21, VAR22, VAR23;
    int VAR24, VAR25 = 0;
    uint32_t VAR26;
    uint32_t VAR27;
    int VAR28;
    int VAR29 = 1;
    int VAR30;
    VAR26 = VAR4->VAR31[VAR32];
    VAR27 = VAR4->VAR31[VAR33];
    switch (VAR6)
    {
    case 2:
        VAR28 = VAR34;
        VAR29 = 0;
        break;
    case 1:
        VAR28 = VAR35;
        break;
    default:
    case 0:
        VAR28 = VAR36;
        break;
    }
    VAR30 = (VAR29 + 1) * 4;
    VAR8 = VAR5 >> 13;
    for (VAR24 = 0; VAR24 < 4; VAR24++)
    {
        for (VAR9 = 0; VAR9 < 16; VAR9++)
        {
            VAR10 = VAR4->VAR37[VAR29][VAR24][VAR9].VAR10;
            VAR11 = VAR4->VAR37[VAR29][VAR24][VAR9].VAR11;
            VAR12 = FUN2(VAR11, 13, 31);
            VAR13 = FUN2(VAR10, 13, 31);
            FUN3("", VAR24, VAR9, VAR11, VAR10, VAR12, VAR13);
        }
    }
    VAR9 = VAR8 & 15;
    for (VAR24 = 0; VAR24 < 4; VAR24++)
    {
        VAR10 = VAR4->VAR37[VAR29][VAR24][VAR9].VAR10;
        VAR11 = VAR4->VAR37[VAR29][VAR24][VAR9].VAR11;
        VAR12 = FUN2(VAR11, 13, 31);
        VAR13 = FUN2(VAR10, 13, 31);
        FUN4(FUN3("", VAR38, VAR9, VAR12, VAR8, VAR13, VAR10, VAR11));
        if (VAR12 == VAR8)
        {
            VAR25 = 1;
            break;
        }
    }
    VAR2->VAR39 = VAR30;
    if (VAR25)
    {
        VAR22 = FUN2(VAR27, 19, 19);
        VAR21 = FUN2(VAR27, 18, 18);
        VAR23 = FUN2(VAR27, 17, 17);
        VAR20 = FUN2(VAR27, 16, 16);
        VAR14 = FUN2(VAR11, 0, 7);
        VAR13 = FUN2(VAR10, 13, 31);
        VAR15 = FUN2(VAR10, 4, 4);
        VAR16 = FUN2(VAR10, 3, 3);
        VAR17 = FUN2(VAR10, 2, 2);
        VAR18 = FUN2(VAR10, 1, 1);
        VAR19 = FUN2(VAR10, 0, 0);
        if (!VAR15 && VAR14 != (VAR4->VAR40[VAR41] & 0xff))
        {
            FUN4(FUN3("", VAR14, VAR4->VAR40[VAR41], VAR4->VAR42));
            VAR25 = 0;
            VAR2->VAR39 = VAR30;
        }
        else if (VAR21 && VAR17 && VAR7)
        {
            FUN4(FUN3("", VAR5, VAR10, VAR4->VAR42));
            VAR25 = 0;
            VAR2->VAR39 = VAR30 + 2;
        }
        else if (VAR6 == 1 && VAR22 && !VAR18)
        {
            FUN4(FUN3("", VAR5, VAR10, VAR4->VAR42));
            VAR25 = 0;
            VAR2->VAR39 = VAR30 + 3;
        }
        else if (VAR6 == 2 && VAR23 && !VAR19)
        {
            FUN4(FUN3("", VAR5, VAR10, VAR4->VAR42));
            VAR25 = 0;
            VAR2->VAR39 = VAR30 + 3;
        }
        else if (VAR20 && !VAR16)
        {
            FUN4(FUN3("", VAR5));
            FUN5(&VAR26, VAR28, 8, 9);
            VAR25 = 0;
            VAR2->VAR39 = VAR30 + 1;
        }
        VAR2->VAR43 = 0;
        if (VAR25)
        {
            VAR2->VAR43 |= VAR44;
            if (VAR18)
                VAR2->VAR43 |= VAR45;
            if (VAR19)
                VAR2->VAR43 |= VAR46;
        }
        else
            FUN4(FUN6(VAR4, VAR29));
        VAR4->VAR31[VAR47] = VAR11;
        VAR4->VAR31[VAR48] = VAR10;
    }
    if (!VAR25)
    {
        VAR9 = VAR8 & 15;
        VAR24 = 0;
        VAR4->VAR31[VAR49] = 0;
        FUN5(&VAR4->VAR31[VAR49], VAR9, 0, 4);
        FUN5(&VAR4->VAR31[VAR49], VAR24, 4, 5);
        FUN5(&VAR26, VAR28, 8, 2);
        FUN5(&VAR26, VAR8, 13, 19);
        FUN5(&VAR26, VAR4->VAR40[VAR41], 0, 8);
        VAR4->VAR31[VAR32] = VAR26;
        FUN4(FUN3("", VAR5, VAR4->VAR42));
    }
    FUN4(FUN3(""
             "",
             VAR50, VAR6, VAR25, VAR4->VAR42, VAR5, VAR8, VAR12, VAR13, VAR14, VAR4->VAR40[VAR41], VAR26, VAR4->VAR31[VAR49], VAR4->VAR51[VAR52], VAR4->VAR40[VAR53], VAR4->VAR54));
    VAR2->VAR55 = VAR13;
    return !VAR25;
}