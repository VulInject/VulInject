static int FUN1(VAR1 *VAR2, VAR3 *VAR4, int *VAR5, VAR6 *VAR7, VAR8 *VAR9, int VAR10, int VAR11, VAR12 *VAR13, int VAR14)
{
    int VAR15, VAR16, VAR17, VAR18;
    int VAR19;
    if (VAR11 < VAR9->VAR20[0].VAR21[VAR10].VAR22)
        return 0;
    VAR9->VAR20[0].VAR21[VAR10].VAR22 = VAR11 + 1;
    if (FUN2(&VAR2->VAR23) == 0 && VAR2->VAR24 == 8)
    {
        if (*VAR5 < FUN3(VAR4->VAR25) - 1)
        {
            VAR2->VAR23 = VAR4->VAR25[++(*VAR5)].VAR26;
        }
    }
    if (FUN4(&VAR2->VAR23) == VAR27)
        FUN5(&VAR2->VAR23, VAR28);
    if (!(VAR17 = FUN6(VAR2, 1)))
    {
        FUN7(VAR2);
        return 0;
    }
    else if (VAR17 < 0)
        return VAR17;
    for (VAR15 = 0; VAR15 < VAR9->VAR29; VAR15++)
    {
        VAR30 *VAR20 = VAR9->VAR20 + VAR15;
        VAR31 *VAR21 = VAR20->VAR21 + VAR10;
        if (VAR20->VAR32[0][0] == VAR20->VAR32[0][1] || VAR20->VAR32[1][0] == VAR20->VAR32[1][1])
            continue;
        VAR18 = VAR21->VAR33 * VAR21->VAR34;
        for (VAR16 = 0; VAR16 < VAR18; VAR16++)
        {
            VAR35 *VAR36 = VAR21->VAR36 + VAR16;
            int VAR37, VAR38, VAR39;
            if (VAR36->VAR40)
                VAR37 = FUN6(VAR2, 1);
            else
                VAR37 = FUN8(VAR2, VAR21->VAR41 + VAR16, VAR11 + 1) == VAR11;
            if (!VAR37)
                continue;
            else if (VAR37 < 0)
                return VAR37;
            if (!VAR36->VAR40)
            {
                int VAR42 = VAR13[VAR15] + VAR14 - 1 - FUN8(VAR2, VAR21->VAR43 + VAR16, 100);
                if (VAR42 < 0 || VAR42 > 30)
                {
                    FUN9(VAR2->VAR44, VAR45, "", VAR42);
                    return VAR46;
                }
                VAR36->VAR47 = VAR42;
            }
            if ((VAR38 = FUN10(VAR2)) < 0)
                return VAR38;
            FUN11(VAR38 > 0);
            if (VAR36->VAR40 + VAR38 >= VAR48)
            {
                FUN12(VAR2->VAR44, "");
                return VAR49;
            }
            if ((VAR39 = FUN13(VAR2)) < 0)
                return VAR39;
            if (VAR36->VAR50 + VAR39 + FUN14(VAR38) > 16)
            {
                FUN12(VAR2->VAR44, "");
                return VAR49;
            }
            VAR36->VAR50 += VAR39;
            VAR36->VAR51 = 0;
            VAR36->VAR52 = 0;
            do
            {
                int VAR53 = 0;
                while (VAR53 < VAR38)
                {
                    VAR53++;
                    if (FUN15(VAR7->VAR54, VAR36->VAR40 + VAR53 - 1))
                    {
                        VAR36->VAR52++;
                        break;
                    }
                }
                if ((VAR17 = FUN6(VAR2, FUN14(VAR53) + VAR36->VAR50)) < 0)
                    return VAR17;
                if (VAR17 > sizeof(VAR36->VAR55))
                {
                    FUN12(VAR2->VAR44, "" VAR56 "", sizeof(VAR36->VAR55));
                    return VAR49;
                }
                VAR36->VAR57[VAR36->VAR51++] = VAR17;
                VAR36->VAR40 += VAR53;
                VAR38 -= VAR53;
            } while (VAR38);
        }
    }
    FUN7(VAR2);
    if (VAR7->VAR58 & VAR59)
    {
        if (FUN16(&VAR2->VAR23) == VAR60)
            FUN5(&VAR2->VAR23, 2);
        else
            FUN9(VAR2->VAR44, VAR45, "", FUN4(&VAR2->VAR23));
    }
    for (VAR15 = 0; VAR15 < VAR9->VAR29; VAR15++)
    {
        VAR30 *VAR20 = VAR9->VAR20 + VAR15;
        VAR31 *VAR21 = VAR20->VAR21 + VAR10;
        VAR18 = VAR21->VAR33 * VAR21->VAR34;
        for (VAR16 = 0; VAR16 < VAR18; VAR16++)
        {
            VAR35 *VAR36 = VAR21->VAR36 + VAR16;
            for (VAR19 = 0; VAR19 < VAR36->VAR51; VAR19++)
            {
                if (FUN2(&VAR2->VAR23) < VAR36->VAR57[VAR19] || sizeof(VAR36->VAR55) < VAR36->VAR61 + VAR36->VAR57[VAR19] + 4)
                {
                    FUN9(VAR2->VAR44, VAR45, "" VAR62 "", VAR36->VAR61, VAR36->VAR57[VAR19], FUN2(&VAR2->VAR23));
                    return VAR46;
                }
                FUN17(&VAR2->VAR23, VAR36->VAR55 + VAR36->VAR61, VAR36->VAR57[VAR19]);
                VAR36->VAR61 += VAR36->VAR57[VAR19];
                VAR36->VAR57[VAR19] = 0;
                if (VAR36->VAR52)
                {
                    VAR36->VAR52--;
                    VAR36->VAR63++;
                    VAR36->VAR55[VAR36->VAR61++] = 0xFF;
                    VAR36->VAR55[VAR36->VAR61++] = 0xFF;
                    VAR36->VAR64[VAR36->VAR63] = VAR36->VAR61;
                }
            }
        }
    }
    return 0;
}