static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 **VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9;
    VAR10 *VAR11 = VAR8->VAR11;
    const int VAR12 = VAR8->VAR13 != VAR14;
    const int VAR15 = VAR8->VAR11->VAR15;
    VAR8->VAR16 = VAR8->VAR17 = -1;
    assert(VAR3 < VAR8->VAR18);
    FUN2(&VAR8->VAR19, *VAR5, VAR6 * 8);
    FUN3(VAR8);
    VAR8->VAR20 = 0;
    VAR8->VAR21 = FUN4(VAR8);
    if (VAR8->VAR21 == 0)
    {
        FUN5(VAR8->VAR11, VAR22, "");
        return -1;
    }
    while (FUN6(&VAR8->VAR19) != 0)
    {
        FUN7(&VAR8->VAR19, 8);
    }
    VAR8->VAR23 = 0;
    for (;;)
    {
        int VAR24 = FUN8(&VAR8->VAR19, VAR25.VAR26, VAR27, 2);
        if (VAR24 < 0)
        {
            FUN5(VAR8->VAR11, VAR22, "");
            return -1;
        }
        if (VAR24 >= 33)
        {
            if (VAR24 == 33)
            {
                VAR8->VAR23 += 33;
            }
        }
        else
        {
            VAR8->VAR23 += VAR24;
            break;
        }
    }
    if (VAR8->VAR23 >= (unsigned)VAR8->VAR28)
    {
        FUN5(VAR8->VAR11, VAR22, "");
        return -1;
    }
    if (VAR11->VAR29)
    {
        const VAR4 *VAR30, *VAR31 = *VAR5 - 4;
        int VAR32 = -1;
        VAR30 = FUN9(VAR31 + 2, *VAR5 + VAR6, &VAR32);
        if (VAR30 < *VAR5 + VAR6)
            VAR30 -= 4;
        VAR8->VAR3 = VAR3;
        if (VAR11->VAR29->FUN10(VAR11, VAR31, VAR30 - VAR31) < 0)
            return VAR33;
        *VAR5 = VAR30;
        return VAR34;
    }
    VAR8->VAR16 = VAR8->VAR23;
    VAR8->VAR17 = VAR8->VAR3 = VAR3;
    VAR8->VAR35 = 0;
    FUN11(VAR8);
    if (VAR8->VAR3 == 0 && VAR8->VAR23 == 0 && (VAR8->VAR36 || VAR8->VAR13 == VAR14))
    {
        if (VAR8->VAR11->VAR37 & VAR38)
        {
            FUN5(VAR8->VAR11, VAR39, "", VAR8->VAR21, VAR8->VAR40[0][0], VAR8->VAR40[0][1], VAR8->VAR40[1][0], VAR8->VAR40[1][1], VAR8->VAR41 == VAR42 ? "" : (VAR8->VAR41 == VAR43 ? "" : (VAR8->VAR41 == VAR44 ? "" : "")), VAR8->VAR45 ? "" : "", VAR8->VAR46 ? "" : "", VAR8->VAR47 ? "" : "", VAR8->VAR48 ? "" : "", VAR8->VAR49, VAR8->VAR13, VAR8->VAR50, VAR8->VAR51, VAR8->VAR52, VAR8->VAR53, VAR8->VAR54, VAR8->VAR55 ? "" : "");
        }
    }
    for (;;)
    {
        if (VAR56 && VAR8->VAR11->VAR57 > 1)
            FUN12(VAR8);
        if (FUN13(VAR8, VAR8->VAR58) < 0)
            return -1;
        if (VAR8->VAR59.VAR60[0] && !VAR8->VAR61)
        {
            const int VAR62 = VAR8->VAR63;
            int VAR64 = VAR8->VAR23 * 2 + VAR8->VAR3 * 2 * VAR62;
            int VAR65, VAR66, VAR67, VAR68;
            for (VAR68 = 0; VAR68 < 2; VAR68++)
            {
                for (VAR67 = 0; VAR67 < 2; VAR67++)
                {
                    if (VAR8->VAR69 || (VAR67 == 1 && VAR8->VAR41 != VAR44))
                    {
                        VAR65 = VAR66 = 0;
                    }
                    else if (VAR8->VAR70 == VAR71 || (VAR8->VAR70 == VAR72 && VAR12))
                    {
                        VAR65 = VAR8->VAR73[VAR67][0][0];
                        VAR66 = VAR8->VAR73[VAR67][0][1];
                    }
                    else
                    {
                        VAR65 = VAR8->VAR73[VAR67][VAR68][0];
                        VAR66 = VAR8->VAR73[VAR67][VAR68][1];
                    }
                    VAR8->VAR59.VAR60[VAR67][VAR64][0] = VAR65;
                    VAR8->VAR59.VAR60[VAR67][VAR64][1] = VAR66;
                    VAR8->VAR59.VAR60[VAR67][VAR64 + 1][0] = VAR65;
                    VAR8->VAR59.VAR60[VAR67][VAR64 + 1][1] = VAR66;
                    VAR8->VAR59.VAR74[VAR67][VAR64] = VAR8->VAR59.VAR74[VAR67][VAR64 + 1] = VAR8->VAR75[VAR67][VAR68];
                    assert(VAR8->VAR75[VAR67][VAR68] == 0 || VAR8->VAR75[VAR67][VAR68] == 1);
                }
                VAR64 += VAR62;
            }
        }
        VAR8->VAR76[0] += 16 >> VAR15;
        VAR8->VAR76[1] += (16 >> VAR15) >> VAR8->VAR77;
        VAR8->VAR76[2] += (16 >> VAR15) >> VAR8->VAR77;
        FUN14(VAR8, VAR8->VAR58);
        if (++VAR8->VAR23 >= VAR8->VAR28)
        {
            const int VAR78 = 16 >> VAR8->VAR11->VAR15;
            FUN15(VAR8, VAR78 * (VAR8->VAR3 >> VAR12), VAR78);
            VAR8->VAR23 = 0;
            VAR8->VAR3 += 1 << VAR12;
            if (VAR8->VAR3 >= VAR8->VAR18)
            {
                int VAR79 = FUN16(&VAR8->VAR19);
                int VAR80 = VAR8->VAR81 == 2 && VAR8->VAR41 == VAR42 && VAR11->VAR82 == 0 && VAR11->VAR83 == 5 && VAR8->VAR49 == 2 && VAR8->VAR52 == 1 && VAR8->VAR47 == 0 && VAR8->VAR46 == 0;
                if (VAR79 < 0 || (VAR79 && FUN17(&VAR8->VAR19, FUN18(VAR79, 23)) && !VAR80) || (VAR11->VAR84 >= VAR85 && VAR79 > 8))
                {
                    FUN5(VAR11, VAR22, "", VAR79, FUN17(&VAR8->VAR19, FUN18(VAR79, 23)));
                    return -1;
                }
                else
                    goto VAR86;
            }
            FUN11(VAR8);
        }
        if (VAR8->VAR35 == -1)
        {
            VAR8->VAR35 = 0;
            for (;;)
            {
                int VAR24 = FUN8(&VAR8->VAR19, VAR25.VAR26, VAR27, 2);
                if (VAR24 < 0)
                {
                    FUN5(VAR8->VAR11, VAR22, "");
                    return -1;
                }
                if (VAR24 >= 33)
                {
                    if (VAR24 == 33)
                    {
                        VAR8->VAR35 += 33;
                    }
                    else if (VAR24 == 35)
                    {
                        if (VAR8->VAR35 != 0 || FUN17(&VAR8->VAR19, 15) != 0)
                        {
                            FUN5(VAR8->VAR11, VAR22, "");
                            return -1;
                        }
                        goto VAR86;
                    }
                }
                else
                {
                    VAR8->VAR35 += VAR24;
                    break;
                }
            }
            if (VAR8->VAR35)
            {
                int VAR68;
                if (VAR8->VAR41 == VAR42)
                {
                    FUN5(VAR8->VAR11, VAR22, "", VAR8->VAR23, VAR8->VAR3);
                    return -1;
                }
                VAR8->VAR69 = 0;
                for (VAR68 = 0; VAR68 < 12; VAR68++)
                    VAR8->VAR87[VAR68] = -1;
                if (VAR8->VAR13 == VAR14)
                    VAR8->VAR70 = VAR71;
                else
                    VAR8->VAR70 = VAR72;
                if (VAR8->VAR41 == VAR43)
                {
                    VAR8->VAR88 = VAR89;
                    VAR8->VAR73[0][0][0] = VAR8->VAR73[0][0][1] = 0;
                    VAR8->VAR90[0][0][0] = VAR8->VAR90[0][0][1] = 0;
                    VAR8->VAR90[0][1][0] = VAR8->VAR90[0][1][1] = 0;
                    VAR8->VAR75[0][0] = (VAR8->VAR13 - 1) & 1;
                }
                else
                {
                    VAR8->VAR73[0][0][0] = VAR8->VAR90[0][0][0];
                    VAR8->VAR73[0][0][1] = VAR8->VAR90[0][0][1];
                    VAR8->VAR73[1][0][0] = VAR8->VAR90[1][0][0];
                    VAR8->VAR73[1][0][1] = VAR8->VAR90[1][0][1];
                }
            }
        }
    }
VAR86:
    *VAR5 += (FUN19(&VAR8->VAR19) - 1) / 8;
    return 0;
}