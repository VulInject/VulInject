static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 **VAR5, int VAR6)
{
    VAR7 *VAR8 = VAR2->VAR8;
    const int VAR9 = VAR2->VAR10 != VAR11;
    int VAR12;
    VAR2->VAR13 = VAR2->VAR14 = -1;
    assert(VAR3 < VAR2->VAR15);
    FUN2(&VAR2->VAR16, *VAR5, VAR6 * 8);
    FUN3(VAR2);
    VAR2->VAR17 = 0;
    VAR2->VAR18 = FUN4(VAR2);
    if (VAR2->VAR18 == 0)
    {
        FUN5(VAR2->VAR8, VAR19, "");
        return VAR20;
    }
    while (FUN6(&VAR2->VAR16) != 0)
        FUN7(&VAR2->VAR16, 8);
    VAR2->VAR21 = 0;
    if (VAR3 == 0 && VAR2->VAR22 == FUN8(""))
    {
        FUN9(&VAR2->VAR16);
    }
    else
    {
        while (FUN10(&VAR2->VAR16) > 0)
        {
            int VAR23 = FUN11(&VAR2->VAR16, VAR24.VAR25, VAR26, 2);
            if (VAR23 < 0)
            {
                FUN5(VAR2->VAR8, VAR19, "");
                return VAR20;
            }
            if (VAR23 >= 33)
            {
                if (VAR23 == 33)
                    VAR2->VAR21 += 33;
            }
            else
            {
                VAR2->VAR21 += VAR23;
                break;
            }
        }
    }
    if (VAR2->VAR21 >= (unsigned)VAR2->VAR27)
    {
        FUN5(VAR2->VAR8, VAR19, "");
        return VAR20;
    }
    if (VAR8->VAR28)
    {
        const VAR4 *VAR29, *VAR30 = *VAR5 - 4;
        int VAR31 = -1;
        VAR29 = FUN12(VAR30 + 2, *VAR5 + VAR6, &VAR31);
        if (VAR29 < *VAR5 + VAR6)
            VAR29 -= 4;
        VAR2->VAR3 = VAR3;
        if (VAR8->VAR28->FUN13(VAR8, VAR30, VAR29 - VAR30) < 0)
            return VAR32;
        *VAR5 = VAR29;
        return VAR33;
    }
    VAR2->VAR13 = VAR2->VAR21;
    VAR2->VAR14 = VAR2->VAR3 = VAR3;
    VAR2->VAR34 = 0;
    FUN14(VAR2);
    if (VAR2->VAR3 == 0 && VAR2->VAR21 == 0 && (VAR2->VAR35 || VAR2->VAR10 == VAR11))
    {
        if (VAR2->VAR8->VAR36 & VAR37)
        {
            FUN5(VAR2->VAR8, VAR38, "", VAR2->VAR18, VAR2->VAR39[0][0], VAR2->VAR39[0][1], VAR2->VAR39[1][0], VAR2->VAR39[1][1], VAR2->VAR40 == VAR41 ? "" : (VAR2->VAR40 == VAR42 ? "" : (VAR2->VAR40 == VAR43 ? "" : "")), VAR2->VAR44 ? "" : "", VAR2->VAR45 ? "" : "", VAR2->VAR46 ? "" : "", VAR2->VAR47 ? "" : "", VAR2->VAR48, VAR2->VAR10, VAR2->VAR49, VAR2->VAR50, VAR2->VAR51, VAR2->VAR52, VAR2->VAR53, VAR2->VAR54 ? "" : "");
        }
    }
    for (;;)
    {
        if ((VAR12 = FUN15(VAR2, VAR2->VAR55)) < 0)
            return VAR12;
        if (VAR2->VAR56.VAR57[0] && !VAR2->VAR58)
        {
            const int VAR59 = VAR2->VAR60;
            int VAR61 = VAR2->VAR21 * 2 + VAR2->VAR3 * 2 * VAR59;
            int VAR62 = 4 * (VAR2->VAR21 + VAR2->VAR3 * VAR2->VAR63);
            int VAR64, VAR65, VAR66, VAR67;
            for (VAR67 = 0; VAR67 < 2; VAR67++)
            {
                for (VAR66 = 0; VAR66 < 2; VAR66++)
                {
                    if (VAR2->VAR68 || (VAR66 == 1 && VAR2->VAR40 != VAR43))
                    {
                        VAR64 = VAR65 = 0;
                    }
                    else if (VAR2->VAR69 == VAR70 || (VAR2->VAR69 == VAR71 && VAR9))
                    {
                        VAR64 = VAR2->VAR72[VAR66][0][0];
                        VAR65 = VAR2->VAR72[VAR66][0][1];
                    }
                    else
                    {
                        VAR64 = VAR2->VAR72[VAR66][VAR67][0];
                        VAR65 = VAR2->VAR72[VAR66][VAR67][1];
                    }
                    VAR2->VAR56.VAR57[VAR66][VAR61][0] = VAR64;
                    VAR2->VAR56.VAR57[VAR66][VAR61][1] = VAR65;
                    VAR2->VAR56.VAR57[VAR66][VAR61 + 1][0] = VAR64;
                    VAR2->VAR56.VAR57[VAR66][VAR61 + 1][1] = VAR65;
                    VAR2->VAR56.VAR73[VAR66][VAR62] = VAR2->VAR56.VAR73[VAR66][VAR62 + 1] = VAR2->VAR74[VAR66][VAR67];
                    assert(VAR2->VAR74[VAR66][VAR67] == 0 || VAR2->VAR74[VAR66][VAR67] == 1);
                }
                VAR61 += VAR59;
                VAR62 += 2;
            }
        }
        VAR2->VAR75[0] += 16;
        VAR2->VAR75[1] += 16 >> VAR2->VAR76;
        VAR2->VAR75[2] += 16 >> VAR2->VAR76;
        FUN16(VAR2, VAR2->VAR55);
        if (++VAR2->VAR21 >= VAR2->VAR27)
        {
            const int VAR77 = 16;
            FUN17(VAR2, VAR77 * (VAR2->VAR3 >> VAR9), VAR77);
            FUN18(VAR2);
            VAR2->VAR21 = 0;
            VAR2->VAR3 += 1 << VAR9;
            if (VAR2->VAR3 >= VAR2->VAR15)
            {
                int VAR78 = FUN10(&VAR2->VAR16);
                int VAR79 = VAR2->VAR80 == 2 && VAR2->VAR40 == VAR41 && VAR8->VAR81 == 0 && VAR8->VAR82 == 5 && VAR2->VAR48 == 2 && VAR2->VAR51 == 1 && VAR2->VAR46 == 0 && VAR2->VAR45 == 0;
                if (VAR78 < 0 || (VAR78 && FUN19(&VAR2->VAR16, FUN20(VAR78, 23)) && !VAR79) || ((VAR8->VAR83 & VAR84) && VAR78 > 8))
                {
                    FUN5(VAR8, VAR19, "", VAR78, FUN19(&VAR2->VAR16, FUN20(VAR78, 23)));
                    return VAR20;
                }
                else
                    goto VAR85;
            }
            FUN14(VAR2);
        }
        if (VAR2->VAR34 == -1)
        {
            VAR2->VAR34 = 0;
            for (;;)
            {
                int VAR23 = FUN11(&VAR2->VAR16, VAR24.VAR25, VAR26, 2);
                if (VAR23 < 0)
                {
                    FUN5(VAR2->VAR8, VAR19, "");
                    return VAR20;
                }
                if (VAR23 >= 33)
                {
                    if (VAR23 == 33)
                    {
                        VAR2->VAR34 += 33;
                    }
                    else if (VAR23 == 35)
                    {
                        if (VAR2->VAR34 != 0 || FUN19(&VAR2->VAR16, 15) != 0)
                        {
                            FUN5(VAR2->VAR8, VAR19, "");
                            return VAR20;
                        }
                        goto VAR85;
                    }
                }
                else
                {
                    VAR2->VAR34 += VAR23;
                    break;
                }
            }
            if (VAR2->VAR34)
            {
                int VAR67;
                if (VAR2->VAR40 == VAR41)
                {
                    FUN5(VAR2->VAR8, VAR19, "", VAR2->VAR21, VAR2->VAR3);
                    return VAR20;
                }
                VAR2->VAR68 = 0;
                for (VAR67 = 0; VAR67 < 12; VAR67++)
                    VAR2->VAR86[VAR67] = -1;
                if (VAR2->VAR10 == VAR11)
                    VAR2->VAR69 = VAR70;
                else
                    VAR2->VAR69 = VAR71;
                if (VAR2->VAR40 == VAR42)
                {
                    VAR2->VAR87 = VAR88;
                    VAR2->VAR72[0][0][0] = VAR2->VAR72[0][0][1] = 0;
                    VAR2->VAR89[0][0][0] = VAR2->VAR89[0][0][1] = 0;
                    VAR2->VAR89[0][1][0] = VAR2->VAR89[0][1][1] = 0;
                    VAR2->VAR74[0][0] = (VAR2->VAR10 - 1) & 1;
                }
                else
                {
                    VAR2->VAR72[0][0][0] = VAR2->VAR89[0][0][0];
                    VAR2->VAR72[0][0][1] = VAR2->VAR89[0][0][1];
                    VAR2->VAR72[1][0][0] = VAR2->VAR89[1][0][0];
                    VAR2->VAR72[1][0][1] = VAR2->VAR89[1][0][1];
                }
            }
        }
    }
VAR85:
    *VAR5 += (FUN21(&VAR2->VAR16) - 1) / 8;
    FUN22(VAR2, "", VAR2->VAR13, VAR2->VAR14, VAR2->VAR21, VAR2->VAR3);
    return 0;
}