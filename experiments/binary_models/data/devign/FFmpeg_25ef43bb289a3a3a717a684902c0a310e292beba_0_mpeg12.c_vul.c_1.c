static int FUN1(VAR1 *VAR2, int VAR3, const VAR4 **VAR5, int VAR6)
{
    VAR7 *VAR8 = &VAR2->VAR9;
    VAR10 *VAR11 = VAR8->VAR11;
    int VAR12;
    const int VAR13 = VAR8->VAR14 != VAR15;
    VAR8->VAR16 = VAR8->VAR17 = -1;
    if (VAR3 >= VAR8->VAR18)
    {
        FUN2(VAR8->VAR11, VAR19, "", VAR8->VAR3, VAR8->VAR18);
        return -1;
    }
    FUN3(&VAR8->VAR20, *VAR5, VAR6 * 8);
    FUN4(VAR8);
    VAR8->VAR21 = 0;
    VAR8->VAR22 = FUN5(VAR8);
    if (VAR8->VAR22 == 0)
    {
        FUN2(VAR8->VAR11, VAR19, "");
        return -1;
    }
    while (FUN6(&VAR8->VAR20) != 0)
    {
        FUN7(&VAR8->VAR20, 8);
    }
    VAR8->VAR23 = 0;
    for (;;)
    {
        int VAR24 = FUN8(&VAR8->VAR20, VAR25.VAR26, VAR27, 2);
        if (VAR24 < 0)
        {
            FUN2(VAR8->VAR11, VAR19, "");
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
    VAR8->VAR16 = VAR8->VAR23;
    VAR8->VAR17 = VAR8->VAR3 = VAR3;
    VAR8->VAR28 = 0;
    FUN9(VAR8);
    if (VAR8->VAR3 == 0 && VAR8->VAR23 == 0 && (VAR8->VAR29 || VAR8->VAR14 == VAR15))
    {
        if (VAR8->VAR11->VAR30 & VAR31)
        {
            FUN2(VAR8->VAR11, VAR32, "", VAR8->VAR22, VAR8->VAR33[0][0], VAR8->VAR33[0][1], VAR8->VAR33[1][0], VAR8->VAR33[1][1], VAR8->VAR34 == VAR35 ? "" : (VAR8->VAR34 == VAR36 ? "" : (VAR8->VAR34 == VAR37 ? "" : "")), VAR8->VAR38 ? "" : "", VAR8->VAR39 ? "" : "", VAR8->VAR40 ? "" : "", VAR8->VAR41 ? "" : "", VAR8->VAR42, VAR8->VAR14, VAR8->VAR43, VAR8->VAR44, VAR8->VAR45, VAR8->VAR46, VAR8->VAR47, VAR8->VAR48 ? "" : "");
        }
    }
    for (;;)
    {
        if (VAR8->VAR11->VAR49 > 1)
            FUN10(VAR8);
        VAR8->VAR50.FUN11(VAR8->VAR51[0]);
        VAR12 = FUN12(VAR8, VAR8->VAR51);
        VAR8->VAR52 = VAR8->VAR22;
        FUN13("", VAR12);
        if (VAR12 < 0)
            return -1;
        if (VAR8->VAR53.VAR54[0] && !VAR8->VAR55)
        {
            const int VAR56 = VAR13 ? 2 * VAR8->VAR57 : VAR8->VAR57;
            int VAR58 = VAR8->VAR23 * 2 + VAR8->VAR3 * 2 * VAR56;
            int VAR59, VAR60, VAR61, VAR62;
            if (VAR13 && !VAR8->VAR29)
                VAR58 += VAR56 / 2;
            for (VAR62 = 0; VAR62 < 2; VAR62++)
            {
                for (VAR61 = 0; VAR61 < 2; VAR61++)
                {
                    if (VAR8->VAR63 || (VAR61 == 1 && VAR8->VAR34 != VAR37))
                    {
                        VAR59 = VAR60 = 0;
                    }
                    else if (VAR8->VAR64 == VAR65 || (VAR8->VAR64 == VAR66 && VAR13))
                    {
                        VAR59 = VAR8->VAR67[VAR61][0][0];
                        VAR60 = VAR8->VAR67[VAR61][0][1];
                    }
                    else
                    {
                        VAR59 = VAR8->VAR67[VAR61][VAR62][0];
                        VAR60 = VAR8->VAR67[VAR61][VAR62][1];
                    }
                    VAR8->VAR53.VAR54[VAR61][VAR58][0] = VAR59;
                    VAR8->VAR53.VAR54[VAR61][VAR58][1] = VAR60;
                    VAR8->VAR53.VAR54[VAR61][VAR58 + 1][0] = VAR59;
                    VAR8->VAR53.VAR54[VAR61][VAR58 + 1][1] = VAR60;
                    VAR8->VAR53.VAR68[VAR61][VAR58] = VAR8->VAR53.VAR68[VAR61][VAR58 + 1] = VAR8->VAR69[VAR61][VAR62];
                }
                VAR58 += VAR56;
            }
        }
        VAR8->VAR70[0] += 16;
        VAR8->VAR70[1] += 8;
        VAR8->VAR70[2] += 8;
        FUN14(VAR8, VAR8->VAR51);
        if (++VAR8->VAR23 >= VAR8->VAR71)
        {
            FUN15(VAR8, 16 * VAR8->VAR3, 16);
            VAR8->VAR23 = 0;
            VAR8->VAR3++;
            if (VAR8->VAR3 << VAR13 >= VAR8->VAR18)
            {
                int VAR72 = VAR8->VAR20.VAR73 - FUN16(&VAR8->VAR20);
                if (VAR72 < 0 || (VAR72 && FUN17(&VAR8->VAR20, FUN18(VAR72, 23))) || (VAR11->VAR74 >= VAR75 && VAR72 > 8))
                {
                    FUN2(VAR11, VAR19, "", VAR72);
                    return -1;
                }
                else
                    goto VAR76;
            }
            FUN9(VAR8);
        }
        if (VAR8->VAR28 == -1)
        {
            VAR8->VAR28 = 0;
            for (;;)
            {
                int VAR24 = FUN8(&VAR8->VAR20, VAR25.VAR26, VAR27, 2);
                if (VAR24 < 0)
                {
                    FUN2(VAR8->VAR11, VAR19, "");
                    return -1;
                }
                if (VAR24 >= 33)
                {
                    if (VAR24 == 33)
                    {
                        VAR8->VAR28 += 33;
                    }
                    else if (VAR24 == 35)
                    {
                        if (VAR8->VAR28 != 0 || FUN17(&VAR8->VAR20, 15) != 0)
                        {
                            FUN2(VAR8->VAR11, VAR19, "");
                            return -1;
                        }
                        goto VAR76;
                    }
                }
                else
                {
                    VAR8->VAR28 += VAR24;
                    break;
                }
            }
        }
    }
VAR76:
    *VAR5 += FUN16(&VAR8->VAR20) / 8 - 1;
    return 0;
}