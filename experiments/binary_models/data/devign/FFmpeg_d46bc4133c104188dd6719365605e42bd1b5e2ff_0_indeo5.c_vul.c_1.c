static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11;
    int VAR12, VAR13 = 0;
    VAR14 *VAR15, *VAR16, *VAR17;
    IVIPicConfig VAR18;
    VAR2->VAR19 = FUN2(&VAR2->VAR20, 8);
    VAR2->VAR21 = (VAR2->VAR19 & 1) ? FUN2(&VAR2->VAR20, 16) : 0;
    if (VAR2->VAR19 & VAR22)
        VAR2->VAR23 = FUN3(&VAR2->VAR20, 32);
    VAR8 = (VAR2->VAR19 & 0x40) ? 64 << FUN2(&VAR2->VAR20, 2) : 0;
    if (VAR8 > 256)
    {
        FUN4(VAR4, VAR24, "", VAR8);
        return -1;
    }
    VAR18.VAR25 = FUN2(&VAR2->VAR20, 2) * 3 + 1;
    VAR18.VAR26 = FUN5(&VAR2->VAR20) * 3 + 1;
    VAR2->VAR27 = VAR18.VAR25 != 1 || VAR18.VAR26 != 1;
    if (VAR2->VAR27 && (VAR18.VAR25 != 4 || VAR18.VAR26 != 1))
    {
        FUN4(VAR4, VAR24, "", VAR18.VAR25, VAR18.VAR26);
        return -1;
    }
    VAR9 = FUN2(&VAR2->VAR20, 4);
    if (VAR9 == VAR28)
    {
        VAR18.VAR29 = FUN2(&VAR2->VAR20, 13);
        VAR18.VAR30 = FUN2(&VAR2->VAR20, 13);
    }
    else
    {
        VAR18.VAR29 = VAR31[VAR9 * 2 + 1] << 2;
        VAR18.VAR30 = VAR31[VAR9 * 2] << 2;
    }
    if (VAR2->VAR19 & 2)
    {
        FUN4(VAR4, VAR24, "");
        return -1;
    }
    VAR18.VAR32 = (VAR18.VAR29 + 3) >> 2;
    VAR18.VAR33 = (VAR18.VAR30 + 3) >> 2;
    if (!VAR8)
    {
        VAR18.VAR34 = VAR18.VAR29;
        VAR18.VAR35 = VAR18.VAR30;
    }
    else
    {
        VAR18.VAR34 = VAR18.VAR35 = VAR8;
    }
    if (FUN6(&VAR18, &VAR2->VAR18))
    {
        VAR5 = FUN7(VAR2->VAR36, &VAR18);
        if (VAR5)
        {
            FUN4(VAR4, VAR24, "");
            return -1;
        }
        VAR2->VAR18 = VAR18;
        VAR13 = 1;
    }
    for (VAR7 = 0; VAR7 <= 1; VAR7++)
    {
        for (VAR6 = 0; VAR6 < (!VAR7 ? VAR18.VAR25 : VAR18.VAR26); VAR6++)
        {
            VAR15 = &VAR2->VAR36[VAR7].VAR37[VAR6];
            VAR15->VAR38 = FUN5(&VAR2->VAR20);
            VAR10 = FUN5(&VAR2->VAR20);
            VAR11 = 8 >> FUN5(&VAR2->VAR20);
            VAR10 = VAR11 << !VAR10;
            VAR13 = VAR10 != VAR15->VAR10 || VAR11 != VAR15->VAR11;
            if (VAR13)
            {
                VAR15->VAR10 = VAR10;
                VAR15->VAR11 = VAR11;
            }
            if (FUN5(&VAR2->VAR20))
            {
                FUN4(VAR4, VAR24, "");
                return -1;
            }
            switch ((VAR7 << 2) + VAR6)
            {
            case 0:
                VAR15->VAR39 = VAR40;
                VAR15->VAR41 = VAR42;
                VAR15->VAR43 = VAR44;
                break;
            case 1:
                VAR15->VAR39 = VAR45;
                VAR15->VAR41 = VAR46;
                VAR15->VAR43 = VAR47;
                break;
            case 2:
                VAR15->VAR39 = VAR48;
                VAR15->VAR41 = VAR49;
                VAR15->VAR43 = VAR50;
                break;
            case 3:
                VAR15->VAR39 = VAR51;
                VAR15->VAR41 = VAR52;
                VAR15->VAR43 = VAR50;
                break;
            case 4:
                VAR15->VAR39 = VAR53;
                VAR15->VAR41 = VAR42;
                VAR15->VAR43 = VAR54;
                break;
            }
            VAR15->VAR55 = VAR15->VAR39 == VAR40 || VAR15->VAR39 == VAR53;
            if (!VAR7)
            {
                VAR12 = (VAR18.VAR25 > 1) ? VAR6 + 1 : 0;
            }
            else
            {
                VAR12 = 5;
            }
            if (VAR15->VAR11 == 8)
            {
                VAR15->VAR56 = &VAR57[VAR12][0];
                VAR15->VAR58 = &VAR59[VAR12][0];
                VAR15->VAR60 = &VAR61[VAR12][0];
                VAR15->VAR62 = &VAR63[VAR12][0];
            }
            else
            {
                VAR15->VAR56 = VAR64;
                VAR15->VAR58 = VAR65;
                VAR15->VAR60 = VAR66;
                VAR15->VAR62 = VAR67;
            }
            if (FUN2(&VAR2->VAR20, 2))
            {
                FUN4(VAR4, VAR24, "");
                return -1;
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR18.VAR26; VAR6++)
    {
        VAR16 = &VAR2->VAR36[1].VAR37[VAR6];
        VAR17 = &VAR2->VAR36[2].VAR37[VAR6];
        VAR17->VAR68 = VAR16->VAR68;
        VAR17->VAR69 = VAR16->VAR69;
        VAR17->VAR10 = VAR16->VAR10;
        VAR17->VAR11 = VAR16->VAR11;
        VAR17->VAR38 = VAR16->VAR38;
        VAR17->VAR56 = VAR16->VAR56;
        VAR17->VAR58 = VAR16->VAR58;
        VAR17->VAR60 = VAR16->VAR60;
        VAR17->VAR62 = VAR16->VAR62;
        VAR17->VAR43 = VAR16->VAR43;
        VAR17->VAR39 = VAR16->VAR39;
        VAR17->VAR41 = VAR16->VAR41;
        VAR17->VAR55 = VAR16->VAR55;
    }
    if (VAR13)
    {
        VAR5 = FUN8(VAR2->VAR36, VAR18.VAR35, VAR18.VAR34);
        if (VAR5)
        {
            FUN4(VAR4, VAR24, "");
            return -1;
        }
    }
    if (VAR2->VAR19 & 8)
    {
        if (FUN2(&VAR2->VAR20, 3))
        {
            FUN4(VAR4, VAR24, "");
            return -1;
        }
        if (FUN5(&VAR2->VAR20))
            FUN9(&VAR2->VAR20, 24);
    }
    FUN10(&VAR2->VAR20);
    FUN11(&VAR2->VAR20, 23);
    if (FUN5(&VAR2->VAR20))
    {
        do
        {
            VAR6 = FUN2(&VAR2->VAR20, 16);
        } while (VAR6 & 0x8000);
    }
    FUN10(&VAR2->VAR20);
    return 0;
}