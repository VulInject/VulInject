static int FUN1(VAR1 *VAR2, VAR3 *VAR4)
{
    unsigned int VAR5 = 0;
    unsigned int VAR6 = 0;
    unsigned int VAR7;
    unsigned int VAR8;
    bool VAR9 = false;
    bool VAR10 = false;
    VAR11 *VAR12;
    int VAR13;
    int VAR14;
    VAR15 *VAR16 = FUN2(VAR2);
    VAR12 = FUN3(sizeof(VAR11));
    VAR12->VAR17 = VAR2;
    VAR2->VAR12 = VAR12;
    VAR2->VAR18 = NULL;
    VAR12->VAR19 = 0x0;
    VAR12->VAR20 = false;
    VAR12->VAR21 = false;
    if (VAR2->VAR22)
    {
        VAR14 = sscanf(VAR2->VAR22, "", &VAR5, &VAR6, &VAR8);
        if (VAR14 == 3)
        {
            if ((VAR5 > VAR23) || (VAR6 > VAR24))
            {
                VAR13 = -VAR25;
                FUN4("", VAR5, VAR6);
                goto VAR26;
            }
            if (VAR5 != VAR27)
            {
                VAR13 = -VAR25;
                FUN4("", VAR5);
                goto VAR26;
            }
            if (FUN5(VAR5, VAR6, VAR8))
            {
                VAR13 = -VAR28;
                FUN4("", VAR5, VAR6, VAR8);
                goto VAR26;
            }
            VAR12->VAR5 = VAR5;
            VAR12->VAR6 = VAR6;
            VAR12->VAR8 = VAR8;
            VAR9 = true;
        }
        else
        {
            VAR13 = -VAR25;
            FUN4("", VAR2->VAR22);
            goto VAR26;
        }
    }
    if (VAR9)
    {
        for (VAR7 = 0; VAR7 <= VAR29; VAR7++)
        {
            if (!FUN6(1, VAR5, VAR6, VAR7))
            {
                VAR12->VAR7 = VAR7;
                FUN7(VAR5, VAR6, VAR7, VAR8, VAR12);
                VAR10 = true;
                break;
            }
        }
        if (!VAR10)
        {
            VAR13 = -VAR30;
            FUN4("", VAR5, VAR6, VAR8);
            goto VAR26;
        }
        FUN8(VAR5, VAR6, VAR7, VAR8, "");
    }
    else
    {
        VAR5 = VAR27;
        for (VAR6 = 0; VAR6 <= VAR24; VAR6++)
        {
            for (VAR7 = 0; VAR7 <= VAR29; VAR7++)
            {
                if (!FUN6(1, VAR5, VAR6, VAR7))
                {
                    VAR12->VAR5 = VAR5;
                    VAR12->VAR6 = VAR6;
                    VAR12->VAR7 = VAR7;
                    VAR8 = VAR7;
                    while (FUN5(VAR5, VAR6, VAR8))
                    {
                        if (VAR8 == VAR29)
                        {
                            VAR8 = 0;
                        }
                        else if (VAR8 == VAR7 - 1)
                        {
                            VAR13 = -VAR30;
                            FUN4("");
                            goto VAR26;
                        }
                        else
                        {
                            VAR8++;
                        }
                    }
                    VAR12->VAR8 = VAR8;
                    FUN7(VAR5, VAR6, VAR7, VAR8, VAR12);
                    VAR10 = true;
                    break;
                }
            }
            if (VAR10)
            {
                break;
            }
        }
        if (!VAR10)
        {
            VAR13 = -VAR30;
            FUN4("");
            goto VAR26;
        }
        FUN8(VAR5, VAR6, VAR7, VAR8, "");
    }
    FUN9(VAR12, 0, VAR31);
    VAR12->VAR32 = VAR33;
    memset(&VAR12->VAR34, 0, sizeof(VAR35));
    VAR12->VAR34.VAR36 = 0xff;
    VAR12->VAR34.VAR37 = VAR38;
    VAR12->VAR34.VAR39 = VAR4->VAR40;
    VAR2->VAR41[0] = FUN10(&VAR2->VAR42, VAR2->VAR41[0]);
    FUN11(&VAR2->VAR41[0], VAR43);
    FUN11(&VAR2->VAR41[0], VAR44);
    FUN12(VAR12->VAR5, VAR12->VAR6, VAR12->VAR7, VAR16->VAR45, 1);
    return 0;
VAR26:
    VAR2->VAR12 = NULL;
    FUN13(VAR12);
    return VAR13;
}