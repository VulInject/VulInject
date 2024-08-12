int FUN1(VAR1 *VAR2, void *VAR3, int *VAR4, VAR5 *VAR6)
{
    const VAR7 *VAR8 = VAR6->VAR3;
    int VAR9 = VAR6->VAR10;
    VAR11 *VAR12 = VAR2->VAR13;
    VAR14 *VAR15 = &VAR12->VAR15;
    VAR16 *VAR17 = VAR3;
    SliceInfo VAR18;
    int VAR19, VAR20;
    int VAR21;
    const VAR7 *VAR22 = NULL;
    int VAR23 = 0;
    if (VAR9 == 0)
    {
        if (VAR15->VAR24 == 0 && VAR15->VAR25)
        {
            if ((VAR20 = FUN2(VAR17, &VAR15->VAR25->VAR26)) < 0)
                return VAR20;
            VAR15->VAR25 = NULL;
            *VAR4 = 1;
        }
        return 0;
    }
    if (!VAR2->VAR21)
    {
        VAR21 = (*VAR8++) + 1;
        VAR22 = VAR8 + 4;
        VAR8 += 8 * VAR21;
        VAR9 -= 1 + 8 * VAR21;
    }
    else
        VAR21 = VAR2->VAR21;
    if (FUN3(VAR2, VAR22, 0) < 0 || FUN3(VAR2, VAR22, 0) > VAR9)
    {
        FUN4(VAR2, VAR27, "");
        return VAR28;
    }
    FUN5(&VAR15->VAR29, VAR8 + FUN3(VAR2, VAR22, 0), (VAR9 - FUN3(VAR2, VAR22, 0)) * 8);
    if (VAR12->FUN6(VAR12, &VAR12->VAR15.VAR29, &VAR18) < 0 || VAR18.VAR30)
    {
        FUN4(VAR2, VAR27, "");
        return VAR28;
    }
    if ((!VAR15->VAR31 || !VAR15->VAR31->VAR26.VAR3[0]) && VAR18.VAR32 == VAR33)
    {
        FUN4(VAR2, VAR27, ""
                                    "");
        return VAR28;
    }
    if ((VAR2->VAR34 >= VAR35 && VAR18.VAR32 == VAR33) || (VAR2->VAR34 >= VAR36 && VAR18.VAR32 != VAR37) || VAR2->VAR34 >= VAR38)
        return VAR6->VAR10;
    if (VAR18.VAR30 == 0)
    {
        if (VAR15->VAR39 > 0)
        {
            FUN4(VAR2, VAR27, "", VAR15->VAR39);
            FUN7(&VAR15->VAR40);
            FUN8(VAR15);
        }
        if (VAR15->VAR41 != VAR18.VAR41 || VAR15->VAR42 != VAR18.VAR42)
        {
            int VAR43;
            FUN4(VAR15->VAR2, VAR44, "", VAR18.VAR41, VAR18.VAR42);
            VAR15->VAR41 = VAR18.VAR41;
            VAR15->VAR42 = VAR18.VAR42;
            VAR43 = FUN9(VAR15->VAR2, VAR15->VAR41, VAR15->VAR42);
            if (VAR43 < 0)
                return VAR43;
            if ((VAR43 = FUN10(VAR15)) < 0)
                return VAR43;
            if ((VAR43 = FUN11(VAR12)) < 0)
                return VAR43;
        }
        VAR15->VAR45 = VAR18.VAR32 ? VAR18.VAR32 : VAR37;
        if (FUN12(VAR15, VAR15->VAR2) < 0)
            return -1;
        FUN13(VAR15);
        if (!VAR12->VAR46)
        {
            int VAR19;
            VAR12->VAR46 = FUN14(VAR15->VAR47 * 48);
            for (VAR19 = 0; VAR19 < 2; VAR19++)
                VAR12->VAR48[VAR19] = VAR12->VAR46 + VAR19 * 16 * VAR15->VAR47;
            for (VAR19 = 0; VAR19 < 4; VAR19++)
                VAR12->VAR49[VAR19] = VAR12->VAR46 + 32 * VAR15->VAR47 + (VAR19 >> 1) * 8 * VAR15->VAR50 + (VAR19 & 1) * 16;
        }
        VAR12->VAR51 = VAR18.VAR52;
        if (VAR15->VAR45 != VAR33)
        {
            VAR12->VAR53 = VAR12->VAR54;
            VAR12->VAR54 = VAR12->VAR51;
        }
        else
        {
            int VAR55 = FUN15(VAR12->VAR54, VAR12->VAR53);
            int VAR56 = FUN15(VAR12->VAR51, VAR12->VAR53);
            int VAR57 = FUN15(VAR12->VAR54, VAR12->VAR51);
            if (!VAR55)
            {
                VAR12->VAR58 = VAR12->VAR59 = VAR12->VAR60 = VAR12->VAR61 = 8192;
                VAR12->VAR62 = 0;
            }
            else
            {
                VAR12->VAR58 = (VAR56 << 14) / VAR55;
                VAR12->VAR59 = (VAR57 << 14) / VAR55;
                if ((VAR12->VAR58 | VAR12->VAR59) & 511)
                {
                    VAR12->VAR60 = VAR12->VAR58;
                    VAR12->VAR61 = VAR12->VAR59;
                    VAR12->VAR62 = 0;
                }
                else
                {
                    VAR12->VAR60 = VAR12->VAR58 >> 9;
                    VAR12->VAR61 = VAR12->VAR59 >> 9;
                    VAR12->VAR62 = 1;
                }
            }
        }
        VAR15->VAR63 = VAR15->VAR64 = 0;
        FUN16(VAR15->VAR2);
    }
    else if (VAR65 && (VAR15->VAR2->VAR66 & VAR67))
    {
        FUN4(VAR15->VAR2, VAR27, ""
                                       "",
               VAR18.VAR30);
        return VAR28;
    }
    for (VAR19 = 0; VAR19 < VAR21; VAR19++)
    {
        int VAR68 = FUN3(VAR2, VAR22, VAR19);
        int VAR10;
        if (VAR19 + 1 == VAR21)
            VAR10 = VAR9 - VAR68;
        else
            VAR10 = FUN3(VAR2, VAR22, VAR19 + 1) - VAR68;
        if (VAR68 < 0 || VAR68 > VAR9)
        {
            FUN4(VAR2, VAR27, "");
            break;
        }
        VAR12->VAR18.VAR69 = VAR15->VAR70 * VAR15->VAR71;
        VAR15->VAR39 = VAR12->VAR15.VAR63 + VAR12->VAR15.VAR64 * VAR12->VAR15.VAR70 - VAR12->VAR18.VAR30;
        if (VAR19 + 1 < VAR21)
        {
            if (FUN3(VAR2, VAR22, VAR19 + 1) < 0 || FUN3(VAR2, VAR22, VAR19 + 1) > VAR9)
            {
                FUN4(VAR2, VAR27, "");
                break;
            }
            FUN5(&VAR15->VAR29, VAR8 + FUN3(VAR2, VAR22, VAR19 + 1), (VAR9 - FUN3(VAR2, VAR22, VAR19 + 1)) * 8);
            if (VAR12->FUN6(VAR12, &VAR12->VAR15.VAR29, &VAR18) < 0)
            {
                if (VAR19 + 2 < VAR21)
                    VAR10 = FUN3(VAR2, VAR22, VAR19 + 2) - VAR68;
                else
                    VAR10 = VAR9 - VAR68;
            }
            else
                VAR12->VAR18.VAR69 = VAR18.VAR30;
        }
        if (VAR10 < 0 || VAR10 > VAR9 - VAR68)
        {
            FUN4(VAR2, VAR27, "");
            break;
        }
        VAR23 = FUN17(VAR12, VAR12->VAR18.VAR69, VAR8 + VAR68, VAR10);
        if (VAR23)
            break;
    }
    if (VAR15->VAR72)
    {
        if (VAR23)
        {
            if (VAR12->VAR73)
                VAR12->FUN18(VAR12, VAR15->VAR71 - 1);
            VAR20 = FUN19(VAR2, VAR17);
            if (VAR20 < 0)
                return VAR20;
            *VAR4 = VAR20;
        }
        else if (VAR65 && (VAR15->VAR2->VAR66 & VAR67))
        {
            FUN4(VAR2, VAR74, "");
            FUN7(&VAR15->VAR40);
            FUN8(VAR15);
            VAR15->VAR39 = 0;
            FUN20(&VAR15->VAR72->VAR75, VAR76, 0);
            return VAR28;
        }
    }
    return VAR6->VAR10;
}