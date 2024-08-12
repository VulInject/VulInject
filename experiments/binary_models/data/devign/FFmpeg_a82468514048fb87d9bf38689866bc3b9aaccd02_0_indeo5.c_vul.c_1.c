static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    int VAR5, VAR6, VAR7, VAR8, VAR9, VAR10, VAR11, VAR12;
    int VAR13, VAR14 = 0;
    VAR15 *VAR16, *VAR17, *VAR18;
    IVIPicConfig VAR19;
    VAR2->VAR20 = FUN2(&VAR2->VAR21, 8);
    VAR2->VAR22 = (VAR2->VAR20 & 1) ? FUN2(&VAR2->VAR21, 16) : 0;
    if (VAR2->VAR20 & VAR23)
        VAR2->VAR24 = FUN3(&VAR2->VAR21, 32);
    VAR8 = (VAR2->VAR20 & 0x40) ? 64 << FUN2(&VAR2->VAR21, 2) : 0;
    if (VAR8 > 256)
    {
        FUN4(VAR4, VAR25, "", VAR8);
        return VAR26;
    }
    VAR19.VAR27 = FUN2(&VAR2->VAR21, 2) * 3 + 1;
    VAR19.VAR28 = FUN5(&VAR2->VAR21) * 3 + 1;
    VAR12 = VAR19.VAR27 != 1 || VAR19.VAR28 != 1;
    if (VAR12 && (VAR19.VAR27 != 4 || VAR19.VAR28 != 1))
    {
        FUN4(VAR4, VAR25, "", VAR19.VAR27, VAR19.VAR28);
        return VAR26;
    }
    VAR9 = FUN2(&VAR2->VAR21, 4);
    if (VAR9 == VAR29)
    {
        VAR19.VAR30 = FUN2(&VAR2->VAR21, 13);
        VAR19.VAR31 = FUN2(&VAR2->VAR21, 13);
    }
    else
    {
        VAR19.VAR30 = VAR32[VAR9 * 2 + 1] << 2;
        VAR19.VAR31 = VAR32[VAR9 * 2] << 2;
    }
    if (VAR2->VAR20 & 2)
    {
        FUN6(VAR4, "");
        return VAR33;
    }
    VAR19.VAR34 = (VAR19.VAR30 + 3) >> 2;
    VAR19.VAR35 = (VAR19.VAR31 + 3) >> 2;
    if (!VAR8)
    {
        VAR19.VAR36 = VAR19.VAR30;
        VAR19.VAR37 = VAR19.VAR31;
    }
    else
    {
        VAR19.VAR36 = VAR19.VAR37 = VAR8;
    }
    if (FUN7(&VAR19, &VAR2->VAR19) || VAR2->VAR38)
    {
        VAR5 = FUN8(VAR2->VAR39, &VAR19, 0);
        if (VAR5 < 0)
        {
            FUN4(VAR4, VAR25, "");
            return VAR5;
        }
        VAR2->VAR19 = VAR19;
        VAR2->VAR12 = VAR12;
        VAR14 = 1;
    }
    for (VAR7 = 0; VAR7 <= 1; VAR7++)
    {
        for (VAR6 = 0; VAR6 < (!VAR7 ? VAR19.VAR27 : VAR19.VAR28); VAR6++)
        {
            VAR16 = &VAR2->VAR39[VAR7].VAR40[VAR6];
            VAR16->VAR41 = FUN5(&VAR2->VAR21);
            VAR10 = FUN5(&VAR2->VAR21);
            VAR11 = 8 >> FUN5(&VAR2->VAR21);
            VAR10 = VAR11 << !VAR10;
            if (VAR7 == 0 && VAR11 == 4)
            {
                FUN4(VAR4, VAR25, "");
                return VAR33;
            }
            VAR14 = VAR10 != VAR16->VAR10 || VAR11 != VAR16->VAR11;
            if (VAR14)
            {
                VAR16->VAR10 = VAR10;
                VAR16->VAR11 = VAR11;
            }
            if (FUN5(&VAR2->VAR21))
            {
                FUN6(VAR4, "");
                return VAR33;
            }
            switch ((VAR7 << 2) + VAR6)
            {
            case 0:
                VAR16->VAR42 = VAR43;
                VAR16->VAR44 = VAR45;
                VAR16->VAR46 = VAR47;
                VAR16->VAR48 = 8;
                break;
            case 1:
                VAR16->VAR42 = VAR49;
                VAR16->VAR44 = VAR50;
                VAR16->VAR46 = VAR51;
                VAR16->VAR48 = 8;
                break;
            case 2:
                VAR16->VAR42 = VAR52;
                VAR16->VAR44 = VAR53;
                VAR16->VAR46 = VAR54;
                VAR16->VAR48 = 8;
                break;
            case 3:
                VAR16->VAR42 = VAR55;
                VAR16->VAR44 = VAR56;
                VAR16->VAR46 = VAR54;
                VAR16->VAR48 = 8;
                break;
            case 4:
                VAR16->VAR42 = VAR57;
                VAR16->VAR44 = VAR45;
                VAR16->VAR46 = VAR58;
                VAR16->VAR48 = 4;
                break;
            }
            VAR16->VAR59 = VAR16->VAR42 == VAR43 || VAR16->VAR42 == VAR57;
            if (VAR16->VAR48 != VAR16->VAR11)
            {
                FUN4(VAR4, VAR25, "", VAR16->VAR48, VAR16->VAR11);
                return VAR26;
            }
            if (!VAR7)
            {
                VAR13 = (VAR19.VAR27 > 1) ? VAR6 + 1 : 0;
            }
            else
            {
                VAR13 = 5;
            }
            if (VAR16->VAR11 == 8)
            {
                if (VAR13 >= 5)
                {
                    FUN4(VAR4, VAR25, "", VAR13);
                    return -1;
                }
                VAR16->VAR60 = &VAR61[VAR13][0];
                VAR16->VAR62 = &VAR63[VAR13][0];
                VAR16->VAR64 = &VAR65[VAR13][0];
                VAR16->VAR66 = &VAR67[VAR13][0];
            }
            else
            {
                VAR16->VAR60 = VAR68;
                VAR16->VAR62 = VAR69;
                VAR16->VAR64 = VAR70;
                VAR16->VAR66 = VAR71;
            }
            if (FUN2(&VAR2->VAR21, 2))
            {
                FUN4(VAR4, VAR25, "");
                return VAR26;
            }
        }
    }
    for (VAR6 = 0; VAR6 < VAR19.VAR28; VAR6++)
    {
        VAR17 = &VAR2->VAR39[1].VAR40[VAR6];
        VAR18 = &VAR2->VAR39[2].VAR40[VAR6];
        VAR18->VAR72 = VAR17->VAR72;
        VAR18->VAR73 = VAR17->VAR73;
        VAR18->VAR10 = VAR17->VAR10;
        VAR18->VAR11 = VAR17->VAR11;
        VAR18->VAR41 = VAR17->VAR41;
        VAR18->VAR60 = VAR17->VAR60;
        VAR18->VAR62 = VAR17->VAR62;
        VAR18->VAR64 = VAR17->VAR64;
        VAR18->VAR66 = VAR17->VAR66;
        VAR18->VAR46 = VAR17->VAR46;
        VAR18->VAR42 = VAR17->VAR42;
        VAR18->VAR44 = VAR17->VAR44;
        VAR18->VAR59 = VAR17->VAR59;
        VAR18->VAR48 = VAR17->VAR48;
    }
    if (VAR14)
    {
        VAR5 = FUN9(VAR2->VAR39, VAR19.VAR37, VAR19.VAR36);
        if (VAR5 < 0)
        {
            FUN4(VAR4, VAR25, "");
            return VAR5;
        }
    }
    if (VAR2->VAR20 & 8)
    {
        if (FUN2(&VAR2->VAR21, 3))
        {
            FUN4(VAR4, VAR25, "");
            return VAR26;
        }
        if (FUN5(&VAR2->VAR21))
            FUN10(&VAR2->VAR21, 24);
    }
    FUN11(&VAR2->VAR21);
    FUN12(&VAR2->VAR21, 23);
    if (FUN5(&VAR2->VAR21))
    {
        do
        {
            VAR6 = FUN2(&VAR2->VAR21, 16);
        } while (VAR6 & 0x8000);
    }
    FUN11(&VAR2->VAR21);
    return 0;
}