static int FUN1(VAR1 *VAR2)
{
    int VAR3, VAR4, VAR5;
    VAR3 = FUN2(&VAR2->VAR6, 16);
    if (VAR3 < 6)
        return VAR7;
    if (8 * VAR3 > FUN3(&VAR2->VAR6))
        return VAR7;
    VAR4 = FUN4(&VAR2->VAR6, 32);
    VAR3 -= 6;
    if (VAR2->VAR8->VAR9 & VAR10)
    {
        char VAR11[32];
        FUN5(VAR11, sizeof(VAR11), FUN6(VAR4));
        FUN7(VAR2->VAR8, VAR12, "", VAR11, VAR4, VAR3);
    }
    if (VAR4 == FUN8(""))
    {
        VAR2->VAR13 = 1;
        VAR5 = FUN2(&VAR2->VAR6, 8);
        VAR3--;
        FUN7(VAR2->VAR8, VAR12, "", VAR5);
        FUN9(&VAR2->VAR6, 8);
        FUN9(&VAR2->VAR6, 32);
        FUN9(&VAR2->VAR6, 32);
        VAR3 -= 10;
    }
    if (VAR4 == FUN8(""))
    {
        int VAR14, VAR15, VAR16, VAR17;
        FUN9(&VAR2->VAR6, 8);
        VAR16 = FUN2(&VAR2->VAR6, 8);
        VAR17 = FUN2(&VAR2->VAR6, 8);
        FUN9(&VAR2->VAR6, 8);
        VAR2->VAR8->VAR18.VAR19 = FUN2(&VAR2->VAR6, 16);
        VAR2->VAR8->VAR18.VAR20 = FUN2(&VAR2->VAR6, 16);
        if (VAR2->VAR8->VAR18.VAR19 <= 0 || VAR2->VAR8->VAR18.VAR20 <= 0)
        {
            VAR2->VAR8->VAR18.VAR19 = 0;
            VAR2->VAR8->VAR18.VAR20 = 1;
        }
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN7(VAR2->VAR8, VAR22, "", VAR16, VAR17, VAR2->VAR8->VAR18.VAR19, VAR2->VAR8->VAR18.VAR20);
        VAR3 -= 8;
        if (VAR3 >= 2)
        {
            VAR14 = FUN2(&VAR2->VAR6, 8);
            VAR15 = FUN2(&VAR2->VAR6, 8);
            if (VAR14 && VAR15)
            {
                if (VAR3 - 10 - (VAR14 * VAR15 * 3) > 0)
                    VAR3 -= VAR14 * VAR15 * 3;
            }
            VAR3 -= 2;
        }
    }
    if (VAR4 == FUN8("") && VAR3 >= 7 && FUN10(&VAR2->VAR6, 8) == '' && FUN11(&VAR2->VAR6, 32) != FUN8(""))
    {
        FUN9(&VAR2->VAR6, 8);
        FUN9(&VAR2->VAR6, 16);
        FUN9(&VAR2->VAR6, 16);
        FUN9(&VAR2->VAR6, 16);
        VAR2->VAR23 = FUN2(&VAR2->VAR6, 8);
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN7(VAR2->VAR8, VAR22, "", VAR2->VAR23);
        VAR3 -= 7;
    }
    if (VAR4 == FUN8(""))
    {
        int VAR24 = VAR2->VAR24;
        int VAR25 = VAR2->VAR25;
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN7(VAR2->VAR8, VAR22, "");
        FUN9(&VAR2->VAR6, 16);
        FUN9(&VAR2->VAR6, 16);
        FUN9(&VAR2->VAR6, 16);
        FUN9(&VAR2->VAR6, 16);
        switch (VAR5 = FUN2(&VAR2->VAR6, 8))
        {
        case 1:
            VAR24 = 1;
            VAR25 = 0;
            break;
        case 2:
            VAR24 = 1;
            VAR25 = 1;
            break;
        default:
            FUN7(VAR2->VAR8, VAR26, "", VAR5);
        }
        VAR3 -= 9;
        if (VAR2->VAR27)
            if (VAR24 != VAR2->VAR24 || VAR25 != VAR2->VAR25)
            {
                FUN7(VAR2->VAR8, VAR28, "");
            }
        VAR2->VAR24 = VAR24;
        VAR2->VAR25 = VAR25;
    }
    if (VAR4 == FUN12("") && VAR3 > 0)
    {
        VAR2->VAR29 = FUN2(&VAR2->VAR6, 8);
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN7(VAR2->VAR8, VAR22, "", VAR2->VAR29);
        VAR3--;
    }
    if (VAR4 == FUN12("") && VAR3 > 0)
    {
        VAR2->VAR30 = FUN2(&VAR2->VAR6, 8);
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN7(VAR2->VAR8, VAR22, "", VAR2->VAR30);
        VAR3--;
    }
    if (VAR2->VAR31 == VAR32 && VAR4 == FUN8("") && VAR3 >= 10)
    {
        int VAR33, VAR34, VAR35;
        if (VAR2->VAR8->VAR9 & VAR21)
            FUN7(VAR2->VAR8, VAR22, "");
        FUN9(&VAR2->VAR6, 32);
        VAR3 -= 4;
        FUN9(&VAR2->VAR6, 16);
        VAR3 -= 2;
        FUN9(&VAR2->VAR6, 8);
        VAR33 = FUN2(&VAR2->VAR6, 8);
        VAR34 = FUN2(&VAR2->VAR6, 8);
        VAR35 = FUN2(&VAR2->VAR6, 8);
        VAR3 -= 4;
        VAR2->VAR36 = FUN13();
        if (!VAR2->VAR36)
        {
        }
        if (VAR35 == 0)
        {
            VAR2->VAR36->VAR35 = VAR37;
        }
        else if (VAR35 == 1)
        {
            switch (VAR34)
            {
            case 0x01:
                VAR2->VAR36->VAR35 = VAR38;
                break;
            case 0x02:
                VAR2->VAR36->VAR35 = VAR39;
                break;
            case 0x03:
                VAR2->VAR36->VAR35 = VAR40;
                break;
            }
            if (!(VAR33 & 0x04))
            {
                VAR2->VAR36->VAR33 = VAR41;
            }
        }
    }
    if (VAR2->VAR31 == VAR42 && VAR4 == FUN8("") && VAR3 >= 2)
    {
        GetByteContext VAR43;
        int VAR44, VAR45, VAR46, VAR47;
        const VAR48 *VAR49;
        FUN9(&VAR2->VAR6, 16);
        VAR3 -= 2;
        VAR49 = FUN14(&VAR2->VAR6);
        FUN15(&VAR43, VAR49, VAR3);
        VAR44 = FUN16(&VAR43, &VAR45, &VAR46);
        if (VAR44)
        {
            FUN7(VAR2->VAR8, VAR26, "");
        }
        else
        {
            FUN17(&VAR43, VAR46, VAR50);
            VAR44 = FUN18(VAR2->VAR8, &VAR43, VAR45, 0, &VAR2->VAR51);
            if (VAR44 < 0)
            {
                FUN7(VAR2->VAR8, VAR26, "");
            }
        }
        VAR47 = FUN19(&VAR43);
        FUN9(&VAR2->VAR6, VAR47 << 3);
        VAR3 -= VAR47;
    }
    if ((VAR2->VAR31 == VAR42) && (VAR3 > (0x28 - 8)))
    {
        VAR4 = FUN4(&VAR2->VAR6, 32);
        VAR3 -= 4;
        if (VAR4 == FUN8(""))
        {
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            FUN9(&VAR2->VAR6, 32);
            if (VAR2->VAR8->VAR9 & VAR21)
                FUN7(VAR2->VAR8, VAR22, "");
        }
    }
VAR52:
    if (VAR3 < 0)
        FUN7(VAR2->VAR8, VAR26, "");
    while (--VAR3 > 0)
        FUN9(&VAR2->VAR6, 8);
    return 0;