static void FUN1(VAR1 *VAR2, VAR3 **VAR4)
{
    unsigned int VAR5 = 0;
    unsigned int VAR6 = 0;
    unsigned int VAR7;
    unsigned int VAR8;
    bool VAR9 = false;
    bool VAR10 = false;
    VAR11 *VAR12;
    int VAR13;
    VAR3 *VAR14 = NULL;
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
        VAR13 = sscanf(VAR2->VAR22, "", &VAR5, &VAR6, &VAR8);
        if (VAR13 == 3)
        {
            if ((VAR5 > VAR23) || (VAR6 > VAR24))
            {
                FUN4(VAR4, "", VAR5, VAR6);
                goto VAR25;
            }
            if (VAR5 != VAR26)
            {
                FUN4(VAR4, "", VAR5);
                goto VAR25;
            }
            if (FUN5(VAR5, VAR6, VAR8))
            {
                FUN4(VAR4, "", VAR5, VAR6, VAR8);
                goto VAR25;
            }
            VAR12->VAR5 = VAR5;
            VAR12->VAR6 = VAR6;
            VAR12->VAR8 = VAR8;
            VAR9 = true;
        }
        else
        {
            FUN4(VAR4, "", VAR2->VAR22);
            goto VAR25;
        }
    }
    if (VAR9)
    {
        for (VAR7 = 0; VAR7 <= VAR27; VAR7++)
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
            FUN4(VAR4, "", VAR5, VAR6, VAR8);
            goto VAR25;
        }
        FUN8(VAR5, VAR6, VAR7, VAR8, "");
    }
    else
    {
        VAR5 = VAR26;
        for (VAR6 = 0; VAR6 <= VAR24; VAR6++)
        {
            for (VAR7 = 0; VAR7 <= VAR27; VAR7++)
            {
                if (!FUN6(1, VAR5, VAR6, VAR7))
                {
                    VAR12->VAR5 = VAR5;
                    VAR12->VAR6 = VAR6;
                    VAR12->VAR7 = VAR7;
                    VAR8 = VAR7;
                    while (FUN5(VAR5, VAR6, VAR8))
                    {
                        if (VAR8 == VAR27)
                        {
                            VAR8 = 0;
                        }
                        else if (VAR8 == VAR7 - 1)
                        {
                            FUN4(VAR4, "");
                            goto VAR25;
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
            FUN4(VAR4, "");
            goto VAR25;
        }
        FUN8(VAR5, VAR6, VAR7, VAR8, "");
    }
    FUN9(VAR12, 0, VAR28);
    VAR12->VAR29 = VAR30;
    memset(&VAR12->VAR31, 0, sizeof(VAR32));
    VAR12->VAR31.VAR33 = 0xff;
    VAR12->VAR31.VAR34 = VAR35;
    if (VAR16->VAR36)
    {
        VAR16->FUN10(VAR2, &VAR14);
    }
    if (VAR14)
    {
        FUN11(VAR4, VAR14);
        FUN7(VAR5, VAR6, VAR7, VAR8, NULL);
        goto VAR25;
    }
    return;
VAR25:
    VAR2->VAR12 = NULL;
    FUN12(VAR12);
}