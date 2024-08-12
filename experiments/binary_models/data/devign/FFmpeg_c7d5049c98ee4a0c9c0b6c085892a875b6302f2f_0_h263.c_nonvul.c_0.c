int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5, VAR6;
VAR7:
    FUN2(&VAR2->VAR8);
    VAR5 = 0xff;
    for (;;)
    {
        VAR6 = FUN3(&VAR2->VAR8, 8);
        if (VAR5 == 0x000001)
        {
            VAR5 = ((VAR5 << 8) | VAR6) & 0xffffff;
            VAR4 = VAR5;
            break;
        }
        VAR5 = ((VAR5 << 8) | VAR6) & 0xffffff;
        if (FUN4(&VAR2->VAR8) > VAR2->VAR8.VAR9 * 8 - 32)
        {
            FUN5("");
            return -1;
        }
    }
    if (VAR4 == 0x120)
    {
        int VAR10, VAR11, VAR12;
        FUN6(&VAR2->VAR8, 1);
        FUN6(&VAR2->VAR8, 8);
        if (FUN7(&VAR2->VAR8) != 0)
        {
            VAR12 = FUN3(&VAR2->VAR8, 4);
            FUN6(&VAR2->VAR8, 3);
        }
        else
        {
            VAR12 = 1;
        }
        VAR2->VAR13 = FUN3(&VAR2->VAR8, 4);
        if (VAR2->VAR13 == VAR14)
        {
            FUN6(&VAR2->VAR8, 8);
            FUN6(&VAR2->VAR8, 8);
        }
        if (FUN7(&VAR2->VAR8))
        {
            FUN5("");
            return -1;
        }
        VAR2->VAR15 = FUN3(&VAR2->VAR8, 2);
        if (VAR2->VAR15 != VAR16)
            FUN5("");
        if (VAR2->VAR15 == VAR17 && VAR12 != 1)
        {
            FUN5("");
            FUN6(&VAR2->VAR8, 4);
        }
        FUN8(&VAR2->VAR8);
        VAR2->VAR18 = FUN3(&VAR2->VAR8, 16);
        VAR2->VAR19 = FUN9(VAR2->VAR18 - 1) + 1;
        if (VAR2->VAR19 < 1)
            VAR2->VAR19 = 1;
        FUN8(&VAR2->VAR8);
        if (FUN7(&VAR2->VAR8) != 0)
        {
            FUN6(&VAR2->VAR8, VAR2->VAR19);
        }
        if (VAR2->VAR15 != VAR20)
        {
            if (VAR2->VAR15 == VAR16)
            {
                FUN8(&VAR2->VAR8);
                VAR10 = FUN3(&VAR2->VAR8, 13);
                FUN8(&VAR2->VAR8);
                VAR11 = FUN3(&VAR2->VAR8, 13);
                FUN8(&VAR2->VAR8);
                if (VAR10 && VAR11)
                {
                    VAR2->VAR10 = VAR10;
                    VAR2->VAR11 = VAR11;
                }
            }
            if (FUN7(&VAR2->VAR8))
                FUN5("");
            if (!FUN7(&VAR2->VAR8))
                FUN5("");
            if (VAR12 == 1)
            {
                VAR2->VAR21 = FUN7(&VAR2->VAR8);
            }
            else
            {
                VAR2->VAR21 = FUN3(&VAR2->VAR8, 2);
            }
            if (VAR2->VAR21 == VAR22)
                FUN5("");
            if (VAR2->VAR21 == VAR22 || VAR2->VAR21 == VAR23)
            {
                if (VAR2->VAR21 == VAR22)
                {
                    VAR2->VAR24 = FUN3(&VAR2->VAR8, 13);
                    FUN8(&VAR2->VAR8);
                    VAR2->VAR25 = FUN3(&VAR2->VAR8, 13);
                    FUN8(&VAR2->VAR8);
                    VAR2->VAR26 = FUN3(&VAR2->VAR8, 13);
                    FUN8(&VAR2->VAR8);
                    VAR2->VAR27 = FUN3(&VAR2->VAR8, 13);
                    FUN8(&VAR2->VAR8);
                }
                VAR2->VAR28 = FUN3(&VAR2->VAR8, 6);
                VAR2->VAR29 = FUN3(&VAR2->VAR8, 2);
                VAR2->VAR30 = FUN7(&VAR2->VAR8);
                if (VAR2->VAR21 == VAR22)
                    VAR2->VAR31 = FUN7(&VAR2->VAR8);
            }
            if (FUN7(&VAR2->VAR8) == 1)
            {
                VAR2->VAR32 = FUN3(&VAR2->VAR8, 4);
                if (FUN3(&VAR2->VAR8, 4) != 8)
                    FUN5("");
            }
            else
            {
                VAR2->VAR32 = 5;
            }
            if (FUN7(&VAR2->VAR8))
                FUN5("");
            if (VAR12 != 1)
                VAR2->VAR33 = FUN7(&VAR2->VAR8);
            else
                VAR2->VAR33 = 0;
            if (!FUN7(&VAR2->VAR8))
                FUN5("");
            if (FUN7(&VAR2->VAR8))
                FUN5("");
            FUN8(&VAR2->VAR8);
            VAR2->VAR34 = FUN7(&VAR2->VAR8);
            if (VAR2->VAR34)
            {
                FUN5("");
                FUN8(&VAR2->VAR8);
            }
            if (VAR12 != 1)
            {
                VAR2->VAR35 = FUN7(&VAR2->VAR8);
                if (VAR2->VAR35)
                {
                    FUN5("");
                    FUN6(&VAR2->VAR8, 2);
                    FUN8(&VAR2->VAR8);
                }
                VAR2->VAR36 = FUN7(&VAR2->VAR8);
                if (VAR2->VAR36)
                    FUN5("");
            }
            else
            {
                VAR2->VAR35 = 0;
                VAR2->VAR36 = 0;
            }
            VAR2->VAR37 = FUN7(&VAR2->VAR8);
            if (VAR2->VAR37)
            {
                FUN5("");
                return -1;
            }
        }
        goto VAR7;
    }
    else if (VAR4 == 0x1b2)
    {
        char VAR38[256];
        int VAR39;
        int VAR40;
        int VAR41, VAR42;
        VAR38[0] = FUN10(&VAR2->VAR8, 8);
        for (VAR39 = 1; VAR39 < 256; VAR39++)
        {
            VAR38[VAR39] = FUN10(&VAR2->VAR8, 16) & 0xFF;
            if (VAR38[VAR39] == 0)
                break;
            FUN6(&VAR2->VAR8, 8);
        }
        VAR38[255] = 0;
        VAR40 = sscanf(VAR38, "", &VAR41, &VAR42);
        if (VAR40 == 2)
        {
            VAR2->VAR43 = VAR41;
            VAR2->VAR44 = VAR42;
            if (VAR2->VAR45 == 0)
            {
                FUN5("", VAR41, VAR42);
                if (VAR41 == 500 && VAR42 == 413)
                {
                    FUN5("");
                }
                else
                {
                    FUN5(""
                           "");
                }
            }
        }
        goto VAR7;
    }
    else if (VAR4 != 0x1b6)
    {
        goto VAR7;
    }
    VAR2->VAR46 = FUN3(&VAR2->VAR8, 2) + 1;
    VAR3 = 0;
    while (FUN7(&VAR2->VAR8) != 0)
        VAR3++;
    FUN11(&VAR2->VAR8, "");
    VAR2->VAR47 = FUN3(&VAR2->VAR8, VAR2->VAR19);
    if (VAR2->VAR46 != VAR48)
    {
        VAR2->VAR49 += VAR3;
        VAR2->VAR50[1] = VAR2->VAR50[0];
        VAR2->VAR50[0] = VAR2->VAR49 * VAR2->VAR18 + VAR2->VAR47;
    }
    else
    {
        VAR2->VAR51 = (VAR2->VAR50[1] / VAR2->VAR18 + VAR3) * VAR2->VAR18;
        VAR2->VAR51 += VAR2->VAR47;
    }
    if (FUN11(&VAR2->VAR8, "") == 0 && VAR2->VAR45 == 0)
    {
        FUN5("");
        for (VAR2->VAR19++; VAR2->VAR19 < 16; VAR2->VAR19++)
        {
            if (FUN7(&VAR2->VAR8))
                break;
        }
        FUN5("", VAR2->VAR19);
    }
    if (FUN7(&VAR2->VAR8) != 1)
        goto VAR7;
    if (VAR2->VAR15 != VAR20 && (VAR2->VAR46 == VAR52 || (VAR2->VAR46 == VAR53 && VAR2->VAR21 == VAR23)))
    {
        VAR2->VAR54 = FUN7(&VAR2->VAR8);
    }
    else
    {
        VAR2->VAR54 = 0;
    }
    if (VAR2->VAR15 != VAR16)
    {
        if (VAR2->VAR21 != 1 || VAR2->VAR46 != VAR55)
        {
            int VAR10, VAR11, VAR56, VAR57;
            VAR10 = FUN3(&VAR2->VAR8, 13);
            FUN8(&VAR2->VAR8);
            VAR11 = FUN3(&VAR2->VAR8, 13);
            FUN8(&VAR2->VAR8);
            VAR56 = FUN3(&VAR2->VAR8, 13);
            FUN8(&VAR2->VAR8);
            VAR57 = FUN3(&VAR2->VAR8, 13);
        }
        FUN8(&VAR2->VAR8);
        if (FUN7(&VAR2->VAR8) != 0)
        {
            FUN6(&VAR2->VAR8, 8);
        }
    }
    if (VAR2->VAR15 != VAR20)
    {
        FUN6(&VAR2->VAR8, 3);
    }
    if (VAR2->VAR46 == VAR53 && (VAR2->VAR21 == VAR22 || VAR2->VAR21 == VAR23))
    {
        if (VAR2->VAR28)
        {
            FUN12(VAR2);
        }
        if (VAR2->VAR30)
            FUN5("");
        if (VAR2->VAR21 == VAR22)
            FUN5("");
    }
    if (VAR2->VAR15 != VAR20)
    {
        VAR2->VAR58 = FUN3(&VAR2->VAR8, 5);
        if (VAR2->VAR58 == 0)
        {
            FUN5("");
            return -1;
        }
        if (VAR2->VAR46 != VAR55)
        {
            VAR2->VAR59 = FUN3(&VAR2->VAR8, 3);
            if (VAR2->VAR59 == 0)
            {
                FUN5("");
                return -1;
            }
        }
        if (VAR2->VAR46 == VAR48)
        {
            VAR2->VAR60 = FUN3(&VAR2->VAR8, 3);
        }
        if (!VAR2->VAR37)
        {
            if (VAR2->VAR15 != VAR16 && VAR2->VAR46 != VAR55)
            {
                FUN8(&VAR2->VAR8);
            }
        }
    }
    VAR2->VAR45++;
    return 0;
}