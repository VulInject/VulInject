static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, VAR12 *VAR13, int VAR14)
{
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    if (FUN2(&VAR2->VAR20) == 0 && VAR2->VAR21 == 8)
    {
        if (*VAR5 < FUN3(VAR4->VAR22) - 1)
        {
            VAR2->VAR20 = VAR4->VAR22[++(*VAR5)].VAR23;
        }
    }
    if (FUN4(&VAR2->VAR20) == VAR24)
        FUN5(&VAR2->VAR20, VAR25);
    if (!(VAR17 = FUN6(VAR2, 1)))
    {
        FUN7(VAR2);
        return 0;
    }
    else if (VAR17 < 0)
        return VAR17;
    for (VAR15 = 0; VAR15 < VAR9->VAR26; VAR15++)
    {
        VAR27 *VAR28 = VAR9->VAR28 + VAR15;
        VAR29 *VAR30 = VAR28->VAR30 + VAR10;
        if (VAR28->VAR31[0][0] == VAR28->VAR31[0][1] || VAR28->VAR31[1][0] == VAR28->VAR31[1][1])
            continue;
        VAR18 = VAR30->VAR32 * VAR30->VAR33;
        for (VAR16 = 0; VAR16 < VAR18; VAR16++)
        {
            VAR34 *VAR35 = VAR30->VAR35 + VAR16;
            int VAR36, VAR37, VAR38;
            if (VAR35->VAR39)
                VAR36 = FUN6(VAR2, 1);
            else
                VAR36 = FUN8(VAR2, VAR30->VAR40 + VAR16, VAR11 + 1) == VAR11;
            if (!VAR36)
                continue;
            else if (VAR36 < 0)
                return VAR36;
            if (!VAR35->VAR39)
            {
                int VAR41 = VAR13[VAR15] + VAR14 - 1 - FUN8(VAR2, VAR30->VAR42 + VAR16, 100);
                if (VAR41 < 0)
                {
                    FUN9(VAR2->VAR43, VAR44, "", VAR41);
                    return VAR45;
                }
                VAR35->VAR46 = VAR41;
            }
            if ((VAR37 = FUN10(VAR2)) < 0)
                return VAR37;
            FUN11(VAR37 > 0);
            if (VAR35->VAR39 + VAR37 >= VAR47)
            {
                FUN12(VAR2->VAR43, "");
                return VAR48;
            }
            if ((VAR38 = FUN13(VAR2)) < 0)
                return VAR38;
            if (VAR35->VAR49 + VAR38 + FUN14(VAR37) > 16)
            {
                FUN12(VAR2->VAR43, "");
                return VAR48;
            }
            VAR35->VAR49 += VAR38;
            VAR35->VAR50 = 0;
            VAR35->VAR51 = 0;
            do
            {
                int VAR52 = 0;
                while (VAR52 < VAR37)
                {
                    VAR52++;
                    if (FUN15(VAR7->VAR53, VAR35->VAR39 + VAR52 - 1))
                    {
                        VAR35->VAR51++;
                        break;
                    }
                }
                if ((VAR17 = FUN6(VAR2, FUN14(VAR52) + VAR35->VAR49)) < 0)
                    return VAR17;
                if (VAR17 > sizeof(VAR35->VAR54))
                {
                    FUN12(VAR2->VAR43, "" VAR55 "", sizeof(VAR35->VAR54));
                    return VAR48;
                }
                VAR35->VAR56[VAR35->VAR50++] = VAR17;
                VAR35->VAR39 += VAR52;
                VAR37 -= VAR52;
            } while (VAR37);
        }
    }
    FUN7(VAR2);
    if (VAR7->VAR57 & VAR58)
    {
        if (FUN16(&VAR2->VAR20) == VAR59)
            FUN5(&VAR2->VAR20, 2);
        else
            FUN9(VAR2->VAR43, VAR44, "");
    }
    for (VAR15 = 0; VAR15 < VAR9->VAR26; VAR15++)
    {
        VAR27 *VAR28 = VAR9->VAR28 + VAR15;
        VAR29 *VAR30 = VAR28->VAR30 + VAR10;
        VAR18 = VAR30->VAR32 * VAR30->VAR33;
        for (VAR16 = 0; VAR16 < VAR18; VAR16++)
        {
            VAR34 *VAR35 = VAR30->VAR35 + VAR16;
            for (VAR19 = 0; VAR19 < VAR35->VAR50; VAR19++)
            {
                if (FUN2(&VAR2->VAR20) < VAR35->VAR56[VAR19] || sizeof(VAR35->VAR54) < VAR35->VAR60 + VAR35->VAR56[VAR19] + 4)
                {
                    FUN9(VAR2->VAR43, VAR44, "" VAR61 "", VAR35->VAR60, VAR35->VAR56[VAR19], FUN2(&VAR2->VAR20));
                    return VAR45;
                }
                FUN17(&VAR2->VAR20, VAR35->VAR54 + VAR35->VAR60, VAR35->VAR56[VAR19]);
                VAR35->VAR60 += VAR35->VAR56[VAR19];
                VAR35->VAR56[VAR19] = 0;
                if (VAR35->VAR51)
                {
                    VAR35->VAR51--;
                    VAR35->VAR62++;
                    VAR35->VAR54[VAR35->VAR60++] = 0xFF;
                    VAR35->VAR54[VAR35->VAR60++] = 0xFF;
                    VAR35->VAR63[VAR35->VAR62] = VAR35->VAR60;
                }
            }
        }
    }
    return 0;
}