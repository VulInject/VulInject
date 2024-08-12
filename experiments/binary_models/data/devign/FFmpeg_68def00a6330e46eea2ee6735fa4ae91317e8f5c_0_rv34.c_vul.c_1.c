int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    SliceInfo VAR18;
    int VAR19;
    int VAR20;
    const VAR7 *VAR21 = NULL;
    int VAR22 = 0;
    if (VAR9 == 0)
    {
        if (VAR15->VAR23 == 0 && VAR15->VAR24)
        {
            *VAR17 = VAR15->VAR24->VAR25;
            VAR15->VAR24 = NULL;
            *VAR4 = 1;
        }
        return 0;
    }
    if (!VAR2->VAR20)
    {
        VAR20 = (*VAR8++) + 1;
        VAR21 = VAR8 + 4;
        VAR8 += 8 * VAR20;
        VAR9 -= 1 + 8 * VAR20;
    }
    else
        VAR20 = VAR2->VAR20;
    if (FUN2(VAR2, VAR21, 0) < 0 || FUN2(VAR2, VAR21, 0) > VAR9)
    {
        FUN3(VAR2, VAR26, "");
    }
    FUN4(&VAR15->VAR27, VAR8 + FUN2(VAR2, VAR21, 0), (VAR9 - FUN2(VAR2, VAR21, 0)) * 8);
    if (VAR12->FUN5(VAR12, &VAR12->VAR15.VAR27, &VAR18) < 0 || VAR18.VAR28)
    {
        FUN3(VAR2, VAR26, "");
    }
    if ((!VAR15->VAR29 || !VAR15->VAR29->VAR25.VAR3[0]) && VAR18.VAR30 == VAR31)
    {
        FUN3(VAR2, VAR26, ""
                                    "");
    }
    if ((VAR2->VAR32 >= VAR33 && VAR18.VAR30 == VAR31) || (VAR2->VAR32 >= VAR34 && VAR18.VAR30 != VAR35) || VAR2->VAR32 >= VAR36)
        return VAR6->VAR10;
    if (VAR18.VAR28 == 0)
    {
        if (VAR15->VAR37 > 0)
        {
            FUN3(VAR2, VAR26, "", VAR15->VAR37);
            FUN6(VAR15);
            FUN7(VAR15);
        }
        if (VAR15->VAR38 != VAR18.VAR38 || VAR15->VAR39 != VAR18.VAR39)
        {
            int VAR40;
            FUN3(VAR15->VAR2, VAR41, "", VAR18.VAR38, VAR18.VAR39);
            VAR15->VAR38 = VAR18.VAR38;
            VAR15->VAR39 = VAR18.VAR39;
            FUN8(VAR15->VAR2, VAR15->VAR38, VAR15->VAR39);
            if ((VAR40 = FUN9(VAR15)) < 0)
                return VAR40;
            if ((VAR40 = FUN10(VAR12)) < 0)
                return VAR40;
        }
        VAR15->VAR42 = VAR18.VAR30 ? VAR18.VAR30 : VAR35;
        if (FUN11(VAR15, VAR15->VAR2) < 0)
            return -1;
        FUN12(VAR15);
        if (!VAR12->VAR43)
        {
            int VAR19;
            VAR12->VAR43 = FUN13(VAR15->VAR44 * 48);
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR12->VAR45[VAR19] = VAR12->VAR43 + VAR19 * 16 * VAR15->VAR44;
            for (VAR19 = 0; VAR19 < 4; VAR19++)
                VAR12->VAR46[VAR19] = VAR12->VAR43 + 32 * VAR15->VAR44 + (VAR19 >> 1) * 8 * VAR15->VAR47 + (VAR19 & 1) * 16;
        }
        VAR12->VAR48 = VAR18.VAR49;
        if (VAR15->VAR42 != VAR31)
        {
            VAR12->VAR50 = VAR12->VAR51;
            VAR12->VAR51 = VAR12->VAR48;
        }
        else
        {
            int VAR52 = FUN14(VAR12->VAR51, VAR12->VAR50);
            int VAR53 = FUN14(VAR12->VAR48, VAR12->VAR50);
            int VAR54 = FUN14(VAR12->VAR51, VAR12->VAR48);
            if (!VAR52)
            {
                VAR12->VAR55 = VAR12->VAR56 = VAR12->VAR57 = VAR12->VAR58 = 8192;
                VAR12->VAR59 = 0;
            }
            else
            {
                VAR12->VAR55 = (VAR53 << 14) / VAR52;
                VAR12->VAR56 = (VAR54 << 14) / VAR52;
                if ((VAR12->VAR55 | VAR12->VAR56) & 511)
                {
                    VAR12->VAR57 = VAR12->VAR55;
                    VAR12->VAR58 = VAR12->VAR56;
                    VAR12->VAR59 = 0;
                }
                else
                {
                    VAR12->VAR57 = VAR12->VAR55 >> 9;
                    VAR12->VAR58 = VAR12->VAR56 >> 9;
                    VAR12->VAR59 = 1;
                }
            }
        }
        VAR15->VAR60 = VAR15->VAR61 = 0;
        FUN15(VAR15->VAR2);
    }
    else if (VAR62 && (VAR15->VAR2->VAR63 & VAR64))
    {
        FUN3(VAR15->VAR2, VAR26, ""
                                       "",
               VAR18.VAR28);
    }
    for (VAR19 = 0; VAR19 < VAR20; VAR19++)
    {
        int VAR65 = FUN2(VAR2, VAR21, VAR19);
        int VAR10;
        if (VAR19 + 1 == VAR20)
            VAR10 = VAR9 - VAR65;
        else
            VAR10 = FUN2(VAR2, VAR21, VAR19 + 1) - VAR65;
        if (VAR65 < 0 || VAR65 > VAR9)
        {
            FUN3(VAR2, VAR26, "");
            break;
        }
        VAR12->VAR18.VAR66 = VAR15->VAR67 * VAR15->VAR68;
        VAR15->VAR37 = VAR12->VAR15.VAR60 + VAR12->VAR15.VAR61 * VAR12->VAR15.VAR67 - VAR12->VAR18.VAR28;
        if (VAR19 + 1 < VAR20)
        {
            if (FUN2(VAR2, VAR21, VAR19 + 1) < 0 || FUN2(VAR2, VAR21, VAR19 + 1) > VAR9)
            {
                FUN3(VAR2, VAR26, "");
                break;
            }
            FUN4(&VAR15->VAR27, VAR8 + FUN2(VAR2, VAR21, VAR19 + 1), (VAR9 - FUN2(VAR2, VAR21, VAR19 + 1)) * 8);
            if (VAR12->FUN5(VAR12, &VAR12->VAR15.VAR27, &VAR18) < 0)
            {
                if (VAR19 + 2 < VAR20)
                    VAR10 = FUN2(VAR2, VAR21, VAR19 + 2) - VAR65;
                else
                    VAR10 = VAR9 - VAR65;
            }
            else
                VAR12->VAR18.VAR66 = VAR18.VAR28;
        }
        if (VAR10 < 0 || VAR10 > VAR9 - VAR65)
        {
            FUN3(VAR2, VAR26, "");
            break;
        }
        VAR22 = FUN16(VAR12, VAR12->VAR18.VAR66, VAR8 + VAR65, VAR10);
        if (VAR22)
            break;
    }
    if (VAR15->VAR69)
    {
        if (VAR22)
        {
            if (VAR12->VAR70)
                VAR12->FUN17(VAR12, VAR15->VAR68 - 1);
            *VAR4 = FUN18(VAR2, VAR17);
        }
        else if (VAR62 && (VAR15->VAR2->VAR63 & VAR64))
        {
            FUN3(VAR2, VAR71, "");
            FUN6(VAR15);
            FUN7(VAR15);
            VAR15->VAR37 = 0;
            FUN19(&VAR15->VAR69->VAR25, VAR72, 0);
        }
    }
    return VAR6->VAR10;