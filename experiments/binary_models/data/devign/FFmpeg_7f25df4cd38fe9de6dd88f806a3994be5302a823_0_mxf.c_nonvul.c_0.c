static int FUN1(VAR1 *VAR2)
{
    VAR3 *VAR4 = NULL;
    VAR3 *VAR5 = NULL;
    int VAR6, VAR7, VAR8;
    FUN2("", VAR2->VAR9);
    for (VAR6 = 0; VAR6 < VAR2->VAR10; VAR6++)
    {
        if (!(VAR5 = FUN3(VAR2, &VAR2->VAR11[VAR6])))
        {
            FUN4(VAR2->VAR12, VAR13, "");
            return -1;
        }
        if (VAR5->VAR14 == VAR15)
        {
            VAR4 = VAR5;
            break;
        }
    }
    if (!VAR4)
    {
        FUN4(VAR2->VAR12, VAR13, "");
        return -1;
    }
    for (VAR6 = 0; VAR6 < VAR4->VAR16; VAR6++)
    {
        VAR3 *VAR17 = NULL;
        VAR18 *VAR19 = NULL;
        VAR18 *VAR20 = NULL;
        VAR18 *VAR21 = NULL;
        VAR22 *VAR23 = NULL;
        VAR24 *VAR25 = NULL;
        const VAR26 *VAR27 = NULL;
        const VAR26 *VAR28 = NULL;
        VAR29 *VAR30;
        if (!(VAR19 = FUN3(VAR2, &VAR4->VAR31[VAR6])))
        {
            FUN4(VAR2->VAR12, VAR13, "");
            continue;
        }
        if (!(VAR19->VAR32 = FUN3(VAR2, &VAR19->VAR33)))
        {
            FUN4(VAR2->VAR12, VAR13, "");
            return -1;
        }
        for (VAR7 = 0; VAR7 < VAR19->VAR32->VAR34; VAR7++)
        {
            VAR25 = FUN3(VAR2, &VAR19->VAR32->VAR35[VAR7]);
            if (!VAR25 || VAR25->VAR14 != VAR36)
                continue;
            for (VAR8 = 0; VAR8 < VAR2->VAR10; VAR8++)
            {
                if (!(VAR5 = FUN3(VAR2, &VAR2->VAR11[VAR8])))
                {
                    FUN4(VAR2->VAR12, VAR13, "");
                    return -1;
                }
                if (!memcmp(VAR5->VAR37, VAR25->VAR38, 16))
                {
                    VAR17 = VAR5;
                    break;
                }
            }
            if (!VAR17)
            {
                FUN4(VAR2->VAR12, VAR13, "", VAR19->VAR39);
                break;
            }
            for (VAR8 = 0; VAR8 < VAR17->VAR16; VAR8++)
            {
                if (!(VAR21 = FUN3(VAR2, &VAR17->VAR31[VAR8])))
                {
                    FUN4(VAR2->VAR12, VAR13, "");
                    return -1;
                }
                if (VAR21->VAR39 == VAR25->VAR40)
                {
                    VAR20 = VAR21;
                    break;
                }
            }
            if (!VAR20)
            {
                FUN4(VAR2->VAR12, VAR13, "", VAR19->VAR39);
                break;
            }
        }
        if (!VAR20)
            continue;
        VAR30 = FUN5(VAR2->VAR12, VAR20->VAR39);
        VAR30->VAR41 = VAR20;
        VAR30->VAR42 = VAR25->VAR42;
        if (VAR30->VAR42 == -1)
            VAR30->VAR42 = VAR43;
        VAR30->VAR44 = VAR25->VAR45;
        FUN6(VAR30, 64, VAR19->VAR46.VAR47, VAR19->VAR46.VAR48);
        if (!(VAR20->VAR32 = FUN3(VAR2, &VAR20->VAR33)))
        {
            FUN4(VAR2->VAR12, VAR13, "");
            return -1;
        }
        FUN7("", VAR20->VAR32->VAR49);
        VAR30->VAR50->VAR51 = FUN8(VAR52, &VAR20->VAR32->VAR49);
        VAR17->VAR23 = FUN3(VAR2, &VAR17->VAR53);
        if (VAR17->VAR23)
        {
            if (VAR17->VAR23->VAR14 == VAR54)
            {
                for (VAR7 = 0; VAR7 < VAR17->VAR23->VAR55; VAR7++)
                {
                    VAR22 *VAR56 = FUN3(VAR2, &VAR17->VAR23->VAR57[VAR7]);
                    if (!VAR56)
                    {
                        FUN4(VAR2->VAR12, VAR13, "");
                        continue;
                    }
                    if (VAR56->VAR58 == VAR20->VAR39)
                    {
                        VAR23 = VAR56;
                        break;
                    }
                }
            }
            else
                VAR23 = VAR17->VAR23;
        }
        if (!VAR23)
        {
            FUN4(VAR2->VAR12, VAR59, "", VAR20->VAR39, VAR30->VAR60);
            continue;
        }
        FUN7("", VAR23->VAR61);
        FUN7("", VAR23->VAR62);
        VAR27 = FUN9(VAR63, &VAR23->VAR61);
        VAR30->VAR50->VAR64 = VAR27->VAR65;
        if (VAR23->VAR66)
        {
            VAR30->VAR50->VAR66 = VAR23->VAR66;
            VAR30->VAR50->VAR67 = VAR23->VAR67;
        }
        if (VAR30->VAR50->VAR51 == VAR68)
        {
            VAR28 = FUN9(VAR69, &VAR23->VAR62);
            if (VAR30->VAR50->VAR64 == VAR70)
                VAR30->VAR50->VAR64 = VAR28->VAR65;
            VAR30->VAR50->VAR71 = VAR23->VAR71;
            VAR30->VAR50->VAR72 = VAR23->VAR72;
            VAR30->VAR50->VAR73 = VAR23->VAR73;
            VAR30->VAR74 = 2;
        }
        else if (VAR30->VAR50->VAR51 == VAR75)
        {
            VAR28 = FUN9(VAR76, &VAR23->VAR62);
            if (VAR30->VAR50->VAR64 == VAR70)
                VAR30->VAR50->VAR64 = VAR28->VAR65;
            VAR30->VAR50->VAR77 = VAR23->VAR77;
            VAR30->VAR50->VAR73 = VAR23->VAR73;
            VAR30->VAR50->VAR78 = VAR23->VAR78.VAR47 / VAR23->VAR78.VAR48;
            if (VAR30->VAR50->VAR64 == VAR79)
            {
                if (VAR23->VAR73 == 24)
                    VAR30->VAR50->VAR64 = VAR80;
                else if (VAR23->VAR73 == 32)
                    VAR30->VAR50->VAR64 = VAR81;
            }
            else if (VAR30->VAR50->VAR64 == VAR82)
            {
                if (VAR23->VAR73 == 24)
                    VAR30->VAR50->VAR64 = VAR83;
                else if (VAR23->VAR73 == 32)
                    VAR30->VAR50->VAR64 = VAR84;
                if (VAR23->VAR62[13] == 0x01)
                    VAR30->VAR50->VAR77 = 8;
            }
            else if (VAR30->VAR50->VAR64 == VAR85)
            {
                VAR30->VAR74 = 1;
            }
        }
        if (VAR28 && VAR28->VAR86 == VAR87)
        {
            FUN2("", VAR30->VAR60);
            VAR30->VAR74 = 1;
        }
    }
    return 0;
}